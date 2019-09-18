/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/21/2017
** Description: Specification file for the RegularProject class.
**********************************************************************************************************/

#include <iostream>
#include "CustomerProject.hpp"

#ifndef REGULARPROJECT_HPP
#define REGULARPROJECT_HPP

// RegularProject class declaration
class RegularProject : public CustomerProject
{
	public:
		RegularProject(double, double, double);						// Constructor to set initial values for CustomerProject's member variables
		virtual double billAmount();								// Method to sum up the total cost of the RegularProject
};
#endif