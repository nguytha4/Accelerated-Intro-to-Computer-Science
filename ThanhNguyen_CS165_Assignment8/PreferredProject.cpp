/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/21/2017
** Description: Implementation file for the PreferredProject class.
**********************************************************************************************************/

#include <iostream>
#include "CustomerProject.hpp"
#include "PreferredProject.hpp"

// PreferredProject Constructor which passes variables to set the CustomerProject member variables
PreferredProject::PreferredProject(double hoursIn, double materialsIn, double transportationIn) : CustomerProject(hoursIn, materialsIn, transportationIn)
{
}

// Method to sum up the total cost of the RegularProject
double PreferredProject::billAmount()
{	
	// If the amount of hours worked is more than 100
	if (CustomerProject::getHours() > 100)
		// Return: Materials * .85 + Transportation * .90 + 100 hours max * $80 (hours over 100 are considered free)
		return (CustomerProject::getMaterials() * .85) + (CustomerProject::getTransportation() * .90) + (100 * 80);
	// Else,
	else
		// Return: Materials * .85 + Transportation * .90 + number of hours worked * $80
		return (CustomerProject::getMaterials() * .85) + (CustomerProject::getTransportation() * .90) + (CustomerProject::getHours() * 80);
}