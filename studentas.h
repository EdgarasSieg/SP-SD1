#pragma once

#include "manobib.h"

class studentas {
private:
    string var, pav;
    vector<double> paz; 
    double vid, med, rez, egz;  

public:
    studentas();
    studentas(string, string, vector<double>, double);  
    ~studentas();

    void printas();  
    void pav_(string);
    string Get_pav();
    string Get_var();
    void Rez();  
    void Vid(); 
    void Med();  


    static void spausdintiHeader();  
    static void spausdintiVisus(vector<studentas>& students);  

    static vector<studentas> readFromFile(const string& filename);  
};
