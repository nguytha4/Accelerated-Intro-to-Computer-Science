/*****************************************************************************
** Author: Thanh Nguyen
** Date: 4/5/17
** Description: Input change amount and output fewest total number of coins.
*****************************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int cents;		// Variable to store cents amount
	int quarters;	// Variable to store quarters amount
	int dimes;		// Variable to store dimes amount
	int nickels;	// Variable to store nickels amount
	int pennies;	// Variable to store pennies amount
	
	// Prompt user to enter cents amount less than a dollar
	cout << "Please enter an amount in cents less than a dollar." << endl;
	
	cin >> cents; 			// Take in cents amounts and store in variable

	quarters = cents / 25; 	// Quarters value is cents (integer) divided by 25
	cents = cents % 25;	    // Set cents to remainder after quarters are divided out

	dimes = cents / 10; 	// Dimes value is cents (integer) divided by 10
	cents = cents % 10; 	// Set cents to remainder after dimes are divided out

	nickels = cents / 5; 	// Nickels value is cents (integer) divided by 5
	cents = cents % 5; 		// Set cents to remainder after nickels are divided out

	pennies = cents; 	    // Set pennies to cents amount

	// Output coin breakdown to user
	cout << "Your change will be:" << endl;
	cout << "Q: " << quarters << endl;
	cout << "D: " << dimes << endl;
	cout << "N: " << nickels << endl;
	cout << "P: " << pennies << endl;
	
	// Exit program
	return 0;
}