/*
lambdas.cpp
Justyn P. Durnford
Created on Mar 21, 2019 by
John Quan
Last updated on Nov 4, 2019 by
Justyn P. Durnford
*/

#include "lambdas.hpp"

void printVectorPairs(
	vector<pair<size_t, string>>::iterator iter1,
	vector<pair<size_t, string>>::iterator iter2)
{
	int count = 1;
	while (iter1 != iter2) {
		cout << setw(5) << left << count << "{ " << iter1->first
			<< ", " << iter1->second << " }" << endl;
		++iter1;
		++count;
	}
}