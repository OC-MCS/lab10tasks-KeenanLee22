#include "Employee.h"
#include "ProductionWorker.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ProductionWorker worker(21, "Jerry", "1/1/18", 1, 10);
	worker.setName("Steve");
	worker.setNumber(2);
	worker.setDate("1/1/19");
	cout << "Name: " << worker.getName() << endl;
	cout << "Number: " << worker.getNumber() << endl;
	cout << "Date hired: " << worker.getDate() << endl;
	cout << "Shift: " << worker.getShift() << endl;
	cout << "Pay Rate: $" << worker.getPay() << "/hour" << endl;

}