#include "FuelGauge.h"
#include <iostream>
using namespace std;

FuelGauge::FuelGauge()
{
	currentFuel = 0;
}

FuelGauge::FuelGauge(int fuel)
{
	currentFuel = fuel;
}

int FuelGauge::getFuel()
{
	return currentFuel;
}

void FuelGauge::decreaseFuel(int amount)
{
	currentFuel -= amount;

}

void FuelGauge::increaseFuel(int amount)
{
	currentFuel += amount;
	if (currentFuel >= 15)
	{
		currentFuel = 15;
		cout << "Full tank." << endl;
	}
}
