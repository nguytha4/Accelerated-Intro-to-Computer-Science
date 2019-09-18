/***************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/23/2017
** Description: Specification file for the Person class. "Person.hpp"
				This class has two variables: A string to hold the name and a double to hold the age.
				It has a default Contructor and an initialization Constructor that takes two fields.
				It has get methods for both variables but no set methods.
****************************************************************************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>		// For Person name
using namespace std;

// Person class
class Person
{
	private:
		string name;				// Private string variable to hold the name
		double age;					// Private age variable to hold the age
	
	public:
		Person();					// Default Constructor
		Person(string, double);		// Initialization Constructor that takes two variables
	
		string getName ();			// Method to return the name of the Person object
		double getAge ();			// Method to return the age of the Person object
};

#endif