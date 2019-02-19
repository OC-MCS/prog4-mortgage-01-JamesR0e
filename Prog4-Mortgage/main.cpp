#include <iostream>
#include <string>
#include <iomanip>
#include "Mortgage.h"

using namespace std;

int main()
{
	mortgage m;
	float loan, rate, years, payment, total;
	cout << "Please enter the principle amount" << endl;
	cin >> loan;
	m.setloan(loan);
	cout << "Please enter the interest rate" << endl;
	cin >> rate;
	m.setrate(rate);
	cout << "please enter the number of years" << endl;
	cin >> years;
	m.setyears(years);
	payment = m.getpayment();
	cout << "Your monthly payment is $" << payment << endl;
	total = m.gettotal();
	cout << "Your total paid at the end of the loan is: $ " << total << endl;
	return 0;
}
// main goes here. Code that *uses* the Mortgage class
// goes in this file

