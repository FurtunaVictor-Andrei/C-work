#include "Profesor.h"
#include <algorithm>
Profesor::Profesor(const std::string nume, const std::string departament) : Persoana(nume, departament) {}

bool Profesor::adaugaCurs(const std::string curs) 
{
    if (listaCursuri.size() >= NR_MAX_CURSURI) 
    {
        return false;
    }
    if (std::find(listaCursuri.begin(), listaCursuri.end(), curs) != listaCursuri.end()) 
    {
        return false;
    }
    else 
    {
        listaCursuri.push_back(curs);
        return true;
    }
}

bool Profesor::stergeCurs(const std::string curs) 
{
    std::vector<std::string>::iterator it = std::find(listaCursuri.begin(), listaCursuri.end(), curs);
    if (it != listaCursuri.end()) 
    {
        listaCursuri.erase(it);
        return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream& out, const Profesor& profesor) {
    out << "Professor: " << profesor.getNume() << " (" << profesor.getAfiliere() << ")";
    return out;
}