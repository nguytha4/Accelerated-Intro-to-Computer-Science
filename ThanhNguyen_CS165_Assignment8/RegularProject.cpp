/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/21/2017
** Description: Implementation file for the RegularProject class.
**********************************************************************************************************/

#include <iostream>
#include "CustomerProject.hpp"
#include "RegularProject.hpp"

// RegularProject Constructor which passes variables to set the CustomerProject member variables
RegularProject::RegularProject(double hoursIn, double materialsIn, double transportationIn) : CustomerProject(hoursIn, materialsIn, transportationIn)
{
}

// Method to sum up the total cost of the RegularProject; Materials + Transportation + Number of hours worked * $80
double RegularProject::billAmount()
{
	return CustomerProject::getMaterials() + CustomerProject::getTransportation() + (CustomerProject::getHours() * 80);
}