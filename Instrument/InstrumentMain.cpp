#include "Odometer.h"
#include "FuelGauge.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	FuelGauge fuel(10);
	Odometer miles(0);
	cout << "Fuel: " << fuel.getFuel() << endl;
	cout << "Miles: " << miles.getMile() << endl;
	cout << "Filling Tank..\n";
	fuel.increaseFuel(5);
	cout << "Fuel: " << fuel.getFuel() << endl;
	cout << "Miles: " << miles.getMile() << endl;
	while (fuel.getFuel() != 0)
	{
		miles.addMile(fuel);
		cout << "Fuel: " << fuel.getFuel() << endl;
		cout << "Miles: " << miles.getMile() << endl;
	}

}