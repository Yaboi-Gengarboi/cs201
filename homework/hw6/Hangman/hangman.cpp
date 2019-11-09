/*
hangman.cpp
Justyn P. Durnford
Created on 11/9/2019
Last updated on 11/9/2019

*/

#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <random>
#include <iostream>

using std::cout;
using std::endl;
using std::map;
using std::vector;
using std::string;
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

int main()
{
	vector<string> words =
	{
		"Awkward", "Bagpipes", "Banjo",
		"Computer", "Crypt", "Danger",
		"Eaten", "Favorite", "Fishing",
		"Gaming", "Great", "Haiku",
		"Happy", "Ivory", "Journal",
		"Kayak", "Klutz", "Mailbox",
		"Memory", "Nearby" "Nickel",
		"Oxygen", "Pajama", "Pixel",
		"Polka", "Queen", "Quick",
		"Rhythm", "Rogue", "Sphinx",
		"Shovle", "Today", "Twenty",
		"Unzip", "Violin", "Wonder",
		"Western", "Xenon", "Yacht", 
		"Yogurt", "Zigzag", "Zombie"
	};

	string word = "";
	string guess = "";

	random_device rDev;
	default_random_engine engine(rDev());
	uniform_int_distribution<int> uniform_dist(0, words.size() - 1);


	return 0;
}