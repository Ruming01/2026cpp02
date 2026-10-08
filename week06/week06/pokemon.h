#pragma once
#include <iostream>
using namespace std;

class Pokemon // interface (abstract class)
{
public:
	virtual void attack() const = 0; // 순수 가상 함수 pure virtual function
};