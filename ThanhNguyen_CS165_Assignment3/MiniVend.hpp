/***********************************************************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/16/2017
** Description: Specification file for the MiniVend class. "MiniVend.hpp"
				It has five variables: four VendSlot objects that hold Snacks and the amount of money in the machine.
				It has a Default Constructor and an initialization Constructor for user input.
				It has a method to get the amount of money in the vending machine.
				It has three methods: return the number of slots that have no Snacks left, total value of snacks in the machine, and a purchasing action.
************************************************************************************************************************************************************************/

#ifndef MINIVEND_HPP
#define MINIVEND_HPP

#include "VendSlot.hpp"
using namespace std;

class MiniVend
{
	private:
		VendSlot vendslotFirst;										// Variable representing the first slot of the vending machine
		VendSlot vendslotSecond;									// Variable representing the second slot of the vending machine
		VendSlot vendslotThird;										// Variable representing the third slot of the vending machine
		VendSlot vendslotFourth;									// Variable representing the fourth slot of the vending machine
		double moneyAmount;											// Variable representing the amount of money in the vending machine
		
	public:
		MiniVend();													// Default Constructor
		MiniVend(VendSlot, VendSlot, VendSlot, VendSlot, double);	// Initialization Constructor
		
		double getMoney();											// Method that returns the amount of machine in the vending machine
		
		int numEmptySlots();										// Method that returns the number of slots that have no Snacks left
		double valueOfSnacks();										// Method that returns the total value of Snacks in the machine
		void buySnack(int);											// Method that takes the number of a slot and represents a user purchasing a Snack
};

#endif