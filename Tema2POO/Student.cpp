#include "Student.h"
#include <iomanip>

Student::Student(const std::string nume, const std::string specializare) : Persoana(nume, specializare) {}

bool Student::adaugaNotaCurs(const std::string curs, int nota) 
{
    if (listaCursuri.size() >= NR_MAX_CURSURI) 
    {
        return false;
    }
    else 
    {
        listaCursuri.push_back(curs);
        note.push_back(nota);
        return true;
    }
}

void Student::tiparesteNote() const
{
    std::cout << "Student: " << getNume() << " (" << getAfiliere() << ") ";
    for (int i = 0; i < listaCursuri.size(); ++i) 
    {
        std::cout << listaCursuri[i] << ":" << note[i] << " ";
    }
    std::cout << std::endl;
}

double Student::mediaNotelor() const 
{
    if (note.empty())
    {
        return 0.0;
    }
        double sum = 0;
    for (int i = 0; i < note.size(); ++i) 
    {
        int n = note[i];
        sum += n;
    }
    return sum / note.size();
}

std::ostream& operator<<(std::ostream& out, const Student& student) {
    out << "Student: " << student.getNume() << " (" << student.getAfiliere() << ")";
    return out;
}