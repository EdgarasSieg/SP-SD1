#include "studentas.h"

studentas::studentas(string vardas_, string pavarde_, vector<double> nd_, double egzaminas_) {
    var = vardas_;
    pav = pavarde_;
    paz = nd_;
    egz = egzaminas_;
    Vid();
    Rez();
}

void studentas::Vid() {
    double sum = accumulate(paz.begin(), paz.end(), 0.0);
    vid = sum / paz.size();
}

void studentas::Rez() {
    rez = vid * 0.4 + egz * 0.6;
}

double studentas::getGalutinisVid() const {
    return rez;
}

vector<studentas> studentas::readFromFile(const string& filename) {
    vector<studentas> students;
    ifstream file(filename);
    string line;

    if (file.is_open()) {
        getline(file, line);

        while (getline(file, line)) {
            istringstream iss(line);
            string vardas, pavarde;
            vector<double> paz(5);
            double egz;

            iss >> pavarde >> vardas >> paz[0] >> paz[1] >> paz[2] >> paz[3] >> paz[4] >> egz;

            studentas student(vardas, pavarde, paz, egz);
            students.push_back(student);
        }

        file.close();
    }
    else {
        cout << "Nepavyko atidaryti failo: " << filename << endl;
    }

    return students;
}

void studentas::writeToFile(const vector<studentas>& students, const string& filename) {
    ofstream file(filename);

    if (file.is_open()) {
        file << "Pavarde     Vardas      Galutinis (Vid.)\n";

        for (const auto& student : students) {
            file << setw(15) << left << student.pav
                << setw(15) << left << student.var
                << setw(10) << right << setprecision(2) << fixed << student.rez << "\n";
        }

        file.close();
    }
    else {
        cout << "Nepavyko atidaryti failo rasymui: " << filename << endl;
    }
}
