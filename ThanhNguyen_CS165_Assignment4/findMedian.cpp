/***************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/20/2017
** Description: This function takes an array of int and size of an array as parameters and returns the median of the array.
****************************************************************************************************************************/

/*
#include <iostream>
using namespace std;
*/

// Function Prototype
double findMedian (int[], int);

/*
int main()
{
	const int NUM_INTS = 5;
	int intArray[NUM_INTS] = {8, 19, 4, 37, 47};
	
	double answer = findMedian(intArray, NUM_INTS);
	
	for (int j = 0; j < NUM_INTS; j++)
	{
		cout << intArray[j] << endl;
	}
	
	cout << "The median is: " << answer << endl;
	
	// Exit program
	return 0;
}
*/

// Median function
double findMedian (int numbers[], int size)
{
	int swap = 0;			// Variable to use for swapping two other variables
	double middle = 0.0;	// Variable to hold the median that will be returned from the function
	int i = 0;				// Counter variable for while loop
	
	// While the counter is less than the size of the array minus 1 (nothing follows last variable in the array to compare to)
	while (i < size - 1)
	{
		// If the first number in two consecutive numbers is greater than the second
		if (numbers[i] > numbers[i+1])
		{
			// Swap the numbers in the array
			swap = numbers[i];
			numbers[i] = numbers[i+1];
			numbers[i+1] = swap;
			// Reset the loop to start from the beginning in case numbers needed to be sorted to the front of the array
			i = 0;
		}
		// Else increment the counter and check the next two consecutive numbers
		else
		{
			i++;
		}
	}
	
	// If the number of ints in the array is even
	if (size % 2 == 0)
	{
		// Convert the two middle numbers to doubles and find their mean
		middle = (static_cast<double>(numbers[(size/2)-1])+static_cast<double>(numbers[(size/2)]))/2;
	}
	// Else the number of ints in the array is odd
	else
	{
		// Find the middle number in the array
		middle = numbers[(size/2)];
	}
	// Return the median
	return middle;
}