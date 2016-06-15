#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
#include <vector>
#include "Transaction.h"
using namespace std;

class Account 
{
private:
	double annualInterestRate; // Declares a variable for the interest rate of the users account
	double balance; // Declares a variable that represents how much money the user has in their account
	int id; // Declares a variable for the ID of the user
	string DESCRIPTION; // Declares a variable that describes the users intention for any changes to their account balance
	vector<Transaction> Transactions; // Creates a vector

public:

	Account(); // Constructor with default values
	void withdraw(double); // This represent withdrawals for the account
	void disposit(double); // This represents dispoists into the account
	double getBalance(); // Returns the value of "balance"
	int getID(); // Returns the value of "id"
	double getAnnualInterestRate(); // Returns the value of "annual interest rate"
	string getDescription();
	void setID(int); // Sets the value of "id" to user input
	void setBalance(double); // Sets the value of "balance" to user input
	void setAnnualInterestRate(double); // Sets the value of "annualInterestRate" to user input
	void setDescription(string); // Sets the value of "DESCRIPTION" to user input
	double getMonthlyInterestRate(); // Returns the value of "monthly interest rate"
	//void Interest();
};

#endif