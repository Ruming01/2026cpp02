#include <iostream>
#include <string>
#include <cstring>
using namespace std;


template <typename T>
void printInfo(T data)
{
	cout << data << '\n';
	cout << "General Template \n";
}

template<>
void printInfo<const char*>(const char* data)
{
  cout << data << '\n';
  cout << "Specialized Template\n";
  //cout << strlen(data) << '\n'; // c funtion can be used in specialized template
}

int main()
{
	printInfo(55);
	printInfo(2.71);
	printInfo("C++");
  return 0;
}