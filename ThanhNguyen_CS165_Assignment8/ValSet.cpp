/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/16/2017
** Description: Implementation file for the ValSet class.
**********************************************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "ValSet.hpp"
using namespace std;

// Default Constructor
template <class T>
ValSet<T>::ValSet()
{
	aPtr = new T[10];									// Allocate memory for an array of size 10
	arraySize = 10;										// Set the array size to 10
	numVals = 0;										// Set the number of values in the set to 0
}

// Copy Constructor
template <class T>
ValSet<T>::ValSet(const ValSet &obj)
{
	arraySize = obj.arraySize;							// Copy the array size of the object
	aPtr = new T[arraySize];							// Allocate memory for an array of the same size as the object
	numVals = obj.numVals;								// Copy the number of values of the object
	for (int index = 0; index < numVals; index++)		// For loop to iterate through the set contained in the object
		aPtr[index] = obj.aPtr[index];					//     copy the values to the new object
}

// Destructor
template <class T>
ValSet<T>::~ValSet()
{
	if (arraySize > 0) delete [] aPtr;					// If the array is larger than 0, delete the array
}

// Overloaded = operator that returns a ValSet object
template <class T>
ValSet<T> ValSet<T>::operator=(const ValSet &right)
{
	if (arraySize > 0) delete [] aPtr;					// If the array is larger than 0, delete the array
	
	arraySize = right.arraySize;						// Copy the array size to the new object
	aPtr = new T[arraySize];							// Allocate memory for an array of the same size as the object
	numVals = right.numVals;							// Copy the number of vales as the object
	
	for (int index = 0; index < numVals; index++)		// For loop to iterate through the set contained in the object
		aPtr[index] = right.aPtr[index];				//     copy the values to the new object
	
	return *this;										// Return the ValSet object
}

// size() method; return number of values in the set
template <class T>
int ValSet<T>::size()
{
	return numVals;										// Return the number of values of the object
}

// isEmpty method; returns true if there are no values in the set and false otherwise
template <class T>
bool ValSet<T>::isEmpty()
{
	if (numVals == 0)									// If there are no values in the set
		return true;									// Return true
	else												// Otherwise,
		return false;									// Return false
}

// contains method; pass in a value T and check if the set contains it. If it does, return true. If no, return false
template <class T>
bool ValSet<T>::contains(T input)
{
	for (int index = 0; index < numVals; index++)		// For loop to iterate through the set
	{
		if (input == aPtr[index])						// If the value being checked is found in the set
			return true;								// Return true
	}
	
	return false;										// Otherwise, return false
}

// add method; pass in a value T and add it to the set if it is not already in it. If the array is full, double its size. If a value was added, increase the number of values
template <class T>
void ValSet<T>::add(T input)
{
	for (int index = 0; index < numVals; index++)		// Iterate through the set
	{
		if (input == aPtr[index])						// If the value trying to be added is found in the set
			return;										// Return and do nothing
	}
	
	if (numVals == arraySize)							// If the number of values is equal to the array size; aka the array is full
	{
		arraySize *= 2;									// Double the array size
		
		T *temp;										// Create a temporary pointer variable to create the new array
		temp = new T[arraySize];						// Allocate memory for a new, larger array
		
		for (int index = 0; index < numVals; index++)	// Iterate through the set of the old array
			temp[index] = aPtr[index];					// Copy the values from the old array into the new, temporary array
		
		delete [] aPtr;									// Delete the old array
		aPtr = temp;									// Copy the address of the new array into the member pointer variable
		
		aPtr[numVals] = input;							// Add the value T to the new array
		
		numVals++;										// Increase the number of values in the array
	}
	else												// Else,
	{
		aPtr[numVals] = input;							// Add the value T to the new array
		numVals++;										// Increase the number of values in the array
	}
}

// remove method; pass in a value T. If it is found in the set, shift everything over to demonstrate the value being removed. If a value was removed, decrease the number of values
template <class T>
void ValSet<T>::remove(T input)
{
	if (input == aPtr[numVals-1])						// If the value T is in the last position of the set
	{
		numVals--;										// Decrease the number of values to "remove" it from the set
		return;											// Return and do nothing else in the function
	}
	
	for (int index = 0; index < (numVals - 1); index++)	// For loop to interate through the set, except for the last value
	{
		if (input == aPtr[index])						// If the value T is found in the set
		{	
			for (int j = index; j < (numVals - 1); j++)	// For loop to iterate through the set, except for the last value, starting from where the value T was found
				aPtr[j] = aPtr[j+1];					// Shift over all of the values by copying the next subsequent value in the set
			
			numVals--;									// Decrease the number of values
			
			return;										// Return and do nothing else in the function
		}
	}
}

// getAsVector method; create/return a vector the object's set
template <class T>
vector<T> ValSet<T>::getAsVector()
{
	vector<T> set;										// Create a vector
	for (int index = 0; index < numVals; index++)		// For loop to iterate through the set
		set.push_back(aPtr[index]);						// Copy the values from the set into the vector
	return set;											// Return the vector
}

// Create these versions of the ValSet class
template class ValSet<int>;
template class ValSet<char>;
template class ValSet<string>;