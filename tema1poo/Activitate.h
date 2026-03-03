#pragma once
#include <iostream>
#include "Timestamp.h"
class activitate
{
public:
	activitate(int=0, std::string="Nume", int=8, int=0);
	int getdurata();
	std::string gettitle();
	timestamp setTime();
	friend std::ostream&  operator<< (std::ostream&, activitate&);
private:
	int durata;
	std::string title;
	timestamp start;

};

