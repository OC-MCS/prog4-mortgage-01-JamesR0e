#include <iostream>
#include "Mortgage.h"

// implementation file for Mortgage class
using namespace std;

void mortgage::calcterm()
{
	term = pow((1 + (rate / 12)), (12 * years));
}
void mortgage::setloan(float l)
{
	loan = l;
}
void mortgage::setrate(float r)
{
	rate = r/100;
}
void mortgage::setyears(int y)
{
	years = y;
}
float mortgage::getpayment()
{
	float payment;
	calcterm();
	payment = (loan * (rate / 12) * term) / (term - 1);
	return payment;
}
float mortgage::gettotal()
{
	float total, payment;
	payment = getpayment();
	total = 12 * years * payment;
	return total;
}
mortgage::mortgage()
{
	loan = 0;
	rate = 0;
	term = 0;
	years = 0;
}




