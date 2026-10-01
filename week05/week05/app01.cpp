#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Animal {
public:
	virtual void makeSound() { cout << "동물이 소리를 냅니다\n"; }
};
class Dog : public Animal {
public:
	void makeSound() { cout << "멍멍\n"; }
};
class Cat : public Animal {
public:
	void makeSound() { cout << "냐옹\n"; }
};


int main() 
{
	Animal* p = new Animal();
	p->makeSound();
	delete p;
	p = nullptr;

	p = new Dog();
	p->makeSound();

	//Dog* pd = (Dog*)p;  // Down casting old C style
	//pd->makeSound();

	//Cat* pc = (Cat*)p;  // Down casting old C style. Danger!
	//Cat* pc = dynamic_cast<Cat*>(p);  // Down casting Modern C++ style.
	Dog* pd = dynamic_cast<Dog*>(p);
	pd->makeSound();

	delete p;
	p = nullptr;
	return 0;
}