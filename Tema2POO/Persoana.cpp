#include "Persoana.h"

Persoana::Persoana(const std::string nume, const std::string afiliere): nume(nume), afiliere(afiliere) {}

std::string Persoana::getNume() const 
{
    return nume;
}

std::string Persoana::getAfiliere() const 
{
    return afiliere;
}

void Persoana::setAfiliere(const std::string afiliere) {
    this->afiliere = afiliere;
}