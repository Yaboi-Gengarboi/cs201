/*
shopping.cpp
Justyn P. Durnford
Created on 11/9/2019
Last updated on 11/0/2019

*/

#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::map;
using std::string;
using std::vector;

//Record structure
struct Record
{
	double price;
	int units;
};

//Prints given vector
void printVector(const vector<string>& vec)
{
	string out = "";
	for (string item : vec)
	{
		out += item;
		out += ", ";
	}
	out.pop_back();
	out.pop_back();
	cout << out << endl;
}

//Gets input from user
string getInput()
{
	string input = "";
	getline(cin, input);
	return input;
}

int main()
{
	bool cont = true;

	vector<string> items =
	{
		"Apples", "Bananas", "Oranges",
		"Strawberries", "Watermelon"
	};

	while (cont)
	{

	}

	map<string, Record> cart;
}