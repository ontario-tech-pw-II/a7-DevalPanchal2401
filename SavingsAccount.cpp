#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	// your code
	interestRate = rate;
	if(initialBalance < 0)
	{
		initialBalance = 0;
	}
	if(rate < 0)
	{
		rate = 0;
	}
	
}

double SavingsAccount::calculateInterest() {
	// your code
	if(interestRate < 0)
	{
		interestRate = 0;
	}else{
		interestRate *= getBalance();
	}
	
} 
void SavingsAccount::display(ostream & os) const
{
	// your code
	os << "Account Type: " << accName << endl;
	os << "Balance: $" << getBalance() << endl;
	os << "Interest Rate: %" << (interestRate*100) << endl; 
}