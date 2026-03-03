#include "Activitate.h"
#include <iostream>

activitate::activitate(int durata, std::string title, int ora, int minut) : start(ora, minut)
{
	if (durata > 0 && durata <= 60)
	{
		this->durata = durata;
	}
	else
	{
		this->durata = 0;
		std::cout << "Durata nu poate fii mai mare de 60min sau negativa" << std::endl;
	}
	this->title=title;

}

int activitate::getdurata()
{
	return this->durata ;
}

std::string activitate::gettitle()
{
	return this->title;
}

timestamp activitate::setTime()
{
	return this->start;
}

std::ostream& operator<<(std::ostream& out, activitate& d)
{
	out << "Activitatea: " << d.title << std::endl << "Durata acitvitatii este de " << d.durata << " minute" << std::endl
		<< "Ora la care a inceput activitatea: " << d.start.getora() << ":" << d.start.getminut();
	return out;
}