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

void printString(string s)
{
	cout << "String: " << s << endl;
	cout << "Length: " << s.size() << endl;
}

int main()
{
	string a = "apple";
	string b = "bee";
	string c = "cactus";
	string d = "dog";
	printString(a);
	printString(b);
	printString(c);
	printString(d);
	return 0;
}