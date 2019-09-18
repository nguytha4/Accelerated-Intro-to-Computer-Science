/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/16/2017
** Description: Specification file for the Rectangle class.
				Has double fields for its length and width.
				Has set methods for both fields and a constructor that uses the set methods.
				Has a method area that returns the area and perimeter which returns the perimeter.
**********************************************************************************************************/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

// Rectangle class declaration
class Rectangle
{
	private:
		double width;						// Variable to hold width of the Rectangle
		double length;						// Variable to hold length of the Rectangle
		
	public:
		Rectangle(double, double);			// Constructor when user creates Rectangle object and sets variables
		
		void setWidth(double);				// Method to set the width of a Rectangle object
		void setLength(double);				// Method to set the length of a Rectangle object
		
		double area();						// Method to calculate the area of a Rectangle object
		double perimeter(); 				// Method to calculate the perimeter area of a Rectangle object
};
#endif