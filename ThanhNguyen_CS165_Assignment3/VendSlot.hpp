/***********************************************************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/16/2017
** Description: Specification file for the VendSlot class. "VendSlot.hpp"
				It has two variables: a Snack object and the amount of that snack currently in the slot.
				It has a default Constructor that creates a default snack object and defaults the amount to 5 and an initialization Constructor for user input.
				It has two get methods to return the Snack object and its amount, and a method to decrease the snack amount by 1.
************************************************************************************************************************************************************************/

#ifndef VENDSLOT_HPP
#define VENDSLOT_HPP

#include "Snack.hpp"
using namespace std;

class VendSlot
{
	private:
		Snack snackObject;			// Variable representing the Snack in the vending slot
		int snackAmount;			// Variable representing the amount of that Snack in the vending slot
		
	public:
		VendSlot();					// Default Constructor
		VendSlot(Snack, int);		// Initialization Constructor
		
		Snack getSnack();			// Method to return the Snack object
		int getAmount();			// Method to return the Snack amount
		
		void decrementAmount();		// Method to decreate the Snack amount by 1
};

#endif