#ifndef MoneyMarketAcct_h
#define MoneyMarketAcct_h
#include <iostream>
#include <string>

using namespace std;

class MoneyMarketAcct : public BankAcct
{
private:
	int num_withdrawals;

public:
	// ============================= constructors
	MoneyMarketAcct();
	MoneyMarketAcct(string Name, double Balance);

	// ============================= modified setter;
	int withdraw(float amount);

	// ============================= overloaded <<
	friend ostream& operator <<(ostream &outStream, const MoneyMarketAcct &theMoneyMarketAcct);
};
#endif