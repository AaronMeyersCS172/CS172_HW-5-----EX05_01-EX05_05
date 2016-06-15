////////////////////////////////////////////////
// Aaron Meyers
// 6/11/16
// Homework 5: EX05_01
////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

template<typename T> // Creates template
int linearSearch(const T list[], T key, int arraySize) // This function will search through an array for a specific value from the user
{
	// This loop will go through the values that are stored in the array and serach for a speific value, "key", to see if it is in the array
	// The loop will end when it goes through the entire array
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i]) // Executes if a value value in the array is equal to the "key" value from the user
		{
			return i; // Returns the spot in the array that contains the value that is equal to "key" 
		}
	}

	return -1; // Returns -1 if "key" does not match a value in the array
}


int main()
{
	int gap = 7; // Establishs a gap variable

	cout << "Int values" << endl; // The following code tests integer values
	int list[] = {1, 4, 4, 2, 5, -3, 6, 2}; // Establishs an array that contains integers values
	int i = linearSearch(list, 4, 8); // Calls the linearSearch function to serach the array for a specfic value
	int j = linearSearch(list, -4, 8); // Calls the linearSearch function to serach the array for a specfic value
	int k = linearSearch(list, -3, 8); // Calls the linearSearch function to serach the array for a specfic value

	cout << i << setw(gap) << j << setw(gap) << k << endl; // Outputs results of the searchs
	cout << endl;

	cout << "double values" << endl; // The following code tests double values
	double List[] = { 0.1, 4.4, 5.4, 3.2, 5.9, -3.1, 6.2, 2.7 }; // Establishs an array that contains double values
	int x = linearSearch(List, 5.9, 8); // Calls the linearSearch function to serach the array for a specfic value
	int y = linearSearch(List, -4.0, 8); // Calls the linearSearch function to serach the array for a specfic value
	int z = linearSearch(List, -3.1, 8); // Calls the linearSearch function to serach the array for a specfic value

	cout << x << setw(gap) << y << setw(gap) << z << endl; // Outputs results of the searchs
	cout << endl;

	cout << "string values" << endl; // The following code tests string values
	string LIST[] = { "afro", "kilo", "kilo", "jazz", "quack", "waffle", "fuzz", "grass" }; // Establishs an array that contains string values
	string search1 = "fuzz"; // Converts a C-string to a string variable
	string search2 = "nachos"; // Converts a C-string to a string variable
	string search3 = "afro"; // Converts a C-string to a string variable
	int f = linearSearch(LIST, search1, 8); // Calls the linearSearch function to serach the array for a specfic value
	int g = linearSearch(LIST, search2, 8); // Calls the linearSearch function to serach the array for a specfic value
	int q = linearSearch(LIST, search3, 8); // Calls the linearSearch function to serach the array for a specfic value

	cout << f << setw(gap) << g << setw(gap) << q << endl; // Outputs results of the searchs
	cout << endl;


	return 0;
}