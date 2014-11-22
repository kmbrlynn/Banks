#ifndef BankAcct_h
#define BankAcct_h
#include <iostream>
#include <string>

using namespace std;

class BankAcct
{
protected:
	string name;
	double balance;

public:
	// ============================= constructors
	BankAcct();
	BankAcct(string Name, double Balance);

	// ============================= getters
	string getName();
	double getBalance();

	// ============================= setters
	void deposit(float amount);
	int withdraw(float amount);
	void transfer(float amount, BankAcct &ToAcct);

	// ============================= overloaded <<
	friend ostream& operator <<(ostream &outStream, const BankAcct &theBankAcct);
};
#endif