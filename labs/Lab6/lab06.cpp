/*
lab06.cpp
Justyn P. Durnford
Created on 9/16/2019
Finished on 9/16/2019
printString1 prints the string and its size.
printString2 prints the string and hashtags equal to the string's size.
printString3 prints the string and backwards.
*/

#include <vector>
#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void printString1(string s)
{
	cout << "String: " << s << endl;
	cout << "Length: " << s.size() << endl;
}

void printString2(string s)
{
	cout << "String: " << s << endl;
	cout << "New String: ";
	for (int i = 0; i < s.size(); i++)
		cout << "#";
	cout << endl;
}

void printString3(string s)
{
	cout << "String: " << s << endl;
	cout << "New String: ";
	for (int i = s.size() - 1; i >= 0; i--)
		cout << s[i];
	cout << endl;
}

int main()
{
	string a = "apple";
	string b = "bee";
	string c = "cactus";
	string d = "done";
	int f = -1;
	while (f != 0)
	{
		cout << "Enter part of lab to test." << endl;
		cout << "1: Part 1" << endl;
		cout << "2: Part 2" << endl;
		cout << "3: Part 3" << endl;
		cout << "0: Quit" << endl;
		cin >> f;
		switch (f)
		{
		case 1:
			printString1(a);
			printString1(b);
			printString1(c);
			printString1(d);
			break;
		case 2:
			printString2(a);
			printString2(b);
			printString2(c);
			printString2(d);
			break;
		case 3:
			printString3(a);
			printString3(b);
			printString3(c);
			printString3(d);
			break;
		case 0:
			break;
		default:
			cout << "Invalid input. Try again." << endl;
		}
	}
	return 0;
}