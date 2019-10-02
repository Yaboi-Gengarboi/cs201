//vector_manip.cpp
//Justyn P. Durnford
//Created on 10/2/2019
//Finished on 10/2/2019
//

#include <vector>
#include <string>
#include <iostream>
#include "vector_manip.hpp"

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

void printWords(vector<string>& words)
{
	for (auto word: words)
		cout << word << " ";
}

void firstLetterChange(vector<string>& words, const char& c)
{

	for (auto& word : words)
	{
		if (word.empty())
		{
			continue;
		}
		word[0] = c;
	}
}

void addUserStrings(std::vector<std::string>& words,
	const std::string sentinel)
{
	string input = " ";
	while (input.compare(sentinel) != 0)
	{
		cout << "Enter a string to add to the vector." << endl;
		cin >> input;
		if (input.compare(sentinel) != 0)
			words.push_back(input);
	}
}