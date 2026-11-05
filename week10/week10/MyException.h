#pragma once
#include "DynamicArray.h"

class MyException {
public:
	int errorCode;
	const char* errorMsg;
	const DynamicArray* errorAddress;
	MyException(int ec, const char* em, const DynamicArray* ea);
};