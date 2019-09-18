/******************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/29/17
** Description: Specification file for the StringList linked list class.
*******************************************************************************************************************************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP

// StringList class declaration
class StringList
{
	private:
		struct ListNode											// ListNode struct
		{
			string value;										// String variable in nodes
			ListNode* next;										// ListNode pointer variable in nodes
			ListNode(string value1, ListNode* next1 = NULL)		// ListNode constructor
			{
				value = value1;									// Set the entered value to value
				next = next1;									// Set the entered pointer address to next
			}
		};
		
		ListNode* head;											// Pointer-to-ListNode variable representing head of Linked List
		
	public:
		StringList() { head = NULL; }		// Constructor
		~StringList();						// Destructor
		StringList(const StringList &);		// Copy Constructor
	
		void add(string);					// Add value to linked list
		int positionOf(string);				// Return position of first occurrence of entered value
		bool setNodeVal(int, string);		// Replace a node in the list with a value and return true if possible and false if not
		
		vector<string> getAsVector();		// Convert list to vector
};
#endif