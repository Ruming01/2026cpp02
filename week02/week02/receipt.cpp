
#include "receipt.h"

// 생성자
Receipt::Receipt(int receiptNumber)
	: receiptNumber(receiptNumber), receiptTotal(0)
{}
// 소멸자
Receipt::~Receipt()
{}
// add 멤버 함수
void Receipt::add(int quantity, Beverage beverage)
{
	receiptTotal += quantity * beverage.getPrice();
}
// print 멤버 함수
void Receipt::print() const
{
	cout << "영수증 번호: " << receiptNumber << endl;
	cout << "영수증 금액: " << receiptTotal << endl;
}