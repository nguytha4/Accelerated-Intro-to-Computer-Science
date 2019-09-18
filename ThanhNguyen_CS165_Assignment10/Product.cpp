/*************************************************************************************************************************
** Author: Thanh Nguyen
** Date: 6/4/2017
** Description: A Product object represents a product with an ID code, title, description, price and quantity available.
*************************************************************************************************************************/

#include <string>
#include "Product.hpp"
using namespace std;

// Constructor
Product::Product(string id, string t, string d, double p, int qa)
{
	idCode = id;
	title = t;
	description = d;
	price = p;
	quantityAvailable = qa;
}

// getIdCode method
string Product::getIdCode()
{
	return idCode;
}

// getTitle method
string Product::getTitle()
{
	return title;
}

// getDescription method
string Product::getDescription()
{
	return description;
}

// getPrice method
double Product::getPrice()
{
	return price;
}

// getQuantityAvailable method
int Product::getQuantityAvailable()
{
	return quantityAvailable;
}

// decreaseQuantity method
void Product::decreaseQuantity()
{
	if (quantityAvailable > 0)
		quantityAvailable--;
}