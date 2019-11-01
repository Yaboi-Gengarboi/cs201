/*
bulls-and-cows.cpp
Justyn P. Durnford
Created on 10/14/2019
Last updated on 11/1/2019
Generates 4 random integers and places them in
a vector and has the user guess at each digit.
*/

#include <vector>
#include <random>

using std::vector;
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

/*
Takes the vector and entry and compares the individual
digits of the entry to the corrisponding vector spots.
@PARAM vector<int> nums: Vector to compare to.
@PARAM vector<int> Vector with 4 digits to compare with.
@RETURN int common: 0-4 based on how many digits match.
*/
int compareDigits(const vector<int>& nums, const vector<int>& guess)
{
	int common = 0;

	for (int i = 0; i < 4; i++)
	{
		if (nums[i] == guess[i])
			common++;
	}

	return common;
}


/*
Takes the vectors from main.cpp and initializes them
with a random number generator for guess.
@PARAM vector<int>& nums: Vector to initialize with
random integers.
@PARAM vector<int>& guess: Vector to initialize with
zeros.
*/
void initVectors(vector<int>& nums, vector<int>& guess)
{
	//Create random device
	random_device rDevice;

	//Choose a random int between and including 0 and 9
	default_random_engine engine(rDevice());
	uniform_int_distribution<int> uniform_dist(0, 9);

	//Assigns a random int to each spot in the vector
	int randomInt;
	for (int i = 0; i < 4; i++)
	{
		randomInt = uniform_dist(engine);
		nums.push_back(randomInt);
	}

	//This is to make sure that the two vectors are not
	//identical by random chance
	while (compareDigits(nums, guess) == 4)
	{
		for (int i = 0; i < 4; i++)
		{
			randomInt = uniform_dist(engine);
			nums[i] = randomInt;
		}
	}
}