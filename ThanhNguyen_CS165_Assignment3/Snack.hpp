/*******************************************************************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/16/2017
** Description: Specification file for the Snack class. "Snack.hpp"
				It has three variables: the name of the snack, the price of the snack, and the calories of the snack.
				It has a default Constructor that sets the values to "bottled water", 1.75, and 0, respectively; and an initialization Constructor for user input upon creation.
				It has three get methods to return the values of the three variables.
********************************************************************************************************************************************************************************/

#ifndef SNACK_HPP
#define SNACK_HPP

#include <string>						// For Snack name variable and method
using namespace std;

class Snack
{
	private:
		string snackName;				// Variable to hold the name of the snack
		double snackPrice;				// Variable to hold the price of the snack
		int snackCalories;				// Variable to hold the calories of the snack
		
	public:
		Snack();						// Default Constructor
		Snack(string, double, int);		// Initialization Constructor
		
		string getName();				// Method to return the name of the snack
		double getPrice();				// Method to return the price of the snack
		int getNumCalories();			// Method to return the calories of the snack
};

#endif