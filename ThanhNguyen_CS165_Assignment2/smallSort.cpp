/********************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/11/17
** Description: Function - Take three int parameters by reference and rearrange them in ascending order.
*********************************************************************************************************/

// Function Prototype for smallSort
void smallSort (int &firstInt, int &secondInt, int &thirdInt);

// Take in three int parameters by reference and rearrange them in ascending order
void smallSort (int &firstInt, int &secondInt, int &thirdInt)
{
	int swapInt = 0; // Variable to use as placeholder for swapping variables
	
	// If the first number is greater than the second number, swap them
	if (firstInt > secondInt)
	{
		swapInt = secondInt;
		secondInt = firstInt;
		firstInt = swapInt;
	}
	
	// If the third number is less than the third number, swap them
	if (thirdInt < secondInt)
	{
		swapInt = secondInt;
		secondInt = thirdInt;
		thirdInt = swapInt;
	}
	
	// If the second number is less than the first number, swap them
	if (secondInt < firstInt)
	{
		swapInt = secondInt;
		secondInt = firstInt;
		firstInt = swapInt;
	}
}