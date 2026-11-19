#include <iostream>
using namespace std;


template <typename T>
void add(T a)
{
	cout << a << '\n';
}

template <typename T>
void add(T a, T b)
{
	cout << a << " + " << b << " = " << (a + b) << '\n';
}

int main()
{
    add(17);
    add(8.5, 4.1);
    add(17.0, 12.0);
    return 0;
}