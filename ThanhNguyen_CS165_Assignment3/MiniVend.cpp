/***********************************************************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/16/2017
** Description: Implementation file for the MiniVend class. "MiniVend.cpp"
				It has five variables: four VendSlot objects that hold Snacks and the amount of money in the machine.
				It has a Default Constructor and an initialization Constructor for user input.
				It has a method to get the amount of money in the vending machine.
				It has three methods: return the number of slots that have no Snacks left, total value of snacks in the machine, and a purchasing action.
************************************************************************************************************************************************************************/

#include <iostream>
#include "VendSlot.hpp"
#include "MiniVend.hpp"
using namespace std;

// Default Constructor
MiniVend::MiniVend()
{
	vendslotFirst = vendslotSecond = vendslotThird = vendslotFourth = VendSlot();
	moneyAmount = 0;
}

// Initialization Constructor
MiniVend::MiniVend(VendSlot vendslotFirstIn, VendSlot vendslotSecondIn, VendSlot vendslotThirdIn, VendSlot vendslotFourthIn, double moneyAmountIn)
{
	vendslotFirst = vendslotFirstIn;
	vendslotSecond = vendslotSecondIn;
	vendslotThird = vendslotThirdIn;
	vendslotFourth = vendslotFourthIn;
	moneyAmount = moneyAmountIn;
}

// Method to return amount of money in the vending machine
double MiniVend::getMoney()
{
	return moneyAmount;
}

// Method that checks each slot that has no snacks and reports back with the number of empty slots
int MiniVend::numEmptySlots()
{
	// Initialize variable to hold the total number of empty slots to zero
	int emptySlots = 0;
	
	// If the amount of Snacks in any slot is zero, increment the number of empty slots by 1
	if (vendslotFirst.getAmount() == 0)
		{ emptySlots += 1; }
	
	if (vendslotSecond.getAmount() == 0)
		{ emptySlots += 1; }
	
	if (vendslotThird.getAmount() == 0)
		{ emptySlots += 1; }
	
	if (vendslotFourth.getAmount() == 0)
		{ emptySlots += 1; }
	
	// Return the number of empty slots
	return emptySlots;
}

// Method that returns the total value of all of the Snacks in the vending machine
double MiniVend::valueOfSnacks()
{
	// Initialize variable to hold the current total value of Snacks in the vending machine to zero
	double snackValue = 0;
	
	// Multiple the amount of Snacks in each slot by the Snack value and add their totals to snackValue
	snackValue += vendslotFirst.getAmount() * ((vendslotFirst.getSnack()).getPrice());
	snackValue += vendslotSecond.getAmount() * ((vendslotSecond.getSnack()).getPrice());
	snackValue += vendslotThird.getAmount() * ((vendslotThird.getSnack()).getPrice());
	snackValue += vendslotFourth.getAmount() * ((vendslotFourth.getSnack()).getPrice());
	
	// Return the value of all Snacks currently in the vending machine
	return snackValue;
}

// Method that takes a slot number, and represents the purchasing of a Snack from the slot. The amount of Snacks is decremented and
// money in the vending machine is increased by the Snack value
void MiniVend::buySnack(int vendslotNum)
{
	
	// Switch that expects ints 0-3 to represent the 4 vending machine slots
	switch (vendslotNum)
	{
		// First slot
		case 0: 
		{
			// If the number of snacks in a slot is greater than 1
			if (vendslotFirst.getAmount() > 0)
			{
				vendslotFirst.decrementAmount();							// Decrease the amount of snacks in the slot by 1
				moneyAmount += ((vendslotFirst.getSnack()).getPrice());		// Increase the amount of money in the vending machine by the snack value
				break;														// Break out of the switch
			}
			// Else, the slot has no more snacks so do nothing
			else
			{
				break;
			}
		}
		// Second slot
		case 1: 
		{
			// If the number of snacks in a slot is greater than 1
			if (vendslotSecond.getAmount() > 0)
			{
				vendslotSecond.decrementAmount();							// Decrease the amount of snacks in the slot by 1
				moneyAmount += ((vendslotSecond.getSnack()).getPrice());    // Increase the amount of money in the vending machine by the snack value
				break;                                                      // Break out of the switch
			}
			// Else, the slot has no more snacks so do nothing
			else
			{
				break;
			}
		}
		// Third slot
		case 2: 
		{
			// If the number of snacks in a slot is greater than 1
			if (vendslotThird.getAmount() > 0)
			{
				vendslotThird.decrementAmount();							// Decrease the amount of snacks in the slot by 1
				moneyAmount += ((vendslotThird.getSnack()).getPrice());     // Increase the amount of money in the vending machine by the snack value
				break;                                                      // Break out of the switch
			}
			// Else, the slot has no more snacks so do nothing
			else
			{
				break;
			}
		}
		// Fourth slot
		case 3: 
		{
			// If the number of snacks in a slot is greater than 1
			if (vendslotFourth.getAmount() > 0)
			{
				vendslotFourth.decrementAmount();							// Decrease the amount of snacks in the slot by 1
				moneyAmount += ((vendslotFourth.getSnack()).getPrice());    // Increase the amount of money in the vending machine by the snack value
				break;                                                      // Break out of the switch
			}
			// Else, the slot has no more snacks so do nothing
			else
			{
				break;
			}
		}
	}
}