/*
lab25.cpp
Justyn P. Durnford
Created on 11/1/2019
Last updated on 11/1/2019
*/

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <utility>

using std::cout;
using std::endl;
using std::vector;
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;
using std::pair;
using std::mismatch;

void printVector(const vector<int>& vec)
{
	cout << "{ ";
	for (int item : vec)
		cout << item << " ";
	cout << "}" << endl;
}

void checkMismatch(const vector<int>& vec1, const vector<int>& vec2)
{
	pair<vector<int>::const_iterator, vector<int>::const_iterator> mispair;
	mispair = mismatch(vec1.begin(), vec1.end(), vec2.begin());

	if (mispair.first == vec1.end())
		cout << "No mistmatch found" << endl;
	else
	{
		cout << *mispair.first << ", " << *mispair.second << endl;
	}
}

int main()
{
	vector<int> vec1;
	vector<int> vec2;
	int randomInt;

	//Create random device
	random_device rDevice;

	//Choose a random int between and including 0 and 9
	default_random_engine engine(rDevice());
	uniform_int_distribution<int> uniform_dist(0, 9);

	for (int i = 0; i < 10; i++)
	{
		randomInt = uniform_dist(engine);
		vec1.push_back(randomInt);
	}
	for (int i = 0; i < 10; i++)
	{
		randomInt = uniform_dist(engine);
		vec2.push_back(randomInt);
	}

	printVector(vec1);
	printVector(vec2);

	checkMismatch(vec1, vec2);

	vector<int> vec3 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int> vec4 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printVector(vec3);
	printVector(vec4);

	checkMismatch(vec3, vec4);

	return 0;
}