/*
random-map.cpp
Justyn P. Durnford
Created on 11/6/2019
Last updated on 11/6/2019

*/

#include <random>
#include <stdlib.h>
#include <map>
#include <vector>
#include <iostream>

using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;
using std::normal_distribution;
using std::rand;
using std::vector;
using std::cout;
using std::endl;

/*
Generates a vector of random integers with size
size and integers between and including low and high.
We will assume (because we know it will be 1-9) 
that low is less than high.
@PARAM int low: Lower integer bound for random number
generation.
@PARAM int high: Upper integer bound for random number
generation.
@PARAM size_t size: Amount of integers to generate.
@RETURN vector<int> randNum: Randomly generated integer 
vector.
*/
vector<int> uniformRandomBetween(int low, int high, size_t size)
{
	vector<int> randNums;

	//Create random device
	random_device rDev;

	//Choose a random int between and including low and high
	default_random_engine engine(rDev());
	uniform_int_distribution<int> uniform_dist(low, high);

	//Assigns a random number to randNums size times
	int randNum;
	for (size_t i = 0; i < size; ++i)
	{
		randNum = uniform_dist(engine);
		randNums.push_back(randNum);
	}

	return randNums;
}

/*

*/
/*
int normalRandomBetween(int low, int high)
{
	//DUMMY RETURN VALUE
	int randNum = 0;

	//Mean and Standard Deviation values
	int mean = (low + high) / 2;
	int stdVar = 1;

	//Create random device
	random_device rDev;

	//Choose a random int between and including low and high
	default_random_engine engine(rDev());
	normal_distribution<int> norm_dist(mean, stdVar);

	//Assigns a random number to randNum
	randNum = norm_dist(engine);
	
	return randNum;
}
*/

/*

*/
vector<int> randRandomBetween(int low, int high, size_t size)
{
	vector<int> randNums;

	//Assigns a random number to randNums size times
	int randNum;
	for (size_t i = 0; i < size; ++i)
	{
		randNum = rand() % (high - low + 1) + 1;
		randNums.push_back(randNum);
	}

	return randNums;
}

int main()
{
	vector<int> rand1 = uniformRandomBetween(1, 9, 100);
	vector<int> rand2 = randRandomBetween(1, 9, 100);

	cout << "rand1" << endl;
	for (auto item : rand1)
	{
		cout << item << endl;
	}
	cout << "rand2" << endl;
	for (auto item : rand2)
	{
		cout << item << endl;
	}

	return 0;
}