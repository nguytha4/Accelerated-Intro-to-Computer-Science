/***************************************************************************************** *********************************************
** Author: Thanh Nguyen
** Date: 5/6/2017
** Description: Recursive function - Take an array of doubles and the size of the array and returns the sum of the values in the array.
************************************************************* *************************************************************************/

#include <iostream>
using namespace std;

// Function Prototype
double summer(double[], int);

// Summer Function
double summer(double array[], int size)
{
	// If there are no elements in the array, return a value of 0
	if (size == 0)
		return 0;
	
	// Decrement the size of the array to account for array subscript starting from 0
	size--;
	
	// Return the value of the current index of the array and recursively call the function to grab the next value to sum
	return array[size] + summer(array, size);
}