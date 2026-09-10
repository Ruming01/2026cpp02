
#include "receipt.h"

int main()
{

	Beverage beverage1("Americano", 2000);
	Beverage beverage2("Cafe Latte", 3000);

	Receipt receipt(1000);
	receipt.add(2, beverage1);
	receipt.add(4, beverage2);
	receipt.print();
	return 0;
}