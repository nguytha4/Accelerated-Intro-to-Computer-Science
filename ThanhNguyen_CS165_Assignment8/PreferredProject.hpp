/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/21/2017
** Description: Specification file for the PreferredProject class.
**********************************************************************************************************/

#include <iostream>
#include "CustomerProject.hpp"

#ifndef PREFERREDPROJECT_HPP
#define PREFERREDPROJECT_HPP

// PreferredProject class declaration
class PreferredProject : public CustomerProject
{
	public:
		PreferredProject(double, double, double);						// Constructor to set initial values for PreferredProject's member variables
		virtual double billAmount();									// Method to sum up the total cost of the PreferredProject
};
#endif