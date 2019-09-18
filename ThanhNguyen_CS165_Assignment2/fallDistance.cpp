/********************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/11/17
** Description: Function - Take time as a parameter to determine distance an object falls due to gravity.
*********************************************************************************************************/

// Function Prototype for fallDistance
double fallDistance(double time);

// This function takes in a time parameter and returns the distance an object has fallen due to gravity.
double fallDistance(double time)
{
	double distance;				// Variable to hold the distance the object travels
	const double gravity = 9.8;		// Constant variable to represent gravity
	
	// Formula to determine distance an object travelled based on the time it has traveled
	distance = 0.5 * gravity * time * time;
	// Return the distance calculated
	return distance;
}