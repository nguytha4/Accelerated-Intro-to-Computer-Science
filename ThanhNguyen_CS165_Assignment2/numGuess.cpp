/**************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/11/17
** Description: Prompt user to enter a number to guess, then allows user to guess, stating too
				high or too low. When the number is guessed, output the number of tries.
***************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int toGuessInt;		// Variable to hold the number the guess will try to guess
	int intGuess;		// Variable to hold the number of the current guess
	int numTries = 0;	// Variable to hold the number of tries the user has made, initializing at 0
	
	// Prompt user to enter number to guess
	cout << "Enter the number for the player to guess." << endl;
	// Initialize toGuessInt to user input
	cin >> toGuessInt;
	
	// Prompt user to enter their first guess
	cout << "Enter your guess." << endl;
	// Set intGuess to user's current guess
	cin >> intGuess;
	// Increment the number of tries by one
	numTries += 1;
	
	// While the number to guess is not equal to the user's current guess
	while (toGuessInt != intGuess)
	{
		// If the number to gress is greater than the user's current guess
		if (toGuessInt > intGuess)
		{
			// Let the user know that their number is too low
			cout << "Too low - try again." << endl;
		}
		// Else the number to guess has to be less than the user's current guess
		else
		{
			// Let the user know that their number is too high
			cout << "Too high - try again." << endl;
		}
		// Take in more guesses from the user
		cin >> intGuess;
		// Increment the number of tries by one
		numTries += 1;
	}
	
	// If the user guessed it in one try
	if (numTries == 1)
	{
		// Let the user know they guessed the number and in one try (singular)
		cout << "You guessed it in " << numTries << " try." << endl; 
	}
	// Else the user took more than one guess
	else
	{
	// Let the user know they guessed the number and the number of tries
	cout << "You guessed it in " << numTries << " tries." << endl;
	}
	
	// Exit program
	return 0;
}