#include "Ship.h"
#include "CargoShip.h"
#include "CruiseShip.h"
#include <iostream>
using namespace std;
void displayShip(const Ship*);
int main()
{
	const int size = 3;
	Ship *ships[size] =
	{
		new Ship("S.S. Anne", "2005"),
		new CruiseShip(2000, "Mayflower", "1942"),
		new CargoShip(123, "'Merica", "1776")
	};
	for (int count = 0; count < size; count++)
	{
		displayShip(ships[count]);
	}
}

void displayShip(const Ship *ship)
{
	ship->print();
}