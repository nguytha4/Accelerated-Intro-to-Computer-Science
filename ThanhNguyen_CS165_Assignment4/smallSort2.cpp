/***********************************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/24/17
** Description: Function - Take three int address parameters and rearrange the values they point to in ascending order.
***********************************************************************************************************************/

/*
#include <iostream>
using namespace std;
*/

// Function Prototype
void smallSort2 (int*, int*, int*);

/*
int main()
{
	int a = 14;
	int b = -90;
	int c = 2;
	smallSort2(&a, &b, &c);
	cout << a << ", " << b << ", " << c << endl;
	
	return 0;
}
*/

// smallSort2 Function
void smallSort2 (int* firstInt, int* secondInt, int* thirdInt)
{
	int swapInt = 0;	// Placeholder variable to swap variables
	
	// If the dereferenced first number is greater than the dereferenced second number, swap them
	if (*firstInt > *secondInt)
	{
		swapInt = *secondInt;
		*secondInt = *firstInt;
		*firstInt = swapInt;
	}
	
	// If the dereferenced third number is less than the dereferenced third number, swap them
	if (*thirdInt < *secondInt)
	{
		swapInt = *secondInt;
		*secondInt = *thirdInt;
		*thirdInt = swapInt;
	}
	
	// If the dereferenced second number is less than the dereferenced first number, swap them
	if (*secondInt < *firstInt)
	{
		swapInt = *secondInt;
		*secondInt = *firstInt;
		*firstInt = swapInt;
	}
}