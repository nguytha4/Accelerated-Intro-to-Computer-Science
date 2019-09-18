/******************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 6/1/17
** Description: Specification file for the TicTacToe class.
*******************************************************************************************************************************/

#include "Board.hpp"

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

// TicTacToe class declaration
class TicTacToe
{
	private:
		Board mainBoard;	// Variable to hold Board object
		char playerTurn;	// Variable to keep track of which player's turn it is
		
	public:
		TicTacToe(char);	// Constructor that takes the starting player's turn
		
		void play();		// Method to start the game
};
#endif