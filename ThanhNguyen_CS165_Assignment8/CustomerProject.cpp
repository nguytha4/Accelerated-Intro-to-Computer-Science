/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/21/2017
** Description: Implementation file for the CustomerProject class.
**********************************************************************************************************/

#include <iostream>
#include "CustomerProject.hpp"

// Constructor that uses set methods to initialize member variables
CustomerProject::CustomerProject(double hoursIn, double materialsIn, double transportationIn)
{
	setHours(hoursIn);
	setMaterials(materialsIn);
	setTransportation(transportationIn);
}

// Set method for the number of hours worked
void CustomerProject::setHours(double hoursIn)
{
	hours = hoursIn;
}

// Set method for the amount spent on materials
void CustomerProject::setMaterials(double materialsIn)
{
	materials = materialsIn;
}

// Set method for the amount spent on transportation
void CustomerProject::setTransportation(double transportationIn)
{
	transportation = transportationIn;
}

// Get method for the number of hours worked
double CustomerProject::getHours()
{
	return hours;
}

// Get method for the amount spent on materials
double CustomerProject::getMaterials()
{
	return materials;
}

// Get method for the amount spent on transportation
double CustomerProject::getTransportation()
{
	return transportation;
}