/*
bulls-and-cows.cpp
Justyn P. Durnford
Created on 10/14/2019
Finished on
Generates 4 random integers and places them in
a vector and has the user guess at each digit.
I wanted to try something different and use a
random numger generator I found online instead
of using the srand method I know about.
Apparently this method is more random than that.
*/

#include <iostream>
#include <vector>
#include <random>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

/*
Takes the vector and entry and compares the individual
digits of the entry to the corrisponding vector spots.
@param vector<int> nums: Vector to compare to.
@param vector<int> Vector with 4 digits to compare with.
@return int common: 0-4 based on how many digits match.
*/
int compareDigits(vector<int> nums, vector<int> guess)
{
	int common = 0;

	for (int i = 0; i < 4; i++)
	{
		if (nums[i] == guess[i])
			common++;
	}

	return common;
}

int main()
{
	vector<int> nums;
	vector<int> guess = { 0, 0, 0, 0 };
	int input;

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

	while (compareDigits(nums, guess) != 4)
	{
		cout << "Enter 4 digits" << endl;
		cin >> input;
		cin.clear();
		if (input < 10000)
		{

		}
		else if (input >= 10000)
		{
			cout << "ERROR: More than 4 digits. Try again." << endl;
			continue;
		}
	}

	return 0;
}