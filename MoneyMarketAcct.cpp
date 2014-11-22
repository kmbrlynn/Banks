#include "BankAcct.h"
#include "MoneyMarketAcct.h"
#include <iostream>
#include <string>

using namespace std;

// ==================================================== constructors
MoneyMarketAcct::MoneyMarketAcct()
{
	name = "Account_owner";
	balance = 0.00;
	num_withdrawals = 0;
}

MoneyMarketAcct::MoneyMarketAcct(string Name, double Balance)
{
	name = Name;
	balance = Balance;
	num_withdrawals = 0;
}

// ==================================================== modified setter
int MoneyMarketAcct::withdraw(float amount)
{
	if (num_withdrawals > 1)
	{
		cout << "Warning!\n";
		cout << "You will be charged a withdrawal fee of: $1.50\n\n";
		balance = balance - 1.50;
	}

	if (balance - amount < 0)
	{
		cout << "Error! Insufficient funds. Overdraft Protection is aborting withdrawal.\n\n";
		return 1;	
	}
	else
	{
		balance = balance - amount;
		cout << "Withdrawal successful.\n\n";
		num_withdrawals++;
		return 0;
	}
}

// ==================================================== overloaded <<
ostream& operator <<(ostream &outStream, const MoneyMarketAcct &theMoneyMarketAcct)
{
	outStream << "Account type: Money Market Account\n";
	outStream << "Account name: " << theMoneyMarketAcct.name << endl;
	outStream << "Account balance: $" << theMoneyMarketAcct.balance << endl;
	outStream << "Withdrawals to date: " << theMoneyMarketAcct.num_withdrawals << endl;

	return outStream;
}