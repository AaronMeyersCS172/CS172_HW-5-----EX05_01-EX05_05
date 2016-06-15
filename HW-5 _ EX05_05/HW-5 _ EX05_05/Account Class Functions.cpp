#include <iostream>
#include <string>
#include <vector>
#include "Account.h"
#include "Transaction.h"
using namespace std;

vector<Transaction>; // Creates a vector

// This function creates default values for the private variables of Account class
Account::Account()
{
	id = 0;
	balance = 0;
	annualInterestRate = 0;
	DESCRIPTION = "";
}

// This function will subtract from balance based on user input
void Account::withdraw(double withdrawal)
{
	balance -= withdrawal; // Subtracts from "balance" the amount the user inputs
	Transactions.push_back(Transaction('W', withdrawal, balance, DESCRIPTION)); // Transfers transaction info to the Transaction class
}

// This function will add to balance based on user input
void Account::disposit(double disposit)
{
	balance += disposit; // Adds to "balance" the amount the user inputs
	Transactions.push_back(Transaction('D', disposit, balance, DESCRIPTION)); // Transfers transaction info to the Transaction class
}

// This function will return the value of "balance"
double Account::getBalance()
{
	return balance;
}

// This function will return the value of "id"
int Account::getID()
{
	return id;
}

// This function will return the value of "annualInterestRate"
double Account::getAnnualInterestRate()
{
	return annualInterestRate;
}

// This function will set the value of "id" to that of the user input
void Account::setID(int IDnumber)
{
	id = IDnumber;
}

// This function will set the value of "balance" to that of the user input
void Account::setBalance(double InitialBalance)
{
	balance = InitialBalance;
}

// This function will set the value of "annualInterestRate" to that of the user input
void Account::setAnnualInterestRate(double InterestRate)
{
	annualInterestRate = InterestRate;
}

// This function will set the value of "DESCRIPTION" to that of the user input
void Account::setDescription(string description)
{
	DESCRIPTION = description;
}

// This function will set the value of "DESCRIPTION" to that of the user input
string Account::getDescription()
{
	return DESCRIPTION;
}

// This function will return the monthly interest rate (annualInterestRate / 12) to the user
double Account::getMonthlyInterestRate()
{
	return annualInterestRate / 12;
}

/*
void Account::Interest()
{
	balance += (balance * annualInterestRate);
}
*/

