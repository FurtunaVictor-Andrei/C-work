#include <iostream>
#include "Timestamp.h"
#include "Activitate.h"
#include <vector>

int main()
{
	activitate a1(15, "Plimbare", 9, 32);
	activitate a2(50, "Citit", 12, 40);
	activitate a3(30, "Gaming pe PC", 15, 30);
	std::vector<activitate> activ;
	activ.push_back(a1);
	activ.push_back(a2);
	activ.push_back(a3);
	int max = -1;
	int timp;
	for (int i = 0; i <3; i++)
	{	
		std::cout << activ[i] << std::endl << std::endl;
	}
	activitate maxim(1, " ", 8, 0);
	for (int i = 0; i < 3; i++)
	{
		timp = activ[i].getdurata() + activ[i].setTime().getminut() + activ[i].setTime().getora() * 60;
		if (timp >= max)
		{
			max = timp;
			maxim = activ[i];
		}
	}
	std::cout << "Activitatea care se va termina cel mai tarziu este: " << maxim.gettitle() << std::endl;
}
