#include "Employee.h"



Employee::Employee(int num, string n, string hd)
{
	number = num;
	name = n;
	hireDate = hd;
}

string Employee::getName()
{
	return name;
}

int Employee::getNumber()
{
	return number;
}

string Employee::getDate()
{
	return hireDate;
}

void Employee::setName(string n)
{
	name = n;
}

void Employee::setNumber(int num)
{
	number = num;
}

void Employee::setDate(string hd)
{
	hireDate = hd;
}
