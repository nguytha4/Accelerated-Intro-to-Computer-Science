/******************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 6/1/17
** Description: Implementation file for the TicTacToe class.
*******************************************************************************************************************************/

#include <iostream>
#include "TicTacToe.hpp"
#include "Board.hpp"
using namespace std;

// Constructor
TicTacToe::TicTacToe(char playerIn)
{
	playerTurn = playerIn;	// Take the starting player and initialize the playerTurn variable
}

// play method
void TicTacToe::play()
{	
	int row;					// Variable to hold the coordinate of the row of the move
	int col;					// Variable to hold the coordinate of the column of the move
	int stat;					// Variable to hold the enum representing the current status of the game
	bool legitMove = false;		// Variable to check whether a player's move is valid. Initialize to false
	
	cout << endl;
	
	do
	{
		// Prompt for player's move depending on who's turn it is
		if (playerTurn == 'x')
			cout << "Player X: please enter your move." << endl << endl;
		if (playerTurn == 'o')
			cout << "Player O: please enter your move." << endl << endl;
		cin >> row >> col;
		
		// If the move is outside the bounds of the TicTacToe board
		if (row > 2 || col > 2 || row < 0 || col < 0)
		{
			// Display a message to the user and print the board
			cout << endl << "Invalid move. Please enter a valid move." << endl << endl;
			mainBoard.print();
		}
		// Else,
		else
		{
			// Set the legitMove variable to the result of the makeMove method
			legitMove = mainBoard.makeMove(row, col, playerTurn);
			
			// If the move is not valid
			if (!legitMove)
			{
				cout << endl << "That square is already taken." << endl << endl;	// Let the user know the space is already taken
				mainBoard.print();													// Print the board
			}
		}
		
	} while(!legitMove); // Continue to prompt the current player for a move as long as their moves are invalid
	
	// Switch to the other player
	if (playerTurn == 'x')
		playerTurn = 'o';
	else
		playerTurn = 'x';
	
	cout << endl;
	
	// Print the board
	mainBoard.print();
	
	// Check the status of the game
	stat = mainBoard.gameState();
	
	// Switch statement to see if conditions have been met to end the game or if it needs to continue
	switch(stat)
	{
		case xVict:
		{
			cout << "Congratulations Player X! You won the game!" << endl << endl;
			return;
		}
		case oVict:
		{
			cout << "Congratulations Player O! You won the game!" << endl << endl;
			return;
		}
		case draw:
		{
			cout << "The game is a draw!" << endl << endl;
			return;
		}
		case inProg:
		{
			play();		// If the game is considered to still be in progress, recursively call the play method for the next move
		}
	}
}

int main()
{
	char player;	// Variable to hold which player is starting first

	// Prompt the users and ask them which player should start first
	cout << "Which player should go first (x or o): ";
	// Take in user input with which player is starting first
	cin >> player;
	
	// Create a TicTacToe object and initialize it with the starting player
	TicTacToe game(player);
	// Start the game
	game.play();

	// Exit main
	return 0;
}