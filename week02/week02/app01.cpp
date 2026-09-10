
#include "receipt.h"
#include "company.h"

int main()
{

	Beverage beverage1("Americano", 2000);
	Beverage beverage2("Cafe Latte", 3000);
	Company daelimDabahg("대림카페", "031-1234-5678");

	Receipt receipt(1000, daelimDabahg); // aggregation
	receipt.add(2, beverage1);
	receipt.add(4, beverage2);
	receipt.print();
	return 0;
}