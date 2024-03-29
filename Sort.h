#ifndef SORT_H
#define SORT_H
/*
 * Sort.h
 * Name: Harry Kran-Annexstein
 *
 * Nov 6, 2013
 */

#include <vector>
using namespace std;

class Sort{
public:
	// In this case since the class only exposes public member functions
	// that do not require any class state, the default constructor, 
	// copy constructor, and destructor provided by the complier is OK.
	// If you use any dynamic memory, be sure to return memory used, and/or specifiy
	// correct constructors/destructors as needed.

	// REQUIRED public class methods
	// These methods accept a vector of ints and return a sorted array
	// using the specified sort technique.
	vector<int> selectionSort(const vector<int>& array);
	vector<int> cocktailSort(const vector<int>& array);
	vector<int> gnomeSort(const vector<int>& array);
	vector<int> shellSort(const vector<int>& array);
	vector<int> yourBestSort(const vector<int>& array);
	vector<int> bitonicSort(const vector<int>& array, bool up);
	vector<int> bitonicMerge(const vector<int>& array, bool up);
	vector<int> bitonicCompare(const vector<int>& array, bool up);
	bool isSorted(const vector<int>& array);
	
private:
	// You may use any private variables or methods you'd like.

};

#endif
