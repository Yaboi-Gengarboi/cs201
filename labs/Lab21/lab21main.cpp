/*
lab21main.cpp
Justyn P. Durnford
Created on 10/23/2019
Finished on 10/23/2019
Main file for Lab 20
*/

#include "truncstruct.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
	string str = "";
	int num = 0;
	
	cout << "Enter a string" << endl;
	getline(cin, str);

	StringInfo si = trunc8(str);
	cout << si.str << endl;
	cout << si.len << endl;

	str = "";

	cout << "Enter a string" << endl;
	getline(cin, str);
	cout << "Enter a number" << endl;
	cin >> num;

	StringInfo si2 = { str, num };
	StringInfo si3 = trunc(si2);
	cout << si3.str << endl;
	cout << si3.len << endl;

	return 0;
}