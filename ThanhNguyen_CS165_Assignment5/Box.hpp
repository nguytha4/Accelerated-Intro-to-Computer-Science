/********************************************************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/16/2017
** Description: Specification file for the Box class. "Box.hpp"
				It has three variables: height, width, and length. 
				It has a default Constructor that defaults all variables to 1 and an initialization Constructor to allow user to enter their own values.
				It has three set functions for these variables and two get functions to calculate the volume and the surface area.
*********************************************************************************************************************************************************************/

#ifndef BOX_HPP
#define BOX_HPP

// Box class declaration
class Box
{
	private:
		double height;						// Variable to hold height of the box
		double width;						// Variable to hold width of the box
		double length;						// Variable to hold length of the box
		
	public:
		Box();								// Default Constructor for when user does not specify initialization variables for a Box object
		Box(double, double, double);		// Initialization Constructor when user creates Box object and sets variables
		
		void setHeight(double);				// Method to set the height of a Box object
		void setWidth(double);				// Method to set the width of a Box object
		void setLength(double);				// Method to set the length of a Box object
		
		double calcVolume();				// Method to calculate the volume of a Box object
		double calcSurfaceArea(); 			// Method to calculate the surface area of a Box object
};
#endif