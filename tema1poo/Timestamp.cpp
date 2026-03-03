#include "Timestamp.h"
#include <iostream>

timestamp::timestamp(int ora, int minut)
{
	setTime(ora, minut);
}
void timestamp::setTime(int ora, int minut)
{
	if (ora >= 8 && ora<16)
	{
		this->ora = ora;
	}
	else
	{
		this->ora = 8;
		std::cout << "Ora invalida" << std::endl;
	}
	if (minut >= 0 && minut <60)
	{
		this->minut = minut;
	}
	else
	{
		this->minut = 0;
		std::cout << "Minutele sunt invalide" << std::endl;
	}
	
}

int timestamp::getora()
{
	return this->ora;
}

int timestamp::getminut()
{
	return this->minut;
}