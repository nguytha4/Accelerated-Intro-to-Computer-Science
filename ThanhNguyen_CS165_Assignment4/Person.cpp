/***************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/23/2017
** Description: Implementation file for the Person class. "Person.cpp"
				This class has two variables: A string to hold the name and a double to hold the age.
				It has a default Contructor and an initialization Constructor that takes two fields.
				It has get methods for both variables but no set methods.
****************************************************************************************************************************/

#include <iostream>
#include <string>		// For Person name
#include "Person.hpp"
using namespace std;

// Default Constructor. Set name to blank and age to 0
Person::Person()
{
	name = "";
	age = 0;
}

// Initialization Constructor. Set name and age when user creates Person object
Person::Person(string nameIn, double ageIn)
{
	name = nameIn;
	age = ageIn;
}

// Method to get Person object's name
string Person::getName()
{
	return name;
}

// Method to get Person object's age
double Person::getAge()
{
	return age;
}