#include <iostream>
#include "Mortgage.h"

// implementation file for Mortgage class
using namespace std;

//======================================================
// calcterm: calculates the term
// parameters:  n/a
// return type: n/a
//====================================================== 
void mortgage::calcterm()
{
	term = pow((1 + (rate / 12)), (12 * years));
}

//======================================================
// setloan: lets the user set the loan principle in an instance of mortgage
// parameters: a float representing the principle
// return type: n/a
//====================================================== 
void mortgage::setloan(float l)
{
	loan = l;
}

//======================================================
// setrate: lets the user set the interest rate in an instance of mortgage
// parameters:  a float representing the rate
// return type: n/a
//====================================================== 
void mortgage::setrate(float r)
{
	rate = r/100;
}

//======================================================
// setyears: lets the user set the number of years a mortage lasts in an instance of mortgage
// parameters:  an integer representing the number of years
// return type: n/a
//====================================================== 
void mortgage::setyears(int y)
{
	years = y;
}

//======================================================
// getpayment: calculates the monthly payment amount
// parameters:  n/a
// return type: returns the payment amount as a float
//====================================================== 
float mortgage::getpayment()
{
	float payment;
	calcterm();
	payment = (loan * (rate / 12) * term) / (term - 1);
	return payment;
}

//======================================================
// gettotal: calculates the total amount paid to the bank after x years
// parameters:  n/a
// return type: returns the total as a float
//====================================================== 
float mortgage::gettotal()
{
	float total, payment;
	payment = getpayment();
	total = 12 * years * payment;
	return total;
}

//======================================================
// constructor: a default constructor for the mortgage class
// parameters:  n/a
// return type: n/a
//====================================================== 
mortgage::mortgage()
{
	loan = 0;
	rate = 0;
	term = 0;
	years = 0;
}




