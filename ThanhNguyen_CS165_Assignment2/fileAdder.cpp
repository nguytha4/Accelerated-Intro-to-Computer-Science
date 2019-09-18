/**************************************************************************************************
** Author: Thanh Nguyen
** Date: 4/11/17
** Description: Prompt user for file name, sum integers in the file, and output sum to output file.
***************************************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{	
	ifstream inputFile;		// Variable to read input file
	ofstream outputFile;	// Variable to create output file
	string fileName;		// Variable to take in user input for file name
	int integer;			// Variable to hold integers from input file
	int intSum;				// Variable to hold sum of integers from input file			
	
	// Prompt user for file name
	cout << "Please input file name: ";
	// Initial fileName to user input
	cin >> fileName;
	
	// Open the input file
	inputFile.open(fileName.c_str());
	
	// If the file is successfully opened, process it
	if (inputFile)
	{
		// While there are numbers to be read on the input file
		while (inputFile >> integer)
		{
			// Take in integer one by one and add to sum
			intSum += integer;
		}
		
		// Close the input file
		inputFile.close();
		
		// Open the output file
		outputFile.open("sum.txt");
		
		// Output sum onto output file
		outputFile << intSum;
		
		// Close the output file
		outputFile.close();
	}
	else
	{
		// Display an error message if the file could not be opened
		cout << "could not access file" << endl;
	}
	
	// Exit program
	return 0;
}