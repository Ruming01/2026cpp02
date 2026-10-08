#include <iostream>
#include <string>
using namespace std;

class Pokemon // interface (abstract class)
{
public:
	virtual void attack() const = 0; // 순수 가상 함수 pure virtual function
};
class Pikachu : public Pokemon
{
public:
	void attack() const { cout << "피카츄 10만 볼트" << endl; }
};
class Squirtle : public Pokemon
{
public:
	void attack() const { cout << "꼬부기 하이드로펌프" << endl; }
};
int main()
{
	// Pokemon pokemon; // 추상 클래스는 객체 생성 불가.
	Pokemon* p = new Squirtle(); // Concrete Class
	p->attack();

	delete p; // 동적 할당 해제
	p = nullptr;

	return 0;
}