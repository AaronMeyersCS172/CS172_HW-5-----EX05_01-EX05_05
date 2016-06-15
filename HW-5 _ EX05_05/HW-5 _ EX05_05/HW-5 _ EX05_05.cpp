//////////////////////////////////////////
// Aaron Meyers
// 6/12/16
// Homework 5: EX05_05
/////////////////////////////////////////

#include <iostream>
#include <string>
#include <vector>
#include "Account.h"
#include "Transaction.h"
using namespace std;

int main()
{
	Account A1;
	Transaction T1;
	vector<Transaction> Transactions; // Creates a vector

	int intInput = 0; // Declares a variable for user input
	double doubleInput = 0; // Declares a variable for user input
	string stringInput = ""; // Declares a variable for user input

	cout << "You are making a new accout at the bank." << endl;
	cout << "What is your ID number?" << endl;
	cin >> intInput; // Get input from the user
	A1.setID(intInput); // Sends the user input to the "Account" class to set up the account information

	cout << "\nHow much money are you going to put into your new bank account? " << endl;
	cin >> doubleInput; // Get input from the user
	A1.setBalance(doubleInput); // Sends the user input to the "Account" class to set up the account information

	cout << "\nAt which interest rate would you like you account to be on?" << endl;
	cin >> doubleInput; // Get input from the user
	A1.setAnnualInterestRate(doubleInput); // Sends the user input to the "Account" class to set up the account information

	cout << "Your cuurent information is:" << endl;
	cout << "You ID is: " << A1.getID() << endl; // Outputs to the user their ID number 
	cout << "You balance is currently: " << A1.getBalance() << endl; // Outputs to the user the current amount of money they have in their account
	cout << "Your monthly interest rate is : " << A1.getMonthlyInterestRate() << endl; // outputs to the user the monthly interest rate that their account is under

	

	
	int intInputW = 0; // Declares a variable for user input
	double doubleInputW = 0; // Declares a variable for user input
	string stringInputW = ""; // Declares a variable for user input

	cout << "\nHow much money do you want to remove from your account?" << endl;
	cin >> doubleInputW; // Get input from the user
	A1.withdraw(doubleInputW); // Sends the user input to the "Account" class to set up the account information
	cout << "\nWhy did you withdrawl from your account?" << endl;
	cin >> stringInputW; // Get input from the user
	A1.setDescription(stringInputW); // Sends the user input to the "Account" class to set up the account information
	//cout << "You balance is currently: " << A1.getBalance() << endl; // Outputs to the user the current amount of money they have in their account

	int intInputD = 0; // Declares a variable for user input
	double doubleInputD = 0; // Declares a variable for user input
	string stringInputD = ""; // Declares a variable for user input

	cout << "\nHow much money do you want to diposit into your account?" << endl;
	cin >> doubleInputD; // Get input from the user
	A1.disposit(doubleInputD); // Sends the user input to the "Account" class to set up the account information
	cout << "\nWhy did you put money into your account?" << endl;
	cin >> stringInputD; // Get input from the user
	A1.setDescription(stringInputD); // Sends the user input to the "Account" class to set up the account information
	cout << "You balance is currently: " << A1.getBalance() << endl; // Outputs to the user the current amount of money they have in their account
	

	//T1.displayTransactions();
	cout << endl; // Creates a empty line

	return 0;
}