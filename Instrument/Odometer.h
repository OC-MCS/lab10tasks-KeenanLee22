#pragma once
#include "FuelGauge.h"
class Odometer 
{
private:
	int mileage;
public:
	Odometer();
	Odometer(int);
	void addMile(FuelGauge &);
	int getMile();
};

