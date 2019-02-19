#pragma once
// header file for Mortgage class

class mortgage
{
private:
	float loan;
	float rate;
	int years;
	float term;
	void calcterm();
public:
	mortgage();
	float getpayment();
	void setloan(float loan);
	void setrate(float rate);
	void setyears(int years);
	float gettotal();
};

