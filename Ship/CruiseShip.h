#pragma once
#include "Ship.h"
#include <string>
#include <iostream>
using namespace std;

class CruiseShip : public Ship
{
private:
	int passengers;
public:
	CruiseShip(int c, string n, string y) : Ship(n, y)
	{
		passengers = c;
	}
	int getPassengers() const
	{
		return passengers;
	}
	void setPassengers(int c)
	{
		passengers = c;
	}
	void virtual print() const
	{
		cout << "Name: " << getName() << endl;
		cout << "Maximum Passengers: " << passengers << endl;
	}
};