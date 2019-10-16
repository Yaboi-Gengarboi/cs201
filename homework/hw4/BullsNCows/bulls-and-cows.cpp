/*
bulls-and-cows.cpp
Justyn P. Durnford
Created on 10/14/2019
Finished on 10/14/2019
Generates 4 random integers and places them in
a vector and has the user guess at each digit.
I wanted to try something different and use a
random numger generator I found online instead
of using the srand method I know about.
Apparently this method is more random than that.
*/

#include <iostream>
#include <string>
#include <vector>
#include <random>

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::string;
using std::stoi;
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
	string input;
	int num;

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
		getline(cin, input);

		if (input.size() <= 4)
		{
			num = stoi(input);
			for (int i = 0; i < 4; i++)
			{
				guess[i] = num % 10;
				num /= 10;
			}
			switch (compareDigits(nums, guess))
			{
				case 0:
					cout << "4 Cows" << endl;
					break;
				case 1:
					cout << "1 Bull, 3 Cows" << endl;
					break;
				case 2:
					cout << "2 Bulls, 2 Cows" << endl;
					break;
				case 3:
					cout << "3 Bulls, 1 Cow" << endl;
					break;
				case 4:
					cout << "4 Bulls. You Win!" << endl;
					break;
			}
		}
		else if (input.size() > 4)
		{
			cout << "ERROR: More than 4 digits. Try again." << endl;
			continue;
		}
	}
	return 0;
}