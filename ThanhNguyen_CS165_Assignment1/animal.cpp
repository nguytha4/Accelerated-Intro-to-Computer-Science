/*********************************************************************
** Author: Thanh Nguyen
** Date: 4/4/17
** Description: Prompts user to input favorite animal then outputs it.
**********************************************************************/

#include <iostream>
#include <string>

// a simple example program
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;

	return 0;
}
