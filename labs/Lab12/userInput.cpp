/*
userInput.cpp
Justyn P. Durnford
Created on 9/30/2019
Finished on
Defines function getUserStrings(vector<string>& words).
*/

#include "userInput.hpp"
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cin;
using std::getline;
using std::cout;

void getUserStrings(vector<string>& words)
{
	string word;
	while (word.compare("end") != 0)
	{
		cin >> word;
		//DEBUG cout << word << endl;
		if (word.compare("end") != 0)
			words.push_back(word);
	}
}

void printStringsof5(vector<string>& words)
{
	for (unsigned long i = 0; i < words.size(); ++i)
	{
		if (words[i].size() >= 5)
			cout << words[i] << ' ';
	}
}

bool hasChar(const string& str, const char& c)
{
	if (str.find(c) != -1)
		return true;
	return false;
}

void printUserStringsX(vector<string>& words, const char c)
{
	for (unsigned long i = 0; i < words.size(); i++)
	{
		if (hasChar(words[i], c))
			cout << words[i] << ' ';
	}
}