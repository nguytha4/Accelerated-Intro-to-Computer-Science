/*********************************************************************************************************
** Author: Thanh Nguyen
** Date: 5/20/2017
** Description: Specification file for the ValSet class.
**********************************************************************************************************/

#ifndef VALSET_HPP
#define VALSET_HPP
using namespace std;

template <class T>
class ValSet
{
	private:
		T *aPtr;								// Pointer to a template variable T
		int arraySize;							// Variable to hold array size
		int numVals;							// Variable to hold the number of values in the set
	
	public:
		ValSet();								// Default Constructor
		ValSet(const ValSet &);					// Copy Constructor
		~ValSet();								// Destructor
		
		ValSet operator=(const ValSet &right);	// Overloaded assignment operator
		
		int size();								// Method to return the size of the set
		bool isEmpty();							// Method that returns true if the set is empty and false otherwise
		bool contains(T);						// Method that takes a template variable T and returns true if it is found in the set
		void add(T);							// Method that takes a template variable T and adds it to the set if it is already not in it. Expands the array size if it is full
		void remove(T);							// Method that takes a template variable T and removes it if it finds it in the set
		
		vector<T> getAsVector();				// Return a vector of type T that contains all of the values in the ValSet
};

#endif