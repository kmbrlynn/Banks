#include "BankAcct.h"
#include <iostream>
#include <string>

using namespace std;

// ==================================================== constructors
BankAcct::BankAcct()
{
	name = "Account_owner";
	balance = 0.00;
}

BankAcct::BankAcct(string Name, double Balance)
{
	name = Name;
	balance = Balance;
}

// ==================================================== getters
string BankAcct::getName()
{
	return name;
}

double BankAcct::getBalance()
{
	return balance;
}

// ==================================================== setters

void BankAcct::deposit(float amount)
{
	if (amount < 0)
	{
		cout << "Error! Quantity of deposited funds must be positive. Aborting deposit.\n\n";
		return;
	}
	else
	{
		balance = balance + amount;
	}
}

int BankAcct::withdraw(float amount)
{
	if (balance - amount < 0)
	{
		cout << "Error! Insufficient funds. Overdraft Protection is aborting withdrawal.\n\n";
		return 1;	
	}
	else
	{
		balance = balance - amount;
		cout << "Withdrawal successful.\n\n";
		return 0;
	}
}

void BankAcct::transfer(float amount, BankAcct &ToAcct)
{
	ToAcct.balance = ToAcct.balance + amount;
	balance = balance - amount;

}

// ==================================================== overloaded <<
ostream& operator <<(ostream &outStream, const BankAcct &theAcct)
{
	outStream << "Account type: Bank Account\n";
	outStream << "Account name: " << theAcct.name << endl;
	outStream << "Account balance: $" << theAcct.balance << endl;

	return outStream;
}
