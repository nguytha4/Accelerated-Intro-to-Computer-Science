/******************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 6/1/17
** Description: Implementation file for the Board class.
*******************************************************************************************************************************/

#include <iostream>
#include "Board.hpp"
using namespace std;

// Default Constructor. Initialize array with '.' to represent it starting empty
Board::Board()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			gameBoard[i][j] = '.';
		}
	}
}

// makeMove method
bool Board::makeMove(int xIn, int yIn, char playIn)
{
	if (gameBoard[xIn][yIn] == '.')		// If the coordinates chosen are empty
	{
		gameBoard[xIn][yIn] = playIn;	// Change the square to the player making the move
		return true;					// Return true
	}
	else								// Else
	{
		return false;					// Return false
	}
}

// gameState method
Status Board::gameState()
{
	int xs = 0;		// Variable to hold number of x's on the board
	int os = 0;		// Variable to hold number of o's on the board
	int dots = 0;	// Variable to hold number of empty spaces on the board
	
	// Loop through rows and columns of array using set of for loops
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (gameBoard[i][j] == 'x')		// If the square has an x, increment the x counter
				xs++;
			if (gameBoard[i][j] == 'o')		// If the square has an o, increment the o counter
				os++;
			if (gameBoard[i][j] == '.')		// If the square is empty, increment the empty space counter
				dots++;
		}
	}
	
	// If the board has at least three x's, there is a possibly that the player has won. If so, return the xVict enum.
	if (xs >= 3)
	{
		// Check if player won via rows
		if (gameBoard[0][0] == 'x' && gameBoard[0][1] == 'x' && gameBoard[0][2] == 'x')
			return xVict;
		if (gameBoard[1][0] == 'x' && gameBoard[1][1] == 'x' && gameBoard[1][2] == 'x')
			return xVict;
		if (gameBoard[2][0] == 'x' && gameBoard[2][1] == 'x' && gameBoard[2][2] == 'x')
			return xVict;
		
		// Check if player won via columns
		if (gameBoard[0][0] == 'x' && gameBoard[1][0] == 'x' && gameBoard[2][0] == 'x')
			return xVict;
		if (gameBoard[0][1] == 'x' && gameBoard[1][1] == 'x' && gameBoard[2][1] == 'x')
			return xVict;
		if (gameBoard[0][2] == 'x' && gameBoard[1][2] == 'x' && gameBoard[2][2] == 'x')
			return xVict;
		
		// Check if player won via diagonals
		if (gameBoard[0][0] == 'x' && gameBoard[1][1] == 'x' && gameBoard[2][2] == 'x')
			return xVict;
		if (gameBoard[0][2] == 'x' && gameBoard[1][1] == 'x' && gameBoard[2][0] == 'x')
			return xVict;
	}
	
	// If the board has at least three o's, there is a possibly that the player has won. If so, return the oVict enum.
	if (os >= 3)
	{
		// Check if player won via rows
		if (gameBoard[0][0] == 'o' && gameBoard[0][1] == 'o' && gameBoard[0][2] == 'o')
			return oVict;
		if (gameBoard[1][0] == 'o' && gameBoard[1][1] == 'o' && gameBoard[1][2] == 'o')
			return oVict;
		if (gameBoard[2][0] == 'o' && gameBoard[2][1] == 'o' && gameBoard[2][2] == 'o')
			return oVict;
		
		// Check if player won via columns
		if (gameBoard[0][0] == 'o' && gameBoard[1][0] == 'o' && gameBoard[2][0] == 'o')
			return oVict;
		if (gameBoard[0][1] == 'o' && gameBoard[1][1] == 'o' && gameBoard[2][1] == 'o')
			return oVict;
		if (gameBoard[0][2] == 'o' && gameBoard[1][2] == 'o' && gameBoard[2][2] == 'o')
			return oVict;
		
		// Check if player won via diagonals
		if (gameBoard[0][0] == 'o' && gameBoard[1][1] == 'o' && gameBoard[2][2] == 'o')
			return oVict;
		if (gameBoard[0][2] == 'o' && gameBoard[1][1] == 'o' && gameBoard[2][0] == 'o')
			return oVict;
	}
	// If the board still has empty spaces, return the inProg enum
	if (dots != 0)
		return inProg;
	// Else, the game is a draw. Return the draw enum
	else
		return draw;
}

// print method
void Board::print()
{
	// Create the first row indicating the column numbers of the board
	cout << " ";
	for (int h = 0; h < 3; h++)
		cout << " " << h;
	cout << endl << endl;
	
	// Create the rest of the board, indicating row numbers and the state of the board itself
	for (int i = 0; i < 3; i++)
	{
		cout << i;
		for (int j = 0; j < 3; j++)
		{
			cout << " " << gameBoard[i][j];
		}
		cout << endl << endl;
	}
}