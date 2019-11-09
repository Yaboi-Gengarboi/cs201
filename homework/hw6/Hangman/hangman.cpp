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
using std::cin;
using std::getline;
using std::endl;
using std::map;
using std::vector;
using std::string;
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

//Prompts the user to enter a letter.
char getInput()
{
	char ch;
	string line;
	bool cont = true;

	while (cont)
	{
		cout << "Enter a letter" << endl;
		getline(cin, line);
		if (!line.empty())
		{
			ch = line[0];
			cont = false;
		}
	}

	return ch;
}

/*
Looks if the character from getInput is in
the word and corrects guess accordingly.
*/
bool checkGuess(const string& word, string& guess)
{
	bool retVal = false;
	char ch = getInput();
	size_t found = word.find(ch);

	//Checks for ch multiple times
	while (found != -1)
	{
		guess[found] = ch;
		found = word.find(ch, found + 1);
		retVal = true;
	}

	return retVal;
}

int main()
{
	vector<string> words =
	{
		"Apple", "Bagpipes", "Banjo",
		"Computer", "Crypt", "Danger",
		"Eaten", "Favorite", "Fishing",
		"Gaming", "Great", "Haiku",
		"Happy", "Ivory", "Journal",
		"Kayak", "Klutz", "Length", 
		"Mailbox", "Memory", "Nearby", 
		"Nickel", "Oxygen", "Pajama", 
		"Pixel", "Polka", "Queen", 
		"Quick", "Rhythm", "Rogue", 
		"Sphinx", "Shovle", "Today", 
		"Twenty", "Unzip", "Violin", 
		"Western", "Wonder", "Xenon",
		"Yogurt", "Zigzag", "Zombie"
	};

	string word = "";
	string guess = "";

	random_device rDev;
	default_random_engine engine(rDev());
	uniform_int_distribution<int> uniform_dist(0, words.size() - 1);

	word = words[uniform_dist(engine)];
	for (int i = 0; i < word.size(); ++i)
		guess += "_";

	cout << word << endl;
	cout << guess << endl;
	while (guess.compare(word) != 0)
	{
		if (checkGuess(word, guess))
		{
			cout << guess << endl;
		}
		else
		{
			cout << guess << endl;
		}
	}

	cout << "You Win!" << endl;

	return 0;
}