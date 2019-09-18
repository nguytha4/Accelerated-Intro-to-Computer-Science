/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/16/2017
** Description: Specification file for the Square class. It is derived from the Rectangle class.
				Has a Constructor that takes one double parameter which passes it to the base class
				Constructor for both parameters.
				It overrides the setLength() and setWidth methods of the base class so that if either
				field is set, the other is set to the same value.
**********************************************************************************************************/

#include <iostream>
#include "Rectangle.hpp"

#ifndef SQUARE_HPP
#define SQUARE_HPP

// Square class declaration
class Square : public Rectangle
{
	public:
		Square(double);						// Constructor when user creates Square object and sets variables
		void setWidth(double);				// Method to set the width of a Square object
		void setLength(double);				// Method to set the length of a Square object
};
#endif