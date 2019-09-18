/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/16/2017
** Description: Implementation file for the MyInteger class.
				Has a field of type pointer-to-integer.
				Has a Constructor that takes an int parameter to dynamically allocate memory for an int.
				Has a Destructor that will deallocate memory when the object is destroyed.
				Has a Copy Constructor that maeks a separate copy of the memory the variable will point to
				and have the pointer point to it.
				Has an overloaded = operator that returns a reference to the object pointed to by the this
				pointer.
				Has set and get methods for the variable.
**********************************************************************************************************/

#include <iostream>
#include "MyInteger.hpp"

// Constructor to allow users to set their own MyInteger object parameter when they create one
MyInteger::MyInteger(int numIn)
{
	pInteger = new int;
	*pInteger = numIn;
}

// Destructor
MyInteger::~MyInteger()
{
	delete pInteger;
}

// Copy Constructor to allow the copying of an object's contents to another
MyInteger::MyInteger(const MyInteger &obj)
{
	pInteger = new int;
	*pInteger = *obj.pInteger;
}

// Overloaded = operator that returns a MyInteger object
MyInteger MyInteger::operator=(const MyInteger &right)
{
	delete pInteger;
	pInteger = new int;
	*pInteger = *right.pInteger;
	return *this;
}

// Set method to set a new int that the pointer points to
void MyInteger::setMyInt(int numIn)
{
	*pInteger = numIn;
}

// Get method to get the int that the pointer points to
int MyInteger::getMyInt()
{
	return *pInteger;
}