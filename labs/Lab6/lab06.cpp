/*
lab06.cpp
Justyn P. Durnford
Created on 9/16/2019
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

void part1()
{
	string a = "apple";
	string b = "bee";
	string c = "cactus";
	string d = "done";
	printString1(a);
	printString1(b);
	printString1(c);
	printString1(d);
}

void part2()
{
	string a = "apple";
	string b = "bee";
	string c = "cactus";
	string d = "done";
	printString2(a);
	printString2(b);
	printString2(c);
	printString2(d);
}

int main()
{
	cout << "Enter part of lab to test." << endl;
	cout << "1: Part 1" << endl;
	cout << "2: Part 2" << endl;
	cout << "3: Part 3" << endl;
	return 0;
}