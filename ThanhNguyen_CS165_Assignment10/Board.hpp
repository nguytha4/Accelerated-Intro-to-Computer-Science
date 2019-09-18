/******************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 6/1/17
** Description: Specification file for the Board class.
*******************************************************************************************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP

// Enum representing the current status of the gameBoard
enum Status {xVict, oVict, draw, inProg};

// Board class declaration
class Board
{
	private:
		char gameBoard[3][3];			// 3x3 char array representing TicTacToe board
		
	public:
		Board();						// Default constructor
		
		bool makeMove(int, int, char);	// Method that takes coordinates of move and which player's turn it is
		Status gameState();				// Method to check the game's current status
		void print();					// Method to print the game's current board
};
#endif