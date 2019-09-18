/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/16/2017
** Description: Specification file for the MyInteger class.
				Has a field of type pointer-to-integer.
				Has a Constructor that takes an int parameter to dynamically allocate memory for an int.
				Has a Destructor that will deallocate memory when the object is destroyed.
				Has a Copy Constructor that maeks a separate copy of the memory the variable will point to
				and have the pointer point to it.
				Has an overloaded = operator that returns a reference to the object pointed to by the this
				pointer.
				Has set and get methods for the variable.
**********************************************************************************************************/

#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP

// MyInteger class declaration
class MyInteger
{
	private:
		int *pInteger;									// Variable: pointer to an int
		
	public:
		MyInteger(int);									// Constructor
		MyInteger(const MyInteger &);					// Copy Constructor
		~MyInteger();									// Destructor
		
		MyInteger operator=(const MyInteger &right);	// Overloaded = operator
		
		void setMyInt(int);								// Method to set a new int that the pointer points to
		int getMyInt();									// Method to get the value of the int that the pointer points to
};
#endif