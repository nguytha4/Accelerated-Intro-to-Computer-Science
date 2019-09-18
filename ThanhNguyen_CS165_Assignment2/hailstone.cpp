/********************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/11/17
** Description: Function - Take a positive integer, apply hailstone sequence, run until 1 is reached, and return number of steps.
*********************************************************************************************************************************/

// Function Prototype for hailstone
int hailstone (int startInt);

// Take in int parameter and return how many steps it took for number to be reduced to 1 based on hailstone sequence
int hailstone (int startInt)
{
	int numSteps = 0; 			// Variable to hold the number of steps it took to reduce starting int to 1
	int goalInt = 1;			// Variable to set as a check to finish loop, initialized to 1 to represent the goal
	
	// While the user-inpuuted int is not 1 yet
	while (startInt != goalInt)
	{
		// If the user-inputted int is even, divide by 2
		if (startInt % 2 == 0)
		{
			startInt /= 2;
		}
		// Else the user-inputted int is odd. Multiply by three and add 1
		else
		{
			startInt *= 3;
			startInt += 1;
		}
		// Increment the number of steps by 1
		numSteps += 1;
	}
	// Return the number of steps
	return numSteps;
}