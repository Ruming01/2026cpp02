#include <iostream>
#include "DynamicArray.h"
#include "MyException.h"

using namespace std;

int main() {
	DynamicArray da1(5);

	try {
		da1.setValue(0, 99);
		da1.setValue(4, -77);
		// da1.setValue(9, 3); // exception
		cout << da1.getValue(4) << "\n";
		cout << da1.getValue(3) << "\n"; // 더미 값 출력 (초기화 x)
		cout << da1.getValue(9) << "\n"; // exception
	}
	catch (const char* errorCode) {
		cout << errorCode;
	}
	catch (const MyException& e) {
		cout << e.errorCode << e.errorMsg << "(" << e.errorAddress << ")\n";
	}

	return 0;
}