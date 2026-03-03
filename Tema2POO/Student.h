#pragma once

#include "Persoana.h"
#include <vector>
#include <string>
#include <iostream>

class Student : public Persoana {

public:
    Student(const std::string nume, const std::string specializare);
    bool adaugaNotaCurs(const std::string curs, int nota);
    void tiparesteNote() const;
    double mediaNotelor() const ;
    friend std::ostream& operator<<(std::ostream& out, const Student& student);

private:
    std::vector<std::string> listaCursuri;
    std::vector<int> note;
    static const int NR_MAX_CURSURI = 10;
};
