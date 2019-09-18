/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/21/2017
** Description: Specification file for the CustomerProject class.
**********************************************************************************************************/

#ifndef CUSTOMERPROJECT_HPP
#define CUSTOMERPROJECT_HPP

// CustomerProject class
class CustomerProject
{
	private:
		double hours;								// Variable to hold the number of hours worked
		double materials;							// Variable to hold the amount spent on materials
		double transportation;						// Variable to hold the amount spent on transportation
	
	public:
		CustomerProject(double, double, double);	// Constructor to set inital values for the member variables
		
		void setHours(double);						// Set method for the hours worked
		void setMaterials(double);					// Set method for the amount spent on materials
		void setTransportation(double);				// Set method for the amount spent on transportation
		
		double getHours();							// Get method for the hours worked
		double getMaterials();						// Get method for the amount spent on materials
		double getTransportation();					// Get method for the amount spent on transportation
		
		virtual double billAmount() = 0;			// Pure virtual method for how much to bill for the project
};

#endif