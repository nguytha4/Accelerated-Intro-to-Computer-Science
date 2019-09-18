/*********************************************************************
** Author: Thanh Nguyen
** Date: 4/5/17
** Description: Input Celcius, convert to Fahrenheit, output Fahrenheit.
**********************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	double celcius;		// Variable to store Celcius value
	double fahrenheit;	// Variable to store Fahrenheit value
	
	// Prompt user to enter a Celcius value
	cout << "Please enter a Celcius temperature." << endl;
	
	// Take in Celcius value from user
	cin >> celcius;
	
	// Calculate Fahrenheit value from Celcius using formula
	fahrenheit = ((9 * celcius) / 5) + 32;
	
	// Output message to user and the Fahrenheit value
	cout << "The equivalent Fahrenheit temperature is:" << endl << fahrenheit << endl;
	
	// Exit program
	return 0;
}