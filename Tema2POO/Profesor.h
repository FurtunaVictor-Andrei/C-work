#pragma once

#include "Persoana.h"
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

class Profesor : public Persoana {

public:
    Profesor(const std::string nume, const std::string departament);
    bool adaugaCurs(const std::string curs);
    bool stergeCurs(const std::string curs);
    friend std::ostream& operator<<(std::ostream& out, const Profesor& profesor);
private:
    std::vector<std::string> listaCursuri;
    static const int NR_MAX_CURSURI = 5;
};
