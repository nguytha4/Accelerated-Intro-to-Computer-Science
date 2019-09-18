/******************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/23/2017
** Description: Standard deviation function. This function takes two parameters: an array of Persons and the size of the array.
				Returns the standard deviation of the ages of all of the people.
******************************************************************************************************************************/

#include <iostream>
#include <cmath>			// For working with roots
#include "Person.hpp"
using namespace std;

// Function Prototype
double stdDev (Person[], int);

/*
int main()
{
	const int ARRAY_SIZE = 5;
	Person people[ARRAY_SIZE] = { Person("Thomas", 600),
								  Person("Harry", 470),
								  Person("Ana", 170),
								  Person("Nancy", 430),
								  Person("Henry", 300) };
	
	double standDevia = 0;
	
	standDevia = stdDev(people, ARRAY_SIZE);
	
	cout << "The standard deviation is: " << standDevia << endl;
	
	return 0;
}
*/

// Stadard Deviation Function
double stdDev (Person personIn[], int sizeIn)
{
	double mean = 0;		// Accumulator variable to hold the mean
	double variance = 0;	// Accumulator variable to hold the variance
	double deviation = 0;	// Variable to hold the standard deviation
	
	// Find the mean by adding up the ages of every person in the array
	for (int i = 0; i < sizeIn; i++)
	{
		mean += personIn[i].getAge();
	}
	
	// Divide the total by the size of the array to get the mean
	mean /= sizeIn;
	
	// Find the variance by subtract the mean from each person's age and squaring it
	for (int j = 0; j < sizeIn; j++)
	{
		variance += (personIn[j].getAge() - mean) * (personIn[j].getAge() - mean);
	}
	
	// Divide the total by the size of the array to get the variance
	variance /= sizeIn;

	// Take the square root of the variance to get the standard deviation
	deviation = sqrt(variance);
	
	// Return the standard deviation
	return deviation;
}