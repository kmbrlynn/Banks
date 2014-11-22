#include "BankAcct.h"
#include "MoneyMarketAcct.h"
#include "CDAcct.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	BankAcct TD_Checking("Kimberly Douglas", 5000);
	MoneyMarketAcct TD_MoneyMarket("Katherine Douglas", 5000);
	CDAcct TD_CD("Laurie Douglas", 5000);

	// ========================================================== withdrawals & deposits

	cout << "\n========================================================\n";
	cout << "Account 1\n";
	cout << "========================================================\n\n";
	cout << TD_Checking;

	cout << "\nDepositing $125............................\n\n";
	TD_Checking.deposit(125);
	cout << TD_Checking;

	cout << "\nWithdrawing $643...........................\n\n";
	TD_Checking.withdraw(643);
	cout << TD_Checking;

	cout << "\n========================================================\n";
	cout << "Account 2\n";
	cout << "========================================================\n\n";
	cout << TD_MoneyMarket;

	cout << "\nDepositing $125............................\n\n";
	TD_MoneyMarket.deposit(125);
	cout << TD_MoneyMarket;

	cout << "\nWithdrawing $643...........................\n\n";
	TD_MoneyMarket.withdraw(643);
	cout << TD_MoneyMarket;

	cout << "\n========================================================\n";
	cout << "Account 3\n";
	cout << "========================================================\n\n";
	cout << TD_CD;

	cout << "\nDepositing $125............................\n\n";
	TD_CD.deposit(125);
	cout << TD_CD;

	cout << "\nWithdrawing $643...........................\n\n";
	TD_CD.withdraw(643);
	cout << TD_CD;

	// ====================================================================== transfers

	cout << "\n========================================================\n";
	cout << "TRANSFERS: Kimberly & Katherine\n";
	cout << "========================================================\n\n";
	
	cout << "Initial account balances.....................\n\n";
	cout << TD_Checking;	// Kim
	cout << endl;
	cout << TD_MoneyMarket;	// Kate
	cout << endl;

	cout << "Transferring $300\n";
	cout << "from Kimberly to Katherine...................\n\n";
	TD_Checking.transfer(300, TD_MoneyMarket);

	cout << "New account balances.........................\n\n";
	cout << TD_Checking;	// Kim
	cout << endl;
	cout << TD_MoneyMarket;	// Kate
	cout << endl;

	cout << "\n========================================================\n";
	cout << "TRANSFERS: Kimberly & Laurie\n";
	cout << "========================================================\n\n";
	
	cout << "Initial account balances...................\n\n";
	cout << TD_Checking;	// Kim
	cout << endl;
	cout << TD_CD;			// Laurie
	cout << endl;

	cout << "Transferring $300\n";
	cout << "from Kimberly to Laurie......................\n\n";
	TD_Checking.transfer(300, TD_CD);

	cout << "New account balances.........................\n\n";
	cout << TD_Checking;	// Kim
	cout << endl;
	cout << TD_CD;			// Laurie
	cout << endl;

	cout << "\n========================================================\n";
	cout << "TRANSFERS: Katherine & Laurie\n";
	cout << "========================================================\n\n";
	
	cout << "Initial account balances...................\n\n";
	cout << TD_MoneyMarket;	// Kate
	cout << endl;
	cout << TD_CD;			// Laurie
	cout << endl;

	cout << "Transferring $300\n";
	cout << "from Katherine to Laurie......................\n\n";
	TD_MoneyMarket.transfer(300, TD_CD);

	cout << "New account balances.........................\n\n";
	cout << TD_MoneyMarket;	// Kate
	cout << endl;
	cout << TD_CD;			// Laurie
	cout << endl;

	return 0;
}
