/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/6/2017
** Description: Recursive functions
				binToDec - Take a C++ string of binary and convert it to its positive integer equivalent.
				decToBin - Take a positive integer and convert it to a C++ string of binary.
**********************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

// Function Prototypes
int binToDec(string);
int binToDec(string, int, int);
string decToBin(int);

// binToDec Function
int binToDec(string binary)
{
	int total = 0;		// Variable to hold initial decimal value that will accumulate and build the final decimal value
	int counter = 0;	// Variable to keep track of the index of the string as each value is evaluated until the end of the string
	
	// If the current digit of the binary value is equal to 0
	if (binary[counter] == '0')
	{
		counter++;	// Increment the counter
		total = 0;	// Set the total equal to 0
		return binToDec(binary, total, counter);	// Pass the string, initial decimal value, and index of the string
	}
	
	// If the current digit of the binary value is equal to 1
	if (binary[counter] == '1')
	{
		counter++;	// Increment the counter
		total = 1;	// Set the total equal to 1
		return binToDec(binary, total, counter);	// Pass the string, initial decimal value, and index of the string
	}
}

// binToDec Helper Function
int binToDec(string binary, int sum, int pos)
{	
	// Base case. If the end of the string is reached
	if (pos == binary.length())
	{
		return sum;	// Return the decimal value that has accumulated values through recursion
	}
	
	// If the current digit of the binary value is 0
	if (binary[pos] == '0')
	{
		pos++;		// Increment the counter
		sum *= 2;	// Multiply the current decimal value by 2
		sum += 0;	// Add 0 to the decimal value
		return binToDec(binary, sum, pos);	// Recursive case. Pass the string, decimal value, and position of the string back into the helper function
	}
	
	// If the current digit of the biinary value is 1
	if (binary[pos] == '1')
	{
		pos++;		// Increment the counter
		sum *= 2;	// Multiply the current decimal value by 2
		sum += 1;	// Add 1 to the decimal value
		return binToDec(binary, sum, pos);	// Recursive case. Pass the string, decimal value, and position of the string back into the helper function
	}
}

// decToBin Function
string decToBin(int decimal)
{
	// Create a string variable to hold the final binary result to pass back
	string binaryString;
	
	// Zero case. If user enters 0 as the decimal, return 0 as the binary result
	if (decimal == 0)
	{
		binaryString = "0";		// Set the binaryString to 0
		return binaryString;	// Return binaryString
	}
	
	// Base case. If the quotient integer-divided by two will equal 0
	if (decimal/2 == 0)
	{
		// If dividing by 2 yields no remainder
		if (decimal % 2 == 0)
		{
			binaryString = "0";		// Set binaryString to 0
			return binaryString;	// Return binaryString
		}
		// If dividing by 2 yields a remainder
		if (decimal % 2 == 1)
		{
			binaryString = "1";		// Set binaryString to 1
			return binaryString;	// Return binaryString
		}
	}
	// Else, prepare to convert the decimal to binary.
	else
	{
		// If there is no remainder when dividing by 2
		if (decimal % 2 == 0)
			binaryString = decToBin(decimal/2) + "0";	// Recursive case. Pass in the new decimal value integer-divided by 2 and add a 0 to demonstrate no remainder.
	
		// If there is a remainder when dividing by 2
		if (decimal % 2 == 1)
			binaryString = decToBin(decimal/2) + "1";	// Recursive case. Pass in the new deciml value integer-divided by 2 and add a 1 to demonstrate a remainder.
	}
	
	// Return the final string
	return binaryString;
}