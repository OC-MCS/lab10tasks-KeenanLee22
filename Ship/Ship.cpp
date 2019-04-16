#include "Ship.h"

Ship::Ship(string n, string y)
{
	name = n;
	year = y;
}

string Ship::getName() const
{
	return name;
}

string Ship::getYear() const
{
	return year;
}

void Ship::setName(string n)
{
	name = n;
}

void Ship::setYear(string y) 
{
	year = y;
}

void Ship::print() const
{
	cout << "Name: " << name << endl;
	cout << "Year: " << year << endl;
}
