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
	if (!out.empty())
	{
		out.pop_back();
		out.pop_back();
	}

	cout << out << endl;
}

//Prints items in the cart and total
void printCart(const map<string, Record>& cart)
{
	string out = "";
	double total = 0.0;

	for (const auto& item : cart)
	{
		total += item.second.price;
		out += item.first;
		out += ": ";
		out += item.second.units;
		out += ", ";
	}
	out += "Total : $";
	out += total;

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
	map<string, Record> cart;
	vector<string> items =
	{
		"Apples", "Bananas", "Oranges",
		"Strawberries", "Watermelon"
	};

	while (cont)
	{

	} 

	return 0;
}