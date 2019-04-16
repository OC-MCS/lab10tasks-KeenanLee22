#pragma once
#include <string>
#include <iostream>
using namespace std;

class Ship
{
private:
	string name;
	string year;
public:
	Ship(string, string);
	string getName() const;
	string getYear() const;
	void setName(string);
	void setYear(string);
	void virtual print() const;
};