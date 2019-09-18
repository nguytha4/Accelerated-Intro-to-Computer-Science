/*********************************************************************
** Author: Thanh Nguyen
** Date: 4/5/17
** Description: Input five numbers and output the average.
**********************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	double number; // Variable to take in user input
	double total;  // Variable to keep running sum total of user's numbers
	
	// Prompt user to enter five numbers
	cout << "Please enter five numbers." << endl;
	
	cin >> number;	 // Take first input from user
	total = number;	 // Set running total to first input from user
	
	cin >> number;	 // Take second input from user
	total += number; // Add second input to running total
	
	cin >> number;	 // Take third input from user
	total += number; // Add third input to running total
	
	cin >> number;	 // Take fourth input from user
	total += number; // Add fourth input to running total
	
	cin >> number;   // Take fifth input from user
	total += number; // Add fourth input to running total
	
	total = total/5; // Divide running total by 5 to get the average
	
	// Output a newline and average to user
	cout << "The average of those numbers is:" << endl << total << endl;
	
	// Exit program
	return 0;
}