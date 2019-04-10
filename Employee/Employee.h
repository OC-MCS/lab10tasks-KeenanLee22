#pragma once
#include <string>
#include <iostream>
using namespace std;
class Employee
{
private:
	string name;
	int number;
	string hireDate;
public:
	Employee(int, string, string);
	string getName();
	int getNumber();
	string getDate();
	void setName(string );
	void setNumber(int);
	void setDate(string);
};

