/////////////////////////////////////
// Aaron Meyers
// 6/11/16
// Homework 5: EX05_04
/////////////////////////////////////

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <iomanip>
using namespace std;

template<typename T> // Creates a template
void shuffle(vector<T>& v); // Prototype for the function that will shuffle the numbers that the user inputs

int main()
{
	srand(time(NULL)); // Seeds the puesdo random number generator

	int vectorSIZE = 10; // Establishs a size for limiting user input
	int inputVectorINT; // Declares a variable for user input

	vector<int> Numbers; // Creates a vector

	// This loop will take a speified number of inputs from the user and store them into the vector
	// The loop will end once the number of inputs have reached the limit
	for (int i = 0; i < vectorSIZE; i++)
	{
		cout << "Input a number" << endl;
		cin >> inputVectorINT; // Get input from the user

		Numbers.push_back(inputVectorINT); // Stores the input from the user into the vector
	}

	shuffle(Numbers); // Calls the function that will shuffle the integers that are stored in the vector

	return 0;
}


template<typename T> // Creates a template
void shuffle(vector<T>& v) // This function will shuffle the numbers that are stored in the vector and output the new order back to the user
{
	vector<int> NewOrder; //Creates a vector that will hold the numbers in a new order by taking them randomly from the following two vectors
	vector<int> PILE1; // Creates a vector that will hold half of the values in the vector "v"
	vector<int> PILE2; // Creates a vector that will hold half of the values in the vector "v"
	int mid = ((v.size() / 2));
	
	// This loop will saves the values that are in the first half of the "v" vector into the "PILE1" vector
	// The loop will end once "i" is equal to the value of "mid"
	for (int i = 0; i < mid; i++)
	{
		PILE1.push_back(v.at(i)); // Saves the value of the "v" vector into the "PILE1" vector
	}
	
	// This loop will saves the values that are in the second half of the "v" vector into the "PILE2" vector
	// The loop will end once "i" is equal to the size of "v"
	for (int i = mid; i < v.size(); i++)
	{
		PILE2.push_back(v.at(i)); // Saves the value of the "v" vector into the "PILE2" vector
	}


	int PileChoose = rand() % 2; // Randomizes a value that will choose which "PILE" vector to take a value from

	// This loop will take the value from teh "PILE" vectors and saves them into the "NewOrder" vector
	// The loop will end once BOTH "PILE" vectors have been emptyed
	while (PILE1.size() > 0 || PILE2.size() > 0)
	{
		if (PileChoose == 0 && PILE1.size() > 0) // Executes if "PileChoose" is 0 and if the "PILE1" vector is not empty
		{
			NewOrder.push_back(PILE1.back()); // Saves the value from the "PILE1" vector into the the "NewOrder" vector
			PILE1.pop_back(); // Removes an element from the "PILE1" vector
			PileChoose = rand() % 2; // Rerandomizes a value that will choose which "PILE" vector to take a value from
		}

		else if (PileChoose = 1 && PILE2.size() > 0) // Executes if "PileChoose" is 1 and if the "PILE2" vector is not empty
		{
			NewOrder.push_back(PILE2.back()); // Saves the value from the "PILE2" vector into the the "NewOrder" vector
			PILE2.pop_back(); // Removes an element from the "PILE2" vector
			PileChoose = rand() % 2; // Rerandomizes a value that will choose which "PILE" vector to take a value from
		}
	}



	cout << "The new order for your number is: " << endl;

	// This loop will output all of the values that are stored in the "NewOrder" vector
	for (int i = 0; i < NewOrder.size(); i++) 
	{
		cout << NewOrder.at(i) << setw(4); // Outputs the cuurent value in the vector
	}
	cout << endl; // Creates an empty line
}