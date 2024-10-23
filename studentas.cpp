#include "studentas.h"

studentas::studentas() {
    var = "Test";
    pav = "Test";
    paz = { 1, 2, 3 };
    egz = 0;
    Vid();
    Med();
    Rez();
}

studentas::studentas(string Var_, string Pav_, vector<double> Paz_, double Egz_) {
    var = Var_;
    pav = Pav_;
    paz = Paz_;
    egz = Egz_;
    Vid();
    Med();
    Rez();
}

studentas::~studentas() {
    var.clear();
    pav.clear();
    paz.clear();
    vid = 0;
    egz = 0;
    rez = 0;
}

void studentas::printas() {
    
    cout << setw(15) << left << pav << setw(15) << left << var; 
    cout << setw(20) << right << setprecision(2) << fixed << vid;
    cout << setw(20) << right << setprecision(2) << fixed << med << endl;
}

void studentas::pav_(string Pav_) {
    pav = Pav_;
}

string studentas::Get_pav() {
    return pav;
}

string studentas::Get_var() {
    return var;
}

void studentas::Rez() {

    rez = vid * 0.4 + egz * 0.6;
}

void studentas::Vid() {
    double sum = accumulate(paz.begin(), paz.end(), 0.0);
    vid = sum / paz.size();
}

void studentas::Med() {
    sort(paz.begin(), paz.end());
    if (paz.size() % 2 == 0) {
        med = (paz[paz.size() / 2 - 1] + paz[paz.size() / 2]) / 2;
    }
    else {
        med = paz[paz.size() / 2];
    }
}

void studentas::spausdintiHeader() {
    cout << setw(15) << left << "Pavarde"
        << setw(15) << left << "Vardas"
        << setw(20) << right << "Galutinis (Vid.)"
        << setw(20) << right << "Galutinis (Med.)" << endl;
    cout << "---------------------------------------------------------------------------" << endl;
}

void studentas::spausdintiVisus(vector<studentas>& students) {
   
    sort(students.begin(), students.end(), [](const studentas& a, const studentas& b) {
        if (a.pav == b.pav)
            return a.var < b.var;
        return a.pav < b.pav;
        });

    
    spausdintiHeader();

    
    for (auto& student : students) {
        student.printas();
    }

}

vector<studentas> studentas::readFromFile(const string& filename) {
    vector<studentas> students;
    ifstream file(filename);
    string line;

    if (file.is_open()) {
        getline(file, line); 

        while (getline(file, line)) {
            istringstream iss(line);
            string var, pav;
            vector<double> paz(5);  
            double egz;

           
            iss >> pav >> var >> paz[0] >> paz[1] >> paz[2] >> paz[3] >> paz[4] >> egz;

            
            students.push_back(studentas(var, pav, paz, egz));
        }

        file.close();
    }
    else {
        cout << "Failed to open the file!" << endl;
    }

    return students;
}
