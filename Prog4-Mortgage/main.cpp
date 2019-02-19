//===================================================== 
// James Roe
// 20 February 2019
// Programming Assignment #4
// Description: mortgage calculator
//===================================================== 

#include <iostream>
#include <string>
#include <iomanip>
#include "Mortgage.h"

using namespace std;

bool parseInt(string sval, float& val);

//======================================================
// main: uses mortgage class, handles input
// parameters:  none
// return type: none 
//====================================================== 
int main()
{
	mortgage m; //an instance of mortgage using the default constructer defined in the .h file
	string loan, rate, years; //input initially entered as a string for garbage input checking purposes
	float payment, total, numloan, numrate, numyears;
	cout << "Please enter the principle amount" << endl;

	getline(cin, loan);
	while (!parseInt(loan, numloan))
	{
		cout << "Invalid input, please enter an integer value" << endl;
		getline(cin, loan);
	}
	m.setloan(numloan);

	cout << "Please enter the interest rate" << endl;
	getline(cin, rate);
	while (!parseInt(rate, numrate))
	{
		cout << "Invalid input, please enter an integer value" << endl;
		getline(cin, rate);
	}
	m.setrate(numrate);

	cout << "please enter the number of years" << endl;
	getline(cin, years);
	while (!parseInt(years, numyears))
	{
		cout << "Invalid input, please enter an integer value" << endl;
		getline(cin, years);
	}
	m.setyears(numyears);

	cout << fixed << showpoint << setprecision(2);
	payment = m.getpayment();
	cout << "Your monthly payment is $" << payment << endl;
	total = m.gettotal();
	cout << "Your total paid at the end of the loan is: $ " << total << endl;
	return 0;
}

//======================================================
// parseInt: tests for garbage character input
// parameters:  string value, float value
// return type: returns true a successful conversion
//====================================================== 
bool parseInt(string sval, float& val)
{
	float num;
	bool success = true;
	try
	{
		num = stof(sval);
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}
