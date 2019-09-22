/*
scores.cpp
Justyn P. Durnford
Created on 9/20/2019
Finished on 9/21/2019
This program allows the user to enter a name and score in 1 line
until they enter the combination NoName 0. After that, they can
choose between adding more pairs, printing the pairs, searching
for a name or searching for a score.
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

/*
This function, as the name suggests, adds names and scores to their
respective vectors. However, it also seperates the name and score
in doing so. This repeats until the user enters NoName 0.
*/
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
		cout << names[i] << " " << scores[i] << endl;
}

int main()
{
	addNamesAndScores();
	int f = -1;
	string find = "";
	bool found = false;
	while (f != 0)
	{
		cout << "Enter 1 to continue to add names and scores." << endl;
		cout << "Enter 2 to print the names and scores." << endl;
		cout << "Enter 3 to search for a name." << endl;
		cout << "Enter 4 to search for a score." << endl;
		cout << "Enter 0 to quit." << endl;
		cin >> f;
		switch (f)
		{
		case 0:
			break;
		case 1:
			cin.ignore();
			addNamesAndScores();
			break;
		case 2:
			for (int i = 0; i < names.size(); i++)
				cout << names[i] << " " << scores[i] << endl;
			break;
		case 3:
			cin.ignore();
			cout << "Enter a name to search for." << endl;
			cin >> find;
			for (int i = 0; i < names.size(); i++)
			{
				if (names[i].compare(find) == 0 && !found)
				{
					found = true;
					cout << names[i] << " has a score of " << scores[i] << endl;
				}
			}
			if (found == false)
				cout << "The name " << find << " was not found." << endl;
			break;
		case 4:
			cin.ignore();
			cout << "Enter a score to search for." << endl;
			cin >> find;
			for (int i = 0; i < scores.size(); i++)
			{
				if (scores[i] == stoi(find) && !found)
				{
					found = true;
					cout << scores[i] << " is the score of " << names[i] << endl;
				}
			}
			if (found == false)
				cout << "The score " << find << " was not found." << endl;
			break;
		default:
			cout << "Invalid input. Try again." << endl;
			break;
		}
	}
	return 0;
}