/*
money.cpp
Justyn P. Durnford
Created on 9/18/2019
Finished on

*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void printMoney(int amount, string type)
{
	switch (amount)
	{
	case 0:
		break;
	case 1:
		cout << "You have 1 " << type << endl;
		break;
	default:
		cout << "You have " << amount << " " << type << "s" << endl;
		break;
	}
}

int main()
{
	int nPennies = 0;
	int nNickels = 0;
	int nDimes = 0;
	int nQuarters = 0;
	int nHalfDollars = 0;
	int nDollars = 0;

	cout << "How many pennies do you have? ";
	cin >> nPennies;
	cout << "How many nickels do you have? ";
	cin >> nNickels;
	cout << "How many dimes do you have? ";
	cin >> nDimes;
	cout << "How many quarters do you have? ";
	cin >> nQuarters;
	cout << "How many half dollars do you have? ";
	cin >> nHalfDollars;
	cout << "how many dollars do you have? ";
	cin >> nDollars;

	int money = 0;
	money += nPennies;
	money += nNickels * 5;
	money += nDimes * 10;
	money += nQuarters * 25;
	money += nHalfDollars * 50;
	money += nDollars * 100;

	switch (nPennies)
	{
	case 1:
		printMoney(nPennies, "penny");
		break;
	default:
		printMoney(nPennies, "pennie");
		break;
	}
	printMoney(nNickels, "nickel");
	printMoney(nDimes, "dime");
	printMoney(nQuarters, "quarter");
	printMoney(nHalfDollars, "half dollar");
	printMoney(nDollars, "dollar");

	return 0;
}