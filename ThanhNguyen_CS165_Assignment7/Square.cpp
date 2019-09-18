/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/16/2017
** Description: Implementation file for the Square class.
				Has a Constructor that takes one double parameter which passes it to the base class
				Constructor for both parameters.
				It overrides the setLength() and setWidth methods of the base class so that if either
				field is set, the other is set to the same value.
**********************************************************************************************************/

#include <iostream>
#include "Rectangle.hpp"
#include "Square.hpp"

// Square class declaration
Square::Square(double sideIn) : Rectangle(sideIn, sideIn)
{
}

// Method to set the width of a Square object. Sets both the length and the width. Override from base class.
void Square::setWidth(double widthIn)
{
	Rectangle::setWidth(widthIn);
	Rectangle::setLength(widthIn);
}

// Method to set the length of a Square object. Sets both the length and the width. Override from base class.
void Square::setLength(double lengthIn)
{
	Rectangle::setWidth(lengthIn);
	Rectangle::setLength(lengthIn);
}