/******************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/29/17
** Description: Implementation file for the postfixEval function.
				It takes in a set of numbers and math operators in postfix notation and returns the result as a double.
*******************************************************************************************************************************/

#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <stack>
using namespace std;

// Function prototype
double postfixEval(char*);

// postfixEval function
double postfixEval(char* stringIn)
{	
	stack<double> iStack;					// Create a stack to store doubles
	
	char* token = strtok(stringIn, " ");	// Create a char pointer to point to the tokens of the c-string, delimited by spaces
	
	while (token != NULL)					// While the c-string hasn't been fully parsed into all its tokens yet
	{
		if (isdigit(*token))				// If the first character of the token c-string is a number
		{
			iStack.push(atof(token));		// Push the parsed number onto the stack
		}
		else								// Else,
		{
			double num1;					// Create a double variable to pull values from the stack to do math on
			double num2;					// Create a double variable to pull values from the stack to do math on
			
			if (*token == '+')				// If the token is a + operator
			{
				num1 = iStack.top();		// Set the value at the top of the stack to num1
				iStack.pop();				// Pop the top value off the stack
				
				num2 = iStack.top();		// Set the value at the top of the stack to num2
				iStack.pop();				// Pop the top value off the stack
				
				iStack.push(num2+num1);		// Subtract the second value from the first and push the result onto the stack
			}
			
			if (*token == '-')				// If the token is a - operator
			{                               
				num1 = iStack.top();        // Set the value at the top of the stack to num
				iStack.pop();               // Pop the top value off the stack
				                            
				num2 = iStack.top();        // Set the value at the top of the stack to num
				iStack.pop();               // Pop the top value off the stack
				                            
				iStack.push(num2-num1);     // Multiply the values and push them onto the stack
			}
			
			if (*token == '*')				// If the token is a * operator
			{                               
				num1 = iStack.top();        // Set the value at the top of the stack to num
				iStack.pop();               // Pop the top value off the stack
				                            
				num2 = iStack.top();        // Set the value at the top of the stack to num
				iStack.pop();               // Pop the top value off the stack
				                            
				iStack.push(num2*num1);     // Add the values and push them onto the stack
			}
			
			if (*token == '/')				// If the token is a / operator
			{                               
				num1 = iStack.top();        // Set the value at the top of the stack to num
				iStack.pop();               // Pop the top value off the stack
				                            
				num2 = iStack.top();        // Set the value at the top of the stack to num
				iStack.pop();               // Pop the top value off the stack
				                            
				iStack.push(num2/num1);     // Divide the second value from the first and push the result onto the stack
			}
		}
		token = strtok(NULL, " ");			// Continue to parse the c-string
	}
	
	return iStack.top();					// Return what should be the only value on the stack
}