/************************************************************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/16/2017
** Description: Specification file for the Taxicab class. "Taxicab.hpp"
				It has three variables to track the x-coordinate, y-coordinate, and distance traveled.
				It has a default constructor that defaults all variables to 0 and an initialization Constructor to allow user to enter their own values x/y coordinates.
				It has three get methods to obtain the values of the three variables and two void methods that adjust the x/y coordinates depending on user input.
************************************************************************************************************************************************************************/

#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab
{
	private:
		int xCoord;					// Variable to hold the Taxicab object's current x-coordinate
		int yCoord;					// Variable to hold the Taxicab object's current y-coordinate
		int distanceTraveled;		// Variable to hold the Taxicab object's distance traveled
		
	public:
		Taxicab();					// Default Constructor
		Taxicab(int, int);			// Initialization Constructor that takes values for the x/y coordinates
		
		int getX();					// Method to return the x-coordinate
		int getY();					// Method to return the y-coordinate
		int getDistanceTraveled();	// Method to return the distance traveled
		
		void moveX(int);			// Method to adjust x-coordinate based on user input
		void moveY(int);			// Method to adjust y-coordinate based on user input
};

#endif