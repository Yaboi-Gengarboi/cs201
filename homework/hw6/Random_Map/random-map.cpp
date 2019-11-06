/*
random-map.cpp
Justyn P. Durnford
Created on 11/6/2019
Last updated on 11/6/2019

*/

#include <random>
#include <map>
#include <string>
#include <vector>
#include <iostream>

using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

/*
Generates a random integer between and including low
and high.
We will assume (because we know the user will not be 
controlling it) that low is less than high.
@PARAM int low: Lower integer bound for random number
generation.
@PARAM int high: Upper integer bound for random number
generation.
@RETURN int randNum: Randomly generated integer.
*/
int uniformRandomBetween(int low, int high)
{
	//DUMMY RETURN VALUE
	int randNum = 0;

	//Create random device
	random_device rDevice;

	//Choose a random int between and including low and high
	default_random_engine engine(rDevice());
	uniform_int_distribution<int> uniform_dist(low, high);

	//Assigns a random number to randNum
	randNum = uniform_dist(engine);

	return randNum;
}

/*

*/
int normalRandomBetween(int low, int high)
{
	//DUMMY RETURN VALUE
	int randNum = 0;

	//Mean value
	int mean = (low + high) / 2;

	//Create random device
	random_device rDevice;

	return randNum;
}

int main()
{
	




	return 0;
}