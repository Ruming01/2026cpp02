#include <iostream>
using namespace std;


template <typename T>
void exchange(T* first, T* second)
{
	T temp = *first;
	*first = *second;
	*second = temp;
}

int main()
{
	int i1 = 1;
	int i2 = 2;
	exchange(&i1, &i2);
	cout << "swap(1, 2) = ";
	cout << i1 << "  " << i2 << endl;
	double d1 = 101.5;
	double d2 = 402.7;
	exchange(&d1, &d2);
	cout << "swap(101.5, 402.7) = ";
	cout << d1 << "  " << d2 << endl;

	char c1 = 'A';
	char c2 = 'B';
	exchange(&c1, &c2);
	cout << "swap('A', 'B') = ";
	cout << c1 << "  " << c2 << endl;
	return 0;
}