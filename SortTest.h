#ifndef SORT_TEST_H
#define SORT_TEST_H

/*
 * SortTest.h
 * Name: Harry Kran-Annexstein
 *
 * Nov 6, 2013
 */

#include "Sort.h"

#include <iostream>
#include <cxxtest/TestSuite.h>

using namespace std;

class SortTest : public CxxTest::TestSuite {
public:
  // Fill me in!
	void testIsSortedFALSE() {
		int array[] = {5,4,3,2,1};
		vector<int> nums (array, array + sizeof(array) / sizeof(array[0]));
		Sort s;
		TS_ASSERT(!s.isSorted(nums));
	}
  void testIsSortedTRUE() {
  	int array[] = {1,2,3,4,5};
  	vector<int> nums (array, array + sizeof(array) / sizeof(array[0]));
		Sort s;
  	TS_ASSERT(s.isSorted(nums));
  }

  void testSelectionSort() {
		int array[] = {10,2,11,8,19,13,17,3,15,5};
		vector<int> nums (array, array + sizeof(array) / sizeof(array[0]));
		Sort s;
		nums = s.selectionSort(nums);
		TS_ASSERT(s.isSorted(nums));
  }

  void testSelectionSort2() {
		int array[] = {6,7,13,11,11,15,9,5,4,8};
		vector<int> nums (array, array + sizeof(array) / sizeof(array[0]));
		Sort s;
		nums = s.selectionSort(nums);
		TS_ASSERT(s.isSorted(nums));
  }

  void testCocktailSort() {
		int array[] = {10,2,11,8,19,13,17,3,15,5};
		vector<int> nums (array, array + sizeof(array) / sizeof(array[0]));
		Sort s;
		nums = s.cocktailSort(nums);
		TS_ASSERT(s.isSorted(nums));
  }

  void testCocktailSort2() {
		int array[] = {6,7,13,11,11,15,9,5,4,8};
		vector<int> nums (array, array + sizeof(array) / sizeof(array[0]));
		Sort s;
		nums = s.cocktailSort(nums);
		TS_ASSERT(s.isSorted(nums));
  }

  void testGnomeSort() {
		int array[] = {10,2,11,8,19,13,17,3,15,5};
		vector<int> nums (array, array + sizeof(array) / sizeof(array[0]));
		Sort s;
		nums = s.gnomeSort(nums);
		TS_ASSERT(s.isSorted(nums));
  }

  void testGnomeSort2() {
		int array[] = {6,7,13,11,11,15,9,5,4,8};
		vector<int> nums (array, array + sizeof(array) / sizeof(array[0]));
		Sort s;
		nums = s.gnomeSort(nums);
		TS_ASSERT(s.isSorted(nums));
  }

  void testShellSort() {
		int array[] = {10,2,11,8,19,13,17,3,15,5};
		vector<int> nums (array, array + sizeof(array) / sizeof(array[0]));
		Sort s;
		nums = s.shellSort(nums);
		TS_ASSERT(s.isSorted(nums));
  }

  void testShellSort2() {
		int array[] = {6,7,13,11,11,15,9,5,4,8};
		vector<int> nums (array, array + sizeof(array) / sizeof(array[0]));
		Sort s;
		nums = s.shellSort(nums);
		TS_ASSERT(s.isSorted(nums));
  }

  void testBitonicSort() {
  	int array[] = {10,2,11,8,19,13,17,3,15,5};
  	vector<int> nums (array, array + sizeof(array) / sizeof(array[0]));
 		Sort s;
 		nums = s.yourBestSort(nums);
 		TS_ASSERT(s.isSorted(nums));
   }

  void testBitonicSort2() {
  	int array[] = {6,7,13,11,11,15,9,5,4,8};
  	vector<int> nums (array, array + sizeof(array) / sizeof(array[0]));
 		Sort s;
 		nums = s.yourBestSort(nums);
 		TS_ASSERT(s.isSorted(nums));
   }

};

#endif
