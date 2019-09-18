/*************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 6/4/2017
** Description: A Customer object represents a customer with a name and account ID.
				Customers must be members of the Store to make a purchase.  Premium members get free shipping.
*************************************************************************************************************************/

#include <string>
#include "Customer.hpp"
using namespace std;

// Constructor
Customer::Customer(string n, string a, bool pm)
{
	name = n;
	accountID = a;
	premiumMember = pm;
}

// getAccountID method
string Customer::getAccountID()
{
	return accountID;
}

// getCart method
vector<string> Customer::getCart()
{
	return cart;
}

// addProductToCart method
void Customer::addProductToCart(string productIn)
{
	cart.push_back(productIn);
}

// isPremiumMember method
bool Customer::isPremiumMember()
{
	return premiumMember;
}

// emptyCart method
void Customer::emptyCart()
{
	cart.clear();
}