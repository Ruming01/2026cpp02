
#ifndef RECEIPT_H
#define RECEIPT_H
#include "beverage.h"
#include "company.h"

class Receipt
{
private:
    int receiptNumber;
    int receiptTotal;
	Company company; // has - a
public:
    Receipt(int receiptNumber, Company company); // aggregation
    ~Receipt();
    void add(int quantity, Beverage beverage); // dependency
    void print() const;
};
#endif