/***********************************************************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/16/2017
** Description: Implementation file for the VendSlot class. "VendSlot.cpp"
				It has two variables: a Snack object and the amount of that snack currently in the slot.
				It has a default Constructor that creates a default snack object and defaults the amount to 5 and an initialization Constructor for user input.
				It has two get methods to return the Snack object and its amount, and a method to decrease the snack amount by 1.
************************************************************************************************************************************************************************/

#include <iostream>
#include "Snack.hpp"
#include "VendSlot.hpp"
using namespace std;

// Default Constructor which creates the default Snack object and defaults the snack amount to 5
VendSlot::VendSlot()
{
	snackObject = Snack();
	snackAmount = 5;
}

// Initialization Constructor which allows user input to initialize the Snack object and amount of it
VendSlot::VendSlot(Snack snackObjectIn, int snackAmountIn)
{
	snackObject = snackObjectIn;
	snackAmount = snackAmountIn;
}

// Method to return the Snack object
Snack VendSlot::getSnack()
{
	return snackObject;
}

// Method to return the amount of the snack in the slot
int VendSlot::getAmount()
{
	return snackAmount;
}

// Method ot decrement the amount of the snack in the slot
void VendSlot::decrementAmount()
{
	snackAmount -= 1;
}