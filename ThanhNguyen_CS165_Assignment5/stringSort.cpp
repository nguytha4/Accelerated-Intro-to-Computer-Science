/**************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/30/17
** Description: Function - Take an array of strings and the size of the array.
				Sort the array of strings into dictionary order through the selection sort method.
				Additionally, a supplemental function, upperCase, is used in the stringSort
				function to ensure that when the strings are compared, they are done so in an
				upperCase format to properly alphabetize the strings, regardless of ASCII values.
**************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

// Function Prototypes
void stringSort(string[], int);
string upperCase(string);

// stringSort Function
void stringSort(string array[], int size)
{
	int startScan, minIndex;		// Variables to for outer loop to scan enter array, and variable to hold the beginning index of the selection as it moves up
	string minValue;				// Variable to hold the lowest value for the inner loop aka the selection that is being sorted
	
	// For loop that runs through the entire array except for the last value because it has nothing left to be compared to
	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;			// Set the beginning of the current selection which should move up the array as the outer loops moves up
		minValue = array[startScan];	// Set the current minimum value of the selection to the starting value in the selection of the array
		
		// For loops that runs through the current selection of the array through all values to look for the current lowest value
		for (int index = startScan + 1; index < size; index++)
		{
			// If the current value being looked at is less than the current minimum value
			if (upperCase(array[index]) < upperCase(minValue))
			{
				minValue = array[index];	// Set the new minimum value to the value being looked at
				minIndex = index;			// Mark where this new minimum value was found
			}
		}
		// Swap the value of the beginning of current selection with the new minimum value found
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

// upperCase Function
string upperCase(string stringIn)
{
	string upperString;		// Variable to hold the string that will be all upper case of the inputted string
	char tempChar;			// Variable to hold the chars as they are converted to upper case
	
	// For loop that runs through the inputted string, char by char
	for (int i = 0; i < stringIn.length(); i++)
	{
		tempChar = toupper(stringIn[i]);	// Set the temporary char to the upper case version of the string's selected char
		upperString += tempChar;			// Concatenate the temporary char into the upper case string
	}
	
	// Return the upper case string
	return upperString;
}