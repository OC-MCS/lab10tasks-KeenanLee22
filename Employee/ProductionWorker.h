#pragma once
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;
class ProductionWorker : public Employee
{
private:
	int shift;
	double payRate;
public:
	ProductionWorker(int num, string n, string dh, int s, double p) : Employee(num, n, dh)
	{
		Employee(num, n, dh);
		shift = s;
		payRate = p;
	}
	int getShift();
	double getPay();
	void setShift(int);
	void setPay(double);
};

