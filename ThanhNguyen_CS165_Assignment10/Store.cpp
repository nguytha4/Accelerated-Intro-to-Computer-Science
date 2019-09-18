/*****************************************************************************************************
** Author: Thanh Nguyen
** Date: 6/4/2017
** Description: A Store object represents a store, which has some number of products in its inventory
				and some number of customers as members.
*****************************************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "Store.hpp"
using namespace std;

// addProduct method
void Store::addProduct(Product* p)
{
	inventory.push_back(p);		// Add a product pointer to the vector
}

// addMember method
void Store::addMember(Customer* c)
{
	members.push_back(c);		// Add a customer pointer to the vector
}

// getProductFromID method
Product* Store::getProductFromID(string pID)
{	
	for (int i = 0; i < inventory.size(); i++)		// Iterate through the vector of product pointers
	{
		if (inventory[i]->getIdCode() == pID)		// If an item matches the product code
			return inventory[i];					// Return the pointer to the item
	}	
	return NULL;									// Otherwise return NULL
}

// getMemberFromID method
Customer* Store::getMemberFromID(string mID)
{
	for (int i = 0; i < members.size(); i++)		// Iterate through the vector of member pointers
	{                                               
		if (members[i]->getAccountID() == mID)      // If an item matches the member ID
			return members[i];                      // Return the pointer to the member
	}	                                            
	return NULL;                                    // Otherwise return NULL
}

// productSearch method
void Store::productSearch(string str)
{
	// Format the input string so the first letter is uppercase and store in new variable
	str[0] = toupper(str[0]);
	string uStr = str;
	
	// Format the input string so the first letter is lowercase and store in new variable
	str[0] = tolower(str[0]);
	string lStr = str;
	
	// Iterate through the vector of inventory pointers
	for (int i = 0; i < inventory.size(); i++)
	{
		// If the uppercase or lowercase input string matches an item's title or description
		if (inventory[i]->getTitle().find(uStr) != string::npos || inventory[i]->getDescription().find(uStr) != string::npos || inventory[i]->getTitle().find(lStr) != string::npos || inventory[i]->getDescription().find(lStr) != string::npos)
		{
			// Print out the item's title, product ID, price, and description
			cout << inventory[i]->getTitle() << endl;
			cout << "ID code: " << inventory[i]->getIdCode() << endl;
			cout << "price: " << inventory[i]->getPrice() << endl;
			cout << inventory[i]->getDescription() << endl << endl;
		}
	}
}

// addProductToMemberCart method
void Store::addProductToMemberCart(string pID, string mID)
{
	bool pFound = false;	// Variable to indicate a product was found that matches the input product ID
	bool mFound = false;	// Variable to indicate a member was found that matches the input member ID
	int pPos = -1;			// Variable to hold the position of the product ID when it is found
	int mPos = -1;			// Variable to hold the position of the member ID when he/she is found
	int counter = 0;		// Counter for while loop
	
	// Check to see if product is in inventory
	while (pFound == false && counter < inventory.size())
	{
		// If a product is found that matches the input ID
		if (inventory[counter]->getIdCode() == pID)
		{
			pFound = true;		// Set pFound to true
			pPos = counter;		// Mark where the item was found in vector
		}
		counter++;				// Increment the counter
	}
	
	// If the product is not in the inventory, let the user know and exit function
	if (!pFound)
	{
		cout << "Product #" << pID << " not found." << endl;
		return;
	}
	
	// Reset counter
	counter = 0;
	
	// Check to see if member is a member of store
	while (mFound == false && counter < members.size())
	{
		// If a member is found that matches the member ID
		if (members[counter]->getAccountID() == mID)
		{
			mFound = true;		// Set mFound to true
			mPos = counter;		// Mark where the member was found in vector
		}
		counter++;				// Increment the counter
	}
	
	// If the member is not a member of the store, let the user know and exit function
	if (!mFound)
	{
		cout << "Member #" << mID << " not found." << endl;
		return;
	}
	
	// Check to see if item is still in stock. If not, let the user know.
	if (inventory[pPos]->getQuantityAvailable() <= 0)
	{
		cout << "Sorry, product #" << pID << " is currently out of stock." << endl;
		return;
	}
	
	// If the item is in stock, add the item to the user's cart
	members[mPos]->addProductToCart(inventory[pPos]->getIdCode());
}

// checkOutMember method
void Store::checkOutMember(string mID)
{
	bool mFound = false;	// Variable to indicate whether member was found in system
	int mPos = -1;			// Variable to indicate where member was found in system
	int counter;			// Variable as counter for while loop
	
	bool pFound = false;	// Variable to indicate whether item was found in the store
	
	double subTotal = 0;	// Variable to hold amount of subtotal
	double shipping = 0;	// Variable to hold amount of shipping
	double total = 0;		// Variable to hold amount of total
	
	// Check to see if member is a member of store
	while (mFound == false && counter < members.size())
	{
		// If the member is a member of the store, set the flag for found and remember the position
		if (members[counter]->getAccountID() == mID)
		{
			mFound = true;
			mPos = counter;
		}
		counter++;	// Increment counter
	}
	
	// If the member is not a member of the store, let the user know and exit function
	if (!mFound)
	{
		cout << "Member #" << mID << " not found." << endl;
		return;
	}
	
	// Check to see if the cart is empty
	if (members[mPos]->getCart().empty())
	{
		// If there are no items in the cart, let the user know and exit function
		cout << "There are no items in the cart." << endl;
		return;
	}
	
	// Create a temporary vector and copy over member's cart
	vector<string> mCart = members[mPos]->getCart();
	
	// Create a loop to increment through all the items in the cart
	for (int i = 0; i < mCart.size(); i++)
	{
		counter = 0;		// Initialize the while loop counter to 0
		pFound = false;		// Set the flag for product found to false
		
		// While the item has not been found in the registry
		while(!pFound)
		{
			// If the item is found in the registry
			if (mCart[i] == inventory[counter]->getIdCode())
			{
				// If the item is out of stock
				if (inventory[counter]->getQuantityAvailable() == 0)
				{
					// Let the user know the item is out of stock
					cout << "Sorry, product #" << inventory[counter]->getIdCode() << ", \"" << inventory[counter]->getTitle() << "\", is no longer available." << endl;;
				}
				// Else, the item is in stock
				else
				{
					// Display the item and its price
					cout << inventory[counter]->getTitle() << " - $" << inventory[counter]->getPrice() << endl;
					// Add the price of the item to the subtotal
					subTotal += inventory[counter]->getPrice();
					// Descrease the quantity of the item
					inventory[counter]->decreaseQuantity();
				}
				
				// Set the flag for product found to true to exit while loop and ring up next item
				pFound = true;
			}
			counter++;	// Increment the counter
		}
	}
	
	// If the member is a premium member, calculate shipping. (Otherwise, it stays $0 for premium members)
	if (!(members[mPos]->isPremiumMember()))
	{
		shipping = subTotal * .07;
	}
	
	// Calculate the total
	total = subTotal + shipping;
	
	// Display the subtotal, shipping, and total
	cout << "Subtotal: $" << subTotal << endl;
	cout << "Shipping Cost: $" << shipping << endl;
	cout << "Total: $" << total << endl;
	
	// Empty the member's cart
	members[mPos]->emptyCart();
}