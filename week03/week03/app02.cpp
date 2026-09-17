#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	//Pokemon() { cout << "Æ÷ÄÏ¸ó »ý¼ºÀÚ" << endl; }
	virtual ~Pokemon() { cout << "Æ÷ÄÏ¸ó °´Ã¼ ¼Ò¸ê" << endl; }
	virtual void attack() const { cout << "Æ÷ÄÏ¸ó ¸öÅë ¹ÚÄ¡±â" << endl; }
};

class Pikachu : public Pokemon
{
public:
	//Pikachu() { cout << "ÇÇÄ«Ãò »ý¼ºÀÚ" << endl; }
	virtual ~Pikachu() { cout << "ÇÇÄ«Ãò °´Ã¼ ¼Ò¸ê" << endl; }
	void attack() const { cout << "ÇÇÄ«Ãò 10¸¸ º¼Æ®" << endl; }
};
int main()
{
	Pokemon* ptr;

	ptr = new Pokemon();
	ptr->attack();
	delete ptr;
	ptr = nullptr;

	ptr = new Pikachu();
	ptr->attack();
	delete ptr;
	ptr = nullptr;
	return 0;
}