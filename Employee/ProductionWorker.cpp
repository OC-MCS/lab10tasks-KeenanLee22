#include "ProductionWorker.h"





int ProductionWorker::getShift()
{
	return shift;
}

double ProductionWorker::getPay()
{
	return payRate;
}

void ProductionWorker::setShift(int s)
{
	shift = s;
}

void ProductionWorker::setPay(double pr)
{
	payRate = pr;
}
