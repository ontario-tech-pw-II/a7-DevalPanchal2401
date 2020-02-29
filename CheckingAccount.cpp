#include "CheckingAccount.h"

using namespace std;

	
// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee ) : Account( initialBalance ) 
{
	// your code
    if(fee < 0)
        fee = 0;
    transactionFee = fee;
} 

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
	// your code
    Account::credit(amount);
} 

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
	// your code
    return Account::debit(amount);
}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	// your code
    auto balance = getBalance();
    setBalance(balance - transactionFee);
}

void CheckingAccount::display(ostream & os) const
{
	// your code
    os << "Account Type: " << accName << endl;
    os << "Balance: $" << getBalance() << endl;
    os << "TransactionFee: " << transactionFee << endl;
}