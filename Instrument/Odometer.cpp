#include "Odometer.h"
#include <iostream>
using namespace std;
Odometer::Odometer()
{
	mileage = 0;
}

Odometer::Odometer(int miles)
{
	mileage = miles;
}

void Odometer::addMile(FuelGauge &fuel)
{
	if (fuel.getFuel() == 0)
	{
		cout << "Out of fuel."; 
	}
	else
	{
		mileage += 1;
		if (mileage > 999999)
		{
			mileage = 0;
		}
		if (mileage % 24 == 0)
		{
			fuel.decreaseFuel(1);
		}
	}


}

int Odometer::getMile()
{
	return mileage;
}
