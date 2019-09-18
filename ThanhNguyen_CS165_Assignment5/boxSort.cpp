/**************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/30/17
** Description: Function - Sort an array of Box objects from greatest volume to least volume.
				The sorting will be conducted using the bubble sort method.
				This function takes an array of Boxes and the size of the array.
**************************************************************************************************/

#include <iostream>
#include "Box.hpp"
using namespace std;

// Function Prototype
void boxSort(Box[], int);

// boxSort Function
void boxSort(Box boxIn[], int size)
{
	Box temp;		// Variable to hold a Box object for swapping
	bool swap;		// Boolean variable to indicate if two Box objects were swapped
	
	// Start the loop and initialize the swap variable to false
	do
	{	swap = false;
	
		// Foor loop that runs through the entire array except for the last entry because it has nothing to compare to
		for (int count = 0; count < (size - 1); count++)
		{
			// If the current Box object's volume is less than the Box object's volume next to it
			if (boxIn[count].calcVolume() < boxIn[count + 1].calcVolume())
			{
				// Swap the two Box objects
				temp = boxIn[count];
				boxIn[count] = boxIn[count + 1];
				boxIn[count + 1] = temp;
				// Set the swap indicator to true
				swap = true;
			}
		}
	} while (swap);		// Loop while two or more Box objects have been swapped
}