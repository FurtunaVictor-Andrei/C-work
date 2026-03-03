#pragma once
#include <string>

class Persoana {

public:
    Persoana(const std::string nume, const std::string afiliere);
    std::string getNume() const;
    std::string getAfiliere() const;
    void setAfiliere(const std::string afiliere);
protected:
    std::string nume;
    std::string afiliere;
};
