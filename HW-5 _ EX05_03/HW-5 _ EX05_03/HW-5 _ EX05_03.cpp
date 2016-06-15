///////////////////////////////////////
// Aaron Meyers
// 6/11/16
// Homework 5: EX05_03
///////////////////////////////////////

#include <iostream>
#include <iomanip>
#include "VECTOR.h"
using namespace std;

int main()
{
	MakeVectors<int> intVector; // Creates a pointer for the "MakeVector" class
	
	int input = 0; // Declares a variable for user input
	int valueInputs = 0; // Declares a variable for user input

	cout << "Create a size for your vector." << endl;
	cin >> input; // Get data from the user

	intVector.VectorWithSize(input); // Sends user input to the function to make an array with the size determined by user input

	cout << "The size of your \"vector\" is " << intVector.size() << endl; // Shows the size of the array
	cout << "Is your vector empty? " << intVector.empty() << endl; // Shows the user if the array is empty
	
	cout << "Input " << intVector.size() << " numbers." << endl; 
	
	// This loop will get data from the user to store values in an array in the "MakeVector" class
	// The loop will end once the size of the array is matched
	for (int i = 0; i < intVector.size(); i++)
	{
		cin >> valueInputs; // Get data from the user

		intVector.push_back(valueInputs); // Sends data to the function that will store the value in an array
	}
	

	cout << "The values in the array are " << endl;

	// The loop will display the values that are store in the array
	for (int i = 0; i < intVector.size(); i++)
	{
		cout << intVector.at(i) << setw(5); // calls the function that will display the array
	}

	cout << endl; // Makes an empty line

}