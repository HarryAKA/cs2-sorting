/*
 * main.cpp
 * Name: Harry Kran-Annexstein
 *
 * This program sorts numbers provided in a text file, and prints out the sorted
 * number to stdout (the screen).
 * It accepts 2 command-line parameters, the first an integer representing
 * the sort to use.  0 Selection sort, 1 Coctail sort, 2 Gnomesort, 3 Shellsort, 
 * 4 Your Best Sort.
 * The second paremeter is a filename of a file containing the numbers to sort.
 * The file has one integer (could have many digits) per line.
 *
 * Nov 6, 2013
 */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "Sort.h"

using namespace std;

int main(int argc, char* argv[]){
	if (argc != 3) {
		cout << "Program requires 2 input parameters: "<< endl
		<< "1. An integer from 0-4 representing sort type, " << endl
		<< "2. File containing numbers to sort." << endl;
		return 0;
	}

	int sort = atoi(argv[1]);
  ifstream file;
  file.open(argv[2]);

  if(file.fail()){
    cout << "Error opening: " << argv[2] << " Please try again." << endl;
    return 0;
  }

  vector<int> array;
  int inum;

  while(file >> inum){
    array.push_back(inum);
  }
  file.close();

  Sort s;
  switch(sort) {
  	case 0:
  		array = s.selectionSort(array);
  		break;
  	case 1:
  		array = s.cocktailSort(array);
  		break;
  	case 2:
  		array = s.gnomeSort(array);
  		break;
  	case 3:
  		array = s.shellSort(array);
  		break;
  	case 4:
  		array = s.yourBestSort(array);
  		break;
  	default:
  		cout << "Desired sort must be identified as an integer 0 to 4." << endl;
  }

  for (unsigned i = 0; i < array.size(); i++) {
  	cout << array[i] << endl;
  }

	return 0;
}
