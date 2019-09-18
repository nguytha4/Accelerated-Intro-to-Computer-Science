/******************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/24/17
** Description: Function - Take a reference to a pointer to a dynamically allocated array of doubles and the size of the array.
						   Replace the array with one that is twice as big with the second half as a copy of the original.
*******************************************************************************************************************************/

/*
#include <iostream>
using namespace std;
*/

// Function Prototype
void repeatArray (double* &, int);

/*
int main()
{
	double* myArray = new double[3];
	
	for (int i=0; i<3; i++)
		myArray[i] = (i+1)*2;

	repeatArray(myArray, 3);

	for (int i=0; i<6; i++)
		cout << myArray[i] << endl;

	delete []myArray;
	myArray = 0;
	
	return 0;
}
*/

// repeatArray Function
void repeatArray (double* &arrayIn, int arraySize)
{
	// Create a variable to hold the size of the new array that must be created. It is double the current size
	int doubleArraySize = arraySize * 2;
	
	// Create a temporary pointer that points to the new array 
	double* tempArray = new double[doubleArraySize];
	
	// Loop through the size of the passed array
	for (int i = 0; i < arraySize; i++)
	{
		// Copy each value of the current array into the new array and also to the newly doubled area which is represented by (i + the original size)
		tempArray[i] = tempArray[i+arraySize] = arrayIn[i];
	}
	
	// Delete the current that was passed in
	delete [] arrayIn;
	// Set the pointer to 0
	arrayIn = 0;
	
	// Set the pointer that was passed in to the temporary pointer's value
	arrayIn = tempArray;
	
	// Set the temporary pointer's value to 0
	tempArray = 0;
}