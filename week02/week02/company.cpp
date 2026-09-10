
#include "company.h"


Company::Company(string name, string tel)
	: name(name), tel(tel)
{}

Company::~Company()
{}

void Company::print() const
{
	cout << "회사명 : " << name << '\n';
	cout << "연락처 : " << tel << '\n';
}