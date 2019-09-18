/********************************************************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/16/2017
** Description: Implementation file for the Box class. "Box.cpp"
				It has three variables: height, width, and length. 
				It has a default Constructor that defaults all variables to 1 and an initialization Constructor to allow user to enter their own values.
				It has three set functions for these variables and two get functions to calculate the volume and the surface area.
*********************************************************************************************************************************************************************/

#include <iostream>
#include "Box.hpp"

// Default Constructor for when users do not define parameters for their newly created Box object. Default all values to 1
Box::Box()
{
	setHeight(1);
	setWidth(1);
	setLength(1);
}

// Initialization Constructor to allow users to set their own Box object parameters when they create one
Box::Box(double heightIn, double widthIn, double lengthIn)
{
	setHeight(heightIn);
	setWidth(widthIn);
	setLength(lengthIn);
}

// Method to set the height of a Box object
void Box::setHeight(double heightIn)
{
	height = heightIn;
}

// Method to set the width of a Box object
void Box::setWidth(double widthIn)
{
	width = widthIn;
}

// Method to set the length of a Box object
void Box::setLength(double lengthIn)
{
	length = lengthIn;
}

// Method that returns the volume of a Box object
double Box::calcVolume()
{
	return width * length * height;
}

// Method that returns the surface area of a Box object
double Box::calcSurfaceArea()
{
	return (2 * width * length) + (2 * width * height) + (2 * length * height);
}