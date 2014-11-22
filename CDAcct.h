#ifndef CDAcct_h
#define CDAcct_h
#include <iostream>
#include <string>

using namespace std;

class CDAcct : public BankAcct
{
private:
	double interest_rate;

public:
	// ============================= constructors
	CDAcct();
	CDAcct(string Name, double Balance);

	// ============================= modified setter;
	void apply_interest();
	int withdraw(float amount);

	// ============================= overloaded <<
	friend ostream& operator <<(ostream &outStream, const CDAcct &theCDAcct);
};
#endif