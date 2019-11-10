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
#include <stdexcept> 

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::stoi;
using std::to_string;
using std::map;
using std::string;
using std::vector;

vector<string> items =
{
	"Apple", "Banana", "Orange",
	"Strawberry", "Watermelon"
};

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
	string test = "";

	string out = "";
	int amount = 0;
	double price = 0.0;
	double total = 0.0;

	for (const auto& item : cart)
	{
		total += item.second.price * item.second.units;
		out += item.first;
		out += ": ";
		out += to_string(item.second.units);
		out += ", ";
	}
	out += "Total : $";
	out += to_string(total);

	cout << out << endl;
}

//Gets input from user
string getInput()
{
	string input = "";
	getline(cin, input);
	return input;
}

//Decides what to do from user input. Returns false to quit.
bool decideAction(map<string, Record>& cart)
{
	string in = getInput();
	int amount = 0;

	if (in == "Quit") return false;
	if (in == "Print Cart")
	{
		printCart(cart);
		return true;
	}
	if (in == "Print Items")
	{
		printVector(items);
		return true;
	}
	for (const string& item : items)
	{
		if (in == item)
		{
			cout << "How many?" << endl;
			in = getInput();

			try
			{
				amount = stoi(in, nullptr);
				cart[item].units += amount;
				cout << amount << " " << item << "(s) added." << endl;
				return true;
			}
			catch (const std::invalid_argument & ia)
			{
				cout << "Invalid input. Try again." << endl;
				return true;
			}
		}
	}

	cout << "Invalid input. Try again." << endl;

	return true;
}

int main()
{
	bool cont = true;
	map<string, Record> cart;

	while (cont)
	{
		cout << "Enter an item to add it to the cart." << endl;
		cout << "Enter \"Print Items\" to see the available items." << endl;
		cout << "Enter \"Print Cart\" to see your cart." << endl;
		cout << "Enter \"Quit\" to quit." << endl;
		cont = decideAction(cart);
		cout << endl;
	} 

	return 0;
}