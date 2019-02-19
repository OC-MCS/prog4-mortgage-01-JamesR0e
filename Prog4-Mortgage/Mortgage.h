#pragma once
// header file for Mortgage class


//======================================================
// mortgage: class that holds all of the functions and data associated with a mortgage
//====================================================== 
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

