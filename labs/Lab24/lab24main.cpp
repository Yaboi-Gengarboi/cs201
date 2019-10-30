/*
lab24main.cpp
Justyn P. Durnford
Created on 10/30/2019
Last Updated on 10/30/2019
Lab 24
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using std::cout;
using std::endl;
using std::vector;
using std::sort;
using std::reverse;
using std::fill;
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

//Prints the contents of a vector<int>
void printIntVector(const vector<int>& vec)
{
	cout << "{ ";
	for (int i : vec)
	{
		cout << i;
		cout << " ";
	}
	cout << "}" << endl;
}

int main()
{
	vector<int> vec;

	//Create random device
	random_device rDevice;

	//Choose a random int between and including 0 and 9
	default_random_engine engine(rDevice());
	uniform_int_distribution<int> uniform_dist(0, 9);

	int randomInt;
	for (int i = 0; i < 10; i++)
	{
		//Adds a random int into the vector 10 times
		randomInt = uniform_dist(engine);
		vec.push_back(randomInt);
	}

	printIntVector(vec);

	cout << "Sorting vector..." << endl;
	sort(vec.begin(), vec.end());
	cout << "Vector sorted" << endl;
	printIntVector(vec);

	cout << "Reversing vector..." << endl;
	reverse(vec.begin(), vec.end());
	cout << "Vector reversed" << endl;
	printIntVector(vec);

	randomInt = uniform_dist(engine);
	cout << "Filling the vector from 3 to 7 with ";
	cout << randomInt << endl;
	fill(vec.begin() + 2, vec.begin() + 7, randomInt);
	cout << "Vector filled" << endl;
	printIntVector(vec);

	return 0;
}