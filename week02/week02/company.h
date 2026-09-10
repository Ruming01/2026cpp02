
#ifndef COMPANY_H
#define COMPANY_H
#include <string>
#include <iostream>
using namespace std;

class Company
{
private:
    string name;
    string tel;
public:
    Company(string name, string tel);
    ~Company();
    void print() const;
};
#endif