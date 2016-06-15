#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Transaction
{
private:
	int Date; // This represents the date that the transaction occurs
	int year; // This represents the year that the transaction occurs
	int month; // This represents the month that the transaction occurs
	int day; // This represents the day that the transaction occurs
	char type; // This represents the type of transaction that occurs
	double amount; // This represents the amount of money that is added or removed
	double balance; // This represents the balance of the account
	string description; // This represents the reason that the user performs the transaction

public:
	Transaction(); // default constructor
	Transaction(char, double, double, string); // This takes data from the user to create a transaction
	void setDate(int, int, int); // This sets the variable for the date 
	int getYear(); // return the year
	int getMonth(); // returns the month
	int getDay(); // returns the day
	void setType(char); // this sets the type of transaction
	void setAmount(double); // this sets the amount of money that was moved to or from the account
	void setBalance(double); // this sets the ablance that remains after the transactions
	void setDescription(string); // this sets the description that the user gives for why they made a transaction
	//void getDate(); // returns the date of the transaction
	char getType(); // returns the type of transaction that occured
	double getAmount(); // returns the amount of money that was moved
	double getBalance(); // returns the balance of the account after the transaction occurs
	string getDescription(); // returns the description for the user performing the transaction
	void displayTransactions(); // this will display the transactiosn that were performed
};

#endif