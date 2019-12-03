/*
Games.cpp
Justyn P. Durnford
CS 201
Created on 12/2/2019
Last Updated on 12/2/2019
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;
using std::toupper;

#include <vector>
using std::vector;

#include <map>
using std::map;

#include <random>
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

#include <cctype>
using std::isalpha;

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
		if (!line.empty() && isalpha(line[0]))
		{
			ch = toupper(line[0]);
			cont = false;
		}
	}

	return ch;
}

/*
Looks if the character from getInput is in
the word and corrects guess accordingly.
*/
bool checkGuess(const string& word, string& guess, map<char, bool>& letters)
{
	bool retVal = false;
	char ch = getInput();
	letters[ch] = false;
	size_t found = word.find(ch);

	//Checks for ch multiple times
	while (found != -1)
	{
		letters[ch] = true;
		guess[found] = ch;
		found = word.find(ch, found + 1);
		retVal = true;
	}

	return retVal;
}

/*
Prints the hangman that depends on how
many guesses the person has gotten
wrong.
*/
void printHangman(int wrong)
{
	cout << "   _________" << endl;
	cout << "   |       |" << endl;
	cout << "   |       ";
	if (wrong > 0)
		cout << "O";
	cout << endl;
	cout << "   |      ";
	if (wrong > 1)
		cout << "/";
	if (wrong > 2)
		cout << "|";
	if (wrong > 3)
		cout << "\\";
	cout << endl;
	cout << "   |      ";
	if (wrong > 4)
		cout << "/";
	if (wrong > 5)
		cout << " \\";
	cout << endl;
	cout << "___|___" << endl;
}

void playHangman()
{
	vector<string> words =
	{
		"APPLE", "BAGPIPES", "BANJO",
		"COMPUTER", "CRYPT", "DANGER",
		"EATEN", "FAVORITE", "FISHING",
		"GAMING", "GREAT", "HAIKU",
		"HAPPY", "IVORY", "JOURNAL",
		"KAYAK", "KLUTZ", "LENGTH",
		"MAILBOX", "MEMORY", "NEARBY",
		"NICKEL", "OXYGEN", "PAJAMAS",
		"PIXEL", "POLKA", "QUEEN",
		"QUICK", "RHYTHM", "ROGUE",
		"SPHINX", "SHOVEL", "TODAY",
		"TWENTY", "UNZIP", "VIOLIN",
		"WESTERN", "WONDER", "XENON",
		"YOGURT", "ZIGZAG", "ZOMBIE"
	};

	string word = "";
	string guess = "";
	int wrong = 0;

	map <char, bool> letters;

	random_device rDev;
	default_random_engine engine(rDev());
	uniform_int_distribution<int> uniform_dist(0, words.size() - 1);

	word = words[uniform_dist(engine)];
	for (size_t i = 0; i < word.size(); ++i)
		guess += "_";

	printHangman(0);
	cout << endl;
	cout << guess << " (" << guess.size() << ") letters" << endl;

	while (guess != word && wrong < 6)
	{
		if (checkGuess(word, guess, letters))
		{
			printHangman(wrong);
			cout << guess << "(" << guess.size() << ") letters" << endl;
			cout << "Wrong letters used: ";
			for (const auto& letter : letters)
			{
				if (!letter.second)
					cout << letter.first;
			}
			cout << endl;
		}
		else
		{
			++wrong;
			printHangman(wrong);
			cout << guess << "(" << guess.size() << ") letters" << endl;
			cout << "Wrong letters used: ";
			for (const auto& letter : letters)
			{
				if (!letter.second)
					cout << letter.first;
			}
			cout << endl;
			if (wrong == 6)
				cout << "Game Over!" << endl;
		}
	}

	cout << "The word was " << word << endl;
}

int main()
{
	playHangman();

	return 0;
}