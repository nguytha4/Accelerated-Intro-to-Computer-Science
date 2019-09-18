/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/16/2017
** Description: Implementation file for the Rectangle class.
				Has double fields for its length and width.
				Has set methods for both fields and a constructor that uses the set methods.
				Has a method area that returns the area and perimeter which returns the perimeter.
**********************************************************************************************************/

#include <iostream>
#include "Rectangle.hpp"

// Constructor to allow users to set their own Rectangle object parameters when they create one
Rectangle::Rectangle(double widthIn, double lengthIn)
{
	setWidth(widthIn);
	setLength(lengthIn);
}

// Method to set the width of a Rectangle object
void Rectangle::setWidth(double widthIn)
{
	width = widthIn;
}

// Method to set the length of a Rectangle object
void Rectangle::setLength(double lengthIn)
{
	length = lengthIn;
}

// Method that returns the area of a Rectangle object
double Rectangle::area()
{
	return width * length;
}

// Method that returns the perimeter of a Rectangle object
double Rectangle::perimeter()
{
	return (2 * length) + (2 * width);
}