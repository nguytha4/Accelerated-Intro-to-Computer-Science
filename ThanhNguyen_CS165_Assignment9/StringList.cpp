/******************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/29/17
** Description: Implementation file for the StringList linked list class.
*******************************************************************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "StringList.hpp"
using namespace std;

// Destructor
StringList::~StringList()
{
	ListNode* nodePtr = head;			// Create a pointer, nodePtr, to traverse the linked list
	
	while (nodePtr != NULL)				// While the pointer (imitating next pointers) isn't pointing to NULL
	{
		ListNode* garbage = nodePtr;	// Create a pointer, garbage, that is one node behind nodePtr
		nodePtr = nodePtr->next;		// Set nodePtr to the next node
		delete garbage;					// Delete garbage
	}
}

// Copy Constructor
StringList::StringList(const StringList &obj)
{
	if (obj.head == NULL)													// If the linked list is empty
	{ 
		head = NULL;														// Set head to NULL
	}
	else																	// Else,
	{
		head = new ListNode(obj.head->value);								// Copy the first value of the passed in list
		
		ListNode* oldNodePtr = obj.head;									// Create a temporary node pointer to traverse the old list. 
		ListNode* newNodePtr = head;										// Create a temporary node pointer to traverse the new list
		
		while (oldNodePtr->next != NULL)									// While the end of the old list hasn't been reached
		{
			newNodePtr->next = new ListNode(oldNodePtr->next->value);		// Add a node to the end of the new list using the the oldNodePtr's next's value
			
			oldNodePtr = oldNodePtr->next;									// Move to the next node of the old list
			newNodePtr = newNodePtr->next;									// Move to the newly created node on the new list
		}
	}
}

// add method
void StringList::add(string stringIn)
{
	if (head == NULL)								// If there are no values on the linked list
	{
		head = new ListNode(stringIn);				// Create a new node and attach it to head
	}
	else											// Else,
	{
		ListNode* nodePtr = head;					// Create a pointer, nodePtr, to traverse the list, starting from head
		
		while(nodePtr->next != NULL)				// While nodePtr->next is not pointing to NULL
		{
			nodePtr = nodePtr->next;				// Move to the next node
		}
		
		nodePtr->next = new ListNode(stringIn);		// Once the end of the list has been reached, attached a new node to the end of it
	}
}

// positionOf method
int StringList::positionOf(string stringIn)
{	
	if (head == NULL)							// If there are no values on the linked list
		return -1;								// Return a position of -1
	else										// Else,
	{
		int posCounter = 0;						// Create a counter to increment as we move along nodes
		ListNode* nodePtr = head;				// Create a pointer, nodePtr, to traverse the list, starting from head
		
		while (nodePtr != NULL)					// While nodePtr (imitating next pointers) does not point to NULL
		{
			if (nodePtr->value == stringIn)		// If nodePtr->value is the value entered
			{
				return posCounter;				// Return the position
			}
			else								// Else,
			{
				nodePtr = nodePtr->next;		// Move to the next node
				posCounter++;					// Increment the position counter
			}
		}
		return -1;								// Otherwise, the value was not on the list. Return -1
	}
}

// setNodeVal method
bool StringList::setNodeVal(int posIn, string stringIn)
{
	if (head == NULL)									// If there are no nodes
		return false;									// Return false
	
	int numNodes = 1;									// Create a variable numNodes, to count the number of nodes on the list. Initialize to 1 because there is at least one node on the list
	ListNode* nodePtr = head;							// Create a pointer, nodePtr, to traverse the linked list, starting from head
	nodePtr = nodePtr->next;							// Move to the first node on the list
	
	while (nodePtr != NULL)								// While nodePtr (imitating next pointers) does not point to NULL
	{
		nodePtr = nodePtr->next;						// Move to the next node on the list
		numNodes++;										// Increment the number of nodes on the list
	}
	
	if (posIn >= numNodes)								// If the zero-based position entered into the function is greater than or equal to the number of nodes
		return false;									// Return false
	else												// Else,
	{
		nodePtr = head;									// Reset nodePtr back to head
		for (int index = 0; index < posIn; index++)		// Create a for loop to traverse the linked link to the position entered
		{
			nodePtr = nodePtr->next;					// Move to the next node
		}
		nodePtr->value = stringIn;						// Replace the node's value with the entered string
		return true;									// Return true
	}
}

// getAsVector method
vector<string> StringList::getAsVector()
{
	vector<string> set;						// Create a vector to hold the linked list values
	
	ListNode* nodePtr = head;				// Create a pointer, nodePtr, to traverse the list, starting from head
	while (nodePtr != NULL)					// While nodePtr (imitating as next) does not point to NULL
	{
		set.push_back(nodePtr->value);		// Push the value onto the vector
		nodePtr = nodePtr->next;			// Move to the next node
	}
	return set;								// Return the vector from the function
}