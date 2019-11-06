/*
lab27main.cpp
Justyn P. Durnford
Created on 11/6/2019
Last updated on 11/6/2019
Lab 27
*/

#include <random>
#include <iostream>

using std::random_device;
using std::uniform_int_distribution;
using std::mt19937;
using std::cout;
using std::endl;

int main()
{
	//Create random device
	random_device rDevice;

	//Seed the Mersenne Twister
	mt19937 rGenerator(rDevice());

	//Generates a random int between and including 0 and 1
	uniform_int_distribution<int> distrib(0, 1);

	int randInt;
	int numHeads = 0;
	int numTails = 0;

	for (int i = 0; i < 6; i++)
	{
		for (int p = 0; p < 1000; p++)
		{
			randInt = distrib(rGenerator);
			if (randInt > 0)
				numHeads++;
			else
				numTails++;
		}

		cout << "Heads: " << numHeads << endl;
		cout << "Tails: " << numTails << endl;

		numHeads = 0;
		numTails = 0;
	}

	return 0;
}