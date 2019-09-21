/*
scores.cpp
Justyn P. Durnford
Created on 9/20/2019
Finished on

*/

#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::vector;
using std::string;
using std::stoi;

vector<string> names;
vector<int> scores;
string line = "";
int space = 0;
string name = "";
int score = 0;

void addNamesAndScores()
{
	bool cont = true;
	while (cont)
	{
		cout << "Enter a name and score in the format: NAME SCORE" << endl;
		cout << "Enter NoName 0 to stop. " << endl;
		getline(cin, line);
		if (line.compare("NoName 0") == 0)
			cont = false;
		else
		{
			space = line.find(' ');
			name = line.substr(0, space);
			score = stoi(line.substr(space));
			for (int i = 0; i < names.size(); i++)
			{
				if (names[i].compare(name) == 0)
				{
					cout << "ERROR: " << name << " has already been entered." << endl;
					cont = false;
				}
			}
			if (cont)
			{
				names.push_back(name);
				scores.push_back(score);
			}
		}
	}
	for (int i = 0; i < names.size(); i++)
		cout << names[i] + " " << scores[i] << endl;
}

int main()
{
	addNamesAndScores();
	return 0;
}