/***********************************************************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/16/2017
** Description: Specification file for the Taxicab class. "Taxicab.cpp"
				It has three variables to track the x-coordinate, y-coordinate, and distance traveled.
				It has a default constructor that defaults all variables to 0 and an initialization Constructor to allow user to enter their own values x/y coordinates.
				It has three get methods to obtain the values of the three variables and two void methods that adjust the x/y coordinates depending on user input.
************************************************************************************************************************************************************************/

#include <iostream>
#include <cmath>			// To use absolute value function
#include "Taxicab.hpp"
using namespace std;

// Default Constructor that sets x/y coordinates and distance traveled to 0
Taxicab::Taxicab()
{
	xCoord = yCoord = distanceTraveled = 0;
}

// Initialization Constructor that takes values for x/y coordinates and defaults distance traveled to 0
Taxicab::Taxicab(int xCoordIn, int yCoordIn)
{
	xCoord = xCoordIn;
	yCoord = yCoordIn;
	distanceTraveled = 0;
}

// Method to return x-coordinate
int Taxicab::getX()
{
	return xCoord;
}

// Method to return y-coordinate
int Taxicab::getY()
{
	return yCoord;
}

// Method to return the distance traveled
int Taxicab::getDistanceTraveled()
{
	return distanceTraveled;
}

// Method to move x-coordinate based on user input and add absolute value to distance traveled
void Taxicab::moveX(int xCoordIn)
{
	xCoord += xCoordIn;
	distanceTraveled += abs(xCoordIn);
}

// Method to move y-coordinate based on user input and add absolute value to distance traveled
void Taxicab::moveY(int yCoordIn)
{
	yCoord += yCoordIn;
	distanceTraveled += abs(yCoordIn);
}