
#ifndef RECEIPT_H
#define RECEIPT_H
#include "beverage.h"

class Receipt
{
private:
    int receiptNumber;
    int receiptTotal;
public:
    Receipt(int receiptNumber);
    ~Receipt();
    void add(int quantity, Beverage beverage);
    void print() const;
};
#endif