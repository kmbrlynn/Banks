#include "BankAcct.h"
#include "CDAcct.h"
#include <iostream>
#include <string>

using namespace std;

// ==================================================== constructors
CDAcct::CDAcct()
{
	name = "Account_owner";
	balance = 0.00;
	interest_rate = 0.0625;
}

CDAcct::CDAcct(string Name, double Balance)
{
	name = Name;
	balance = Balance;
	interest_rate = 0.0625;
}

// ==================================================== modified setters
void CDAcct::apply_interest()
{
	balance += balance * interest_rate;
}

int CDAcct::withdraw(float amount)
{
	float fee;
	
	cout << "Warning!\n";
	cout << "You will be charged an early withdrawal fee of: $";
	fee = 0.25*interest_rate*balance;
	cout << fee << endl << endl;

	if (balance - fee - amount < 0)
	{
		cout << "Error! Insufficient funds. Overdraft Protection is aborting withdrawal.\n\n";
		return 1;	
	}
	else
	{
		balance = balance - fee - amount;
		cout << "Withdrawal successful.\n\n";
		return 0;
	}
}

// ==================================================== overloaded <<
ostream& operator <<(ostream &outStream, const CDAcct &theCDAcct)
{
	outStream << "Account type: CD Account\n";
	outStream << "Account name: " << theCDAcct.name << endl;
	outStream << "Account balance: $" << theCDAcct.balance << endl;
	outStream << "Interest rate: " << theCDAcct.interest_rate << endl;

	return outStream;
}