/**************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/9/2017
** Description: Prompt user to enter amount of integers, examples of integers, and output min./max.
***************************************************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int intAmt;			// Variable to hold the number of ints the user wants to enter
	int currentInt;		// Variable to take in the ints that the user enters
	int min;			// Variable to hold the current min
	int max;			// Variable to hold the current max
	int compareNum		// Variable to hold the integer to compare
	
	// Prompt user to enter an amount of integers
	cout << "How many integers would you like to enter?" << endl;
	// Initialize intAmt to user-entered value
	cin >> intAmt;
	
	// If the number of integers user is entering is one
	if (intAmt == 1)
	{
		// Prompt user to enter one integer
		cout << "Please enter " << intAmt << " integer." << endl;
	}
	// Else the number of integers user is entering is more than 1
	else
	{
		// Prompt user to enter list of integers
		cout << "Please enter " << intAmt << " integers." << endl;	
	}
		
	// Initialize currentInt to first user-input value
	cin >> currentInt;													
	
	// Initialize min and max to the first user-inputted value
	min = max = currentInt;
	
	// Decrement the amount of integers left that the user can enter
	intAmt--;
	
	// While the user still has integers to enter
	while (intAmt != 0)												
	{
		// Take in the next integer to compare
		cin >> compareNum;
		// Decrement the amount of integers left that the user can enter
		intAmt--;													
		// If the current integer is greater than the max
		if (max < compareNum)
			// Set the new max to the current integer
			max = compareNum;
		// If the current integer is less than the min
		if (min > compareNum)
			// Set the new min to the current integer
			min = compareNum;
	}		
	
	// Output the min
	cout << "min: " << min << endl;
	// Output the max
	cout << "max: " << max << endl;
	
	// Exit program
	return 0;
}