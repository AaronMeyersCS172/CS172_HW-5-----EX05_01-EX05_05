#include "Transaction.h"


void Transaction::setDate(int YEAR, int MONTH, int DAY) // This will set the values for the date that the transaction occurs
{
	year = YEAR;
	month = MONTH;
	day = DAY;
}

int Transaction::getYear() // this returns the year that the transaction occurs
{
	return year;
}

int Transaction::getMonth() // this returns the month that the transaction occurs
{
	return month;
}

int Transaction::getDay() // this returns the day that the transaction occurs
{
	return day;
}

void Transaction::setType(char TYPE) // sets the value for the type of transaction that occured
{
	type = TYPE;
}

void Transaction::setAmount(double AMOUNT) // saves the amount that the user removes or adds to their account
{
	amount = AMOUNT;
}

void Transaction::setBalance(double BALANCE) // this will save the balance of teh accoiunt after the transaction occurs
{
	balance = BALANCE;
}

void Transaction::setDescription(string DESCRIPTION) // this will save the reason that the user gave for performing the transaction
{
	description = DESCRIPTION;
}

/*
void Transaction::getDate()
{

}
*/

char Transaction::getType() // returns the type of transaction that occurs
{
	return type;
}
double Transaction::getAmount() // returns the amount of money that the user move to and from the account
{
	return amount;
}

double Transaction::getBalance() // returns the balance of the accout after the transaction occurs
{
	return balance;
}

string Transaction::getDescription() // returns the reason that the user gave for performing the transaction
{
	return description;
}

// this will take tha daat from the user and their account to create a entry of the transaction they made
Transaction::Transaction(char Type, double Amount , double Balance, string Description)
{
	Transaction T1;

	T1.setType(Type);
	T1.setAmount(Amount);
	T1.setBalance(Balance);
	T1.setDescription(Description);
}

// This is a default constructor that sets the private variable with default values
Transaction::Transaction()
{
	type = 0;
	amount = 0;
	balance = 0;
	description = "";
}

// This will display the results of the transaction back to the user
void Transaction::displayTransactions()
{
	Transaction T1;

	cout << "The activity on your account is as follows: " << endl;
	cout << "You made a " << T1.getType() << " of " << T1.getAmount() << " for the purpose of " << T1.getDescription()
		<< ". Your balance afterwards was " << T1.getBalance() << endl;
}
