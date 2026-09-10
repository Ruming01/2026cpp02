
#ifndef BEVERAGE_H
#define BEVERAGE_H
#include <string>
#include <iostream>
using namespace std;

class Beverage
{
private:
    string name;
    int unitPrice;
public:
    Beverage(string name, int unitPrice);
    ~Beverage();
    int getPrice() const;
};
#endif