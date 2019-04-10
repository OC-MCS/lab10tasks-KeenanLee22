#pragma once
class FuelGauge
{
private:
	int currentFuel;
public:
	FuelGauge();
	FuelGauge(int);
	int getFuel();
	void decreaseFuel(int);
	void increaseFuel(int);
};

