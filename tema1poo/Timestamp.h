#pragma once
class timestamp
{
public:
	timestamp(int=0, int=0);
	void setTime(int, int);
	int getora();
	int getminut();
private:
	int ora;
	int minut;
};

