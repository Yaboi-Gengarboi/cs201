/*
names.cpp
Justyn P. Durnford
Created on 9/18/2019
Finished on 9/21/2019
This program does a variety of stuff with names, mainly adding them
or searching for them.
*/

#include <iostream>
#include <vector>
#include <string>
#include <ctime> 
using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::vector;
using std::string;
using std::rand;
using std::srand;
using std::time;

vector<string> names;
string name = "";

/*
This function adds strings to names.
*/
void inputNames()
{
	int f = -1;
	while (f != 0)
	{
		cout << "Enter a name: ";
		cin >> name;
		names.push_back(name);
		cout << "Enter 1 to keep adding names." << endl;
		cout << "Enter 0 to stop adding names." << endl;
		cin >> f;
		switch (f)
		{
		case 0:
		case 1:
			break;
		default:
			cout << "Invalid input. Try again." << endl;
			break;
		}
	}
}

/*
This function determines if the given string exists in names.
*/
bool doesNameExist(string str)
{
	for (int i = 0; i < names.size(); i++)
	{
		if (names[i].compare(str) == 0)
			return true;
	}
	return false;
}

/*
This function prints each string in names.
*/
void printNames()
{
	for (int i = 0; i < names.size(); i++)
		cout << names[i] << endl;
}

/*
Normally I would give a good description of what this function does...
but I want it to be a suprise.

...Although you can kind of tell what it will do just by looking at it.
*/
void doSomethingSpecial()
{
	string alph = "qwertyuiopasdfghjklzxcvbnm1234567890!@#$%^&*()";
	srand(time(0));
	for (int i = 0; i < names.size(); i++)
	{
		for (int p = 0; p < names[i].size(); p++)
		{
			names[i][p] = alph[rand() % 45];
		}
	}
}

int main()
{
	int f = -1;
	bool didSomethingSpecial = false;
	string find = "";
	string entr = "";
	
	inputNames();
	while (f != 0)
	{
		cout << "Enter 1 to add more names." << endl;
		cout << "Enter 2 to check if a name has already been entered." << endl;
		cout << "Enter 3 to do something special..." << endl;
		cout << "...or just enter 0 to quit." << endl;
		cin >> f;
		switch (f)
		{
		case 0:
			if (didSomethingSpecial == false)
			{
				cout << "YOU DIDN'T EVEN DO SOMETHING SPECIAL." << endl;
				cout << "(Enter anything to continue) ";
				cin >> entr;
				cout << "HOW DARE YOU? I SPENT A FEW MINUTES WORKING ON THAT." << endl;
				cout << "(Enter anything to continue) ";
				cin >> entr;
				cout << "I CAN'T BELIEVE YOU. AFTER ALL I'VE DONE FOR YOU." << endl;
				cout << "(Enter anything to continue) ";
				cin >> entr;
				cout << "...admittedly I haven't actually done much for you, BUT STILL!" << endl;
				cout << "(Enter anything to continue) ";
				cin >> entr;
				cout << "...fine. I give up. You're no fun." << endl;
				cout << "(Enter anything to continue) ";
				cin >> entr;
				cout << "Bye :P" << endl;
			}
			break;
		case 1:
			inputNames();
			break;
		case 2:
			cout << "Enter a name to search for: ";
			cin >> find;
			cout << doesNameExist(find);
			break;
		case 3:
			doSomethingSpecial();
			didSomethingSpecial = true;
			cout << "I'VE CHANGED EVERY LETTER OF EVERY WORD OF YOUR LIST" << endl;
			cout << "INTO A RANDOM CHARACTER! HAHAHAHAHAHAHAHA!" << endl;
			printNames();
			break;
		default:
			cout << "Invalid input. Try again." << endl;
			break;
		}
	}
	return 0;
}