/*
random-map.cpp
Justyn P. Durnford
Created on 11/6/2019
Last updated on 11/8/2019

*/

#include <random>
#include <stdlib.h>
#include <cmath>
#include <map>
#include <vector>
#include <iostream>

using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;
using std::normal_distribution;
using std::round;
using std::rand;
using std::vector;
using std::map;
using std::cout;
using std::endl;

/*
This code was provided by Prof. Metzgar via Discord
on 11/8/2019 at 11:16AM
Not entirely certain how this code works for now,
but if x is beyond the endpoints of a or b, it
assigns x to a and b respectively.
*/
template <typename T>
T clamp(T x, T a, T b)
{
	return (x < a) ? (a) : (x > b) ? (b) : (x);
}

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

	//Create random device and generator
	random_device rDev;
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
Generates a vector of normally distributed random
integers with size size and integers between and 
including low and high. We will assume 
(because we know it will be 1-9) that low is less than 
high.
@PARAM int low: Lower integer bound for random number
generation.
@PARAM int high: Upper integer bound for random number
generation.
@PARAM size_t size: Amount of integers to generate.
@RETURN vector<int> randNum: Randomly generated integer
vector.
*/
vector<int> normalRandomBetween(int low, int high, size_t size)
{
	vector<int> randNums;

	//Mean and Standard Deviation values
	double mean = (low + high) / 2;
	double stdVar = 1;

	//Create random device and generator
	random_device rDev;
	default_random_engine engine(rDev());
	normal_distribution<double> norm_dist(mean, stdVar);

	int randNum = 0;

	//Assigns a random number to randNums size times
	for (size_t i = 0; i < size; ++i)
	{
		randNum = (int)round(norm_dist(engine));
		clamp(randNum, low, high);
		randNums.push_back(randNum);
	}
	
	return randNums;
}

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

/*
Takes a vector by constant reference and creates a visual
histogram using a map.
@PARAM const vector<int>& vec: Vector to base histogram 
off of.
@PARAM int low: Lower bound of histogram to print.
@PARAM int high: Upper bound of histogram to print.
*/
void printVectorHistogram(const vector<int>& vec, int low, int high)
{
	map<int, int> hist;

	for (int i = low; i <= high; ++i)
		hist[i] = 0;

	for (int item : vec)
		++hist[item];

	for (const auto& item : hist)
	{
		cout << item.first << " ";
		for (int i = 0; i < item.second; i++)
			cout << "*";
		cout << endl;
	}
}

int main()
{
	vector<int> rand2 = normalRandomBetween(1, 9, 300);

	printVectorHistogram(rand2, 1, 9);

	return 0;
}