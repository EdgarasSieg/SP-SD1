#pragma once
#include "manobib.h"

class studentas {
private:
    string var, pav;
    vector<double> paz;
    double vid, rez, egz;

public:
    studentas() = default;
    studentas(string, string, vector<double>, double);

    void Vid();   
    void Rez();  
    double getGalutinisVid() const;  

    static vector<studentas> readFromFile(const string& filename);  
    static void writeToFile(const vector<studentas>& students, const string& filename);  
};
