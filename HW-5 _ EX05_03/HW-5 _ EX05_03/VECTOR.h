#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <iomanip>
using namespace std;

template<typename T> // Creates a template
class MakeVectors
{
private:
	int SIZE; // This is for the size of the array
	T* element; // This is the variable that will act as an array
	int index; // This variable is for user input when calling the value stored in the above array


public:
	MakeVectors(); // Default constructor
	void VectorWithSize(int); // Makes an array with its size determined by user input
	T VectorWithSizeAndValue(int, T); // Makes an array with its size and values determined by user input

	void push_back(T); // Stores a value into the array
	void pop_back(); // Deletes a spot in the array
	const int size(); // Outputs to teh user the size of the array
	T const at(int); // Outputs to the user a specific value that is store in the array
	bool const empty(); // Checks to see if the array is empty
	void clear(); // Deletes the array
	void swap(MakeVectors<T> &v2); // This will swap the value of an array with that of a vector
};






template<typename T> // Creates a template
MakeVectors<T>::MakeVectors() // Default constructor
{
	SIZE = 0; // Sets the value to 0
	element;
	index = 0; // Sets the value to 0
}

template<typename T> // Creates a template
void MakeVectors<T>::VectorWithSize(int size) // Creates an array with its size determined by user input
{
	SIZE = size; // Sets SIZE equal to the value of the user input
	element = new T [SIZE]; // Creates a array with a dynamic size
}

template<typename T> // Creates a template
T MakeVectors<T>::VectorWithSizeAndValue(int size, T defaultValue) // Creates an array with its size and value determined by the user
{
	SIZE = size; // Sets SIZE equal to the value of the user input
	element = new T [SIZE]; // Creates a array with a dynamic size
	element[] = defaultValue; // Makes a spot in the array equal to the value obtained from the user
}

template<typename T> // Creates a template
void MakeVectors<T>::push_back(T input) // Stores user input into the array
{
	element[SIZE];
	element = input;
}

template<typename T> // Creates a template
void MakeVectors<T>::pop_back() // Deletes a value in the array
{
	return element[SIZE--]; // Decreases the size of the array
}

template<typename T> // Creates a template
const int MakeVectors<T>::size() // This function will output the size of the array
{
	return SIZE; // Returns the size of the array
}

template<typename T> // Creates a template
T const MakeVectors<T>::at(int index)
{
	return element[index]; // Returns the value that is stored in the array at the spot speificed by "index"
}

template<typename T> // Creates a template
bool const MakeVectors<T>::empty() // This will check to see if the array is empty
{
	bool FILLED = true; // Creates a boolian expression set to "true"

	if (SIZE == 0) // Executes if the "SIZE" value is 0
	{
		FILLED = false; // Sets boolian value to "false"
		return FILLED; // Returns boolian value
	}

	return FILLED; // Returns boolian values
}

template<typename T> // Creates a template
void MakeVectors<T>::clear() // This function will delete the array of all of the values stored in it
{
	delete[] element; // Deletes the array
}

template<typename T> // Creates a template
void MakeVectors<T>::swap(MakeVectors<T> &v2)
{
	T SWAP = v2; // Makes "v2" equal to "SWAP"
	v2 = element[]; // Makes "v2" equal to "element"
	element[] = SWAP; // Makes "SWAP" equal to "element"
}

#endif