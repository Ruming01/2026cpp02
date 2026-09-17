#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	void print() const { cout << "포켓몬 클래스" << endl; }
};

class Pikachu : public Pokemon
{
public:
	void print() const { cout << "피카츄 클래스" << endl; }
};
int main()
{
	Pokemon* ptr;

	ptr = new Pokemon();
	ptr->print();
	delete ptr;
	ptr = nullptr;

	ptr = new Pikachu();
	ptr->print();
	delete ptr;
	ptr = nullptr;
	return 0;
}