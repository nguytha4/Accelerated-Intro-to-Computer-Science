/*******************************************************************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/16/2017
** Description: Implementation file for the Snack class. "Snack.cpp"
				It has three variables: the name of the snack, the price of the snack, and the calories of the snack.
				It has a default Constructor that sets the values to "bottled water", 1.75, and 0, respectively; and an initialization Constructor for user input upon creation.
				It has three get methods to return the values of the three variables.
********************************************************************************************************************************************************************************/

#include <iostream>
#include <string>		// For Snack name variable and method
#include "Snack.hpp"
using namespace std;

// Default Constructor that sets the values to "bottled water", 1.75, and 0, respectively
Snack::Snack()
{
	snackName = "bottled water";
	snackPrice = 1.75;
	snackCalories = 0;
}

// Initialization Constructor that takes user input upon Snack object creation and initializes each variable
Snack::Snack(string snackNameIn, double snackPriceIn, int snackCaloriesIn)
{
	snackName = snackNameIn;
	snackPrice = snackPriceIn;
	snackCalories = snackCaloriesIn;
}

// Method to return the name of the snack
string Snack::getName()
{
	return snackName;
}

// Method to return the price of the snack
double Snack::getPrice()
{
	return snackPrice;
}

// Method to return the calories of the snack
int Snack::getNumCalories()
{
	return snackCalories;
}