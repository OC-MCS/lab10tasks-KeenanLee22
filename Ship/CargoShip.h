#pragma once
#include "Ship.h"
#include <string>
#include <iostream>
using namespace std;

class CargoShip : public Ship
{
private:
	int capacity;
public:
	CargoShip(int c, string n, string y) : Ship(n, y)
	{
		capacity = c;
	}
	int getCapacity() const
	{
		return capacity;
	}
	void setCapacity(int c)
	{
		capacity = c;
	}
	void virtual print() const
	{
		cout << "Name: " << getName() << endl;
		cout << "Capacity: " << capacity << endl;
	}

};