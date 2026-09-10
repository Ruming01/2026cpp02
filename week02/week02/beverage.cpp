
#include "beverage.h"


Beverage::Beverage(string name, int unitPrice)
	: name(name), unitPrice(unitPrice)
{}

Beverage::~Beverage()
{}

int Beverage::getPrice() const
{
	return unitPrice;
}