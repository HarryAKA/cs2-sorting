/*
 * Sort.cpp
 * Name: Harry Kran-Annexstein
 *
 * Nov 6, 2013
 */

#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>
#include "Sort.h"

using namespace std;

// You MUST have these implemented (even if they don't work correctly)
// in order for you to benchmark any of the sorts in our Scoreboard site.
// If not, the testing main will not be able to compile.

bool Sort::isSorted(const vector<int>& array) {
	for (unsigned i = 0; i < array.size()-1; i++) {
		if (array[i] > array[i+1]) {
			return false;
		}
	}
	return true;
}

vector<int> Sort::selectionSort(const vector<int>& array){
	vector<int> ret(array);
	int mindex;
	int min;
	int size = ret.size();
	for (int i = 0; i < size-1; i++) {
		mindex = i;
		for (int j = i+1; j < size; j++) {
			if (ret[j] <= ret[mindex]) {
				mindex = j;
				min = ret[j];
			}
		}
		if (mindex != i) {
			ret[mindex] = ret[i];
			ret[i] = min;
		}
	}
	return ret;
}

vector<int> Sort::cocktailSort(const vector<int>& array){
	vector<int> ret(array);
	bool swap = true;
	int tmp;
	int head = 0;
	int tail = ret.size() - 1;
	while (swap) {
		swap = false;
		for (int i = head; i < tail; i++) {
			if (ret[i] > ret[i+1]) {
				tmp = ret[i];
				ret[i] = ret[i+1];
				ret[i+1] = tmp;
				swap = true;
			}
		}
		if (!swap) {
			return ret;
		}
		swap = false;
		tail--;
		for (int i = tail - 1; i >= head; i--) {
			if (ret[i] > ret[i+1]) {
				tmp = ret[i];
				ret[i] = ret[i+1];
				ret[i+1] = tmp;
				swap = true;
			}
		}
		head++;
	}
	return ret;
}

vector<int> Sort::gnomeSort(const vector<int>& array){
	vector<int> ret(array);
	int i = 1;
	int size = ret.size();
	int tmp;
	while (i < size) {
		if (ret[i] >= ret[i-1]) {
			i++;
		}else {
			tmp = ret[i];
			ret[i] = ret[i-1];
			ret[i-1] = tmp;
			if (i > 1) {
				i--;
			}
		}
	}
	return ret;
}

vector<int> Sort::shellSort(const vector<int>& array){
	vector<int> ret(array);
	int size = ret.size();
	int gap = size/2;
	int tmp;
	int j;
	while (gap > 0) {
		for (int i = gap; i < size; i++) {
			tmp = ret[i];
			for (j = i; j >= gap && ret[j-gap] > tmp; j -= gap) {
					ret[j] = ret[j-gap];
			}
			ret[j] = tmp;
		}
		if(gap == 1) {
			gap = 0;
		}else if(gap/2 < 1) {
			gap = 1;
		}else {
			gap = gap/2;
		}
	}
	return ret;
}

vector<int> Sort::yourBestSort(const vector<int>& array){
	vector<int> ret(array);
	int size = ret.size();
	int nextpow = pow(2,ceil(log(size)/log(2)));
	for (int i = size; i < nextpow; i++) {
		ret.push_back(INT_MAX);
	}
	ret = bitonicSort(ret, true);
	vector<int> final(ret.begin(), ret.begin() + size);
	return final;
}

vector<int> Sort::bitonicSort(const vector<int>& array, bool up) {
	vector<int> ret(array);
	int size = ret.size();
	if (size <= 1) {
		return ret;
	}else {
		vector<int> first(ret.begin(), ret.begin() + size/2);
		vector<int> second(ret.begin() + size/2, ret.end());
		first = bitonicSort(first, true);
		second = bitonicSort(second, false);
		first.insert(first.end(), second.begin(), second.end());
		ret = bitonicMerge(first, up);
		return ret;
	}
}

vector<int> Sort::bitonicMerge(const vector<int>& array, bool up) {
	vector<int> ret(array);
	int size = ret.size();
	if (size == 1) {
		return ret;
	}else {
		ret = bitonicCompare(ret, up);
		vector<int> first(ret.begin(), ret.begin() + size/2);
		vector<int> second(ret.begin() + size/2, ret.end());
		first = bitonicMerge(first, up);
		second = bitonicMerge(second, up);
		first.insert(first.end(), second.begin(), second.end());
		return first;
	}
}

vector<int> Sort::bitonicCompare(const vector<int>& array, bool up) {
	vector<int> ret(array);
	int dist = ret.size() / 2;
	int tmp;
	for (int i = 0; i < dist; i++) {
		if ((ret[i] > ret[i + dist]) == up) {
			tmp = ret[i];
			ret[i] = ret[i+dist];
			ret[i+dist] = tmp;
		}
	}
	return ret;
}
