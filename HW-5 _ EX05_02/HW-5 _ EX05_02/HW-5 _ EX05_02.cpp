///////////////////////////////////////////////
// Aaron Meyers
// 6/11/16
// Homework 5: EX05_02
///////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

template<typename T> // Creates a template
bool isSorted(const T list[], int size); // Prototype for the function that will test whether or not an array is sorted

int main()
{
	const int ISIZE = 5; // Establishes a size for the arrays
	
	int List[ISIZE]; // Declares an array for integers
	int intInput = 0; // Declares a integer variable for user input
	
	// This loop is for getting input from the user and saving those input into the array
	// The loop will end once the loop is filled
	for (int i = 0; i < ISIZE; i++)
	{
		cout << "Input an intger" << endl;
		cin >> intInput; // Get data from the user

		List[i] = intInput; // Saves user input into the array
	}
	cout << "Are the integer values sorted?  " << isSorted(List, ISIZE) << endl; // Displays results

	cout << "\n" << endl; // Creates spaces
	

	double list[ISIZE]; // Declares an array for doubles
	double doubleInput = 0; // Declares a double variable for user input

	// This loop is for getting input from the user and saving those input into the array
	// The loop will end once the loop is filled
	for (int i = 0; i < ISIZE; i++)
	{
		cout << "Input a double (ex: 1.6)" << endl;
		cin >> doubleInput; // Get data from the user

		list[i] = doubleInput; // Saves user input into the array
	}
	cout << "Are the double values sorted?  " << isSorted(list, ISIZE) << endl; // Displays results

	cout << "\n" << endl; // Creates spaces
	

	string LIST[ISIZE]; // Declares an array for strings
	string stringInput = ""; //Declares a string variable for user input

	// This loop is for getting input from the user and saving those input into the array
	// The loop will end once the loop is filled
	for (int i = 0; i < ISIZE; i++)
	{
		cout << "Input a word" << endl;
		cin >> stringInput; // Get input from the user

		LIST[i] = stringInput; // Saves user input into the array
	}
	cout << "Are the strings sorted?  " << isSorted(LIST, ISIZE) << endl; // Displays results

	return 0;
}

template<typename T> // Creates a template
bool isSorted(const T list[], int size) // This function will test whether or not the values stored in an array are sorted in order
{
	bool sorted = true; // Declares a boolian value with the default value of true
	
	T Previous = list[0]; // Establishs a baseline, that is equal to the first value in the array, which will be used to test the rest of the array 


	// This loop will go through the array and test whether or not the values are sorted in order
	for (int i = 0; i < size; i++)
	{
		if (list[i] < Previous) // Executes if the current array value is less than the baseline
		{
			sorted = false; // The boolian value becomes false because the values in the array are not stored in order
		}
		else // Executes if the current array value is greater than the baseline value
		{
			Previous = list[i]; // Makes the baseline value, "Previous", equal to the current array value 
		}
	}

	return sorted; // Returns the boolian value
}