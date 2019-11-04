/*
lambdas_main.cpp
Justyn P. Durnford
Created on Mar 21, 2019 by 
John Quan
Last updated on Nov 4, 2019 by
Justyn P. Durnford
*/

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
#include <string>

#include "lambdas.hpp"

int main()
{
	vector<pair<size_t, string>> vec;

	for (const auto& item : WIKIPEDIA_CPP)
	{
		vec.push_back(make_pair(item.size(), item));
	}

	sort(vec.begin(), vec.end(),
		[](pair<size_t, string> A, pair<size_t, string> B)
		{
		return A.first < B.first;
		});

	vector<pair<size_t, string>>::iterator it1 = vec.begin();
	vector<pair<size_t, string>>::iterator it2 = vec.end();

	printVectorPairs(it1, it2);



	// TODO: ADDITIONAL 1
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the second member in ascending order.



	// TODO: ADDITIONAL 1
	//       Use printVectorPairs() to print the vector



	// TODO: ADDITIONAL 2
	//       Use std::find_if with a comparison lambda function that prints
	//       the vector pairs where the pair's second.length() > 15.
	//       Print the vector as described in the lab.



	return 0;
}