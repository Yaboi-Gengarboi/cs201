/*
money.cpp
Justyn P. Durnford
Created on 9/18/2019
Finished on 9/20/2019
This program asks the user for an amount for each unit of currency
and then prints the units back before adding them up and printing
the total value.
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
This function basically lets me determine whether the currency
is plural or single. I didn't want to write a swicth for every
type :P
*/
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

	double money = 0;
	money += nPennies * 0.01;
	money += nNickels * 0.05;
	money += nDimes * 0.1;
	money += nQuarters * 0.25;
	money += nHalfDollars * 0.5;
	money += nDollars;

	/*
	Pennies are the only currency I need do to something extra
	to for printMoney to work.
	*/
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

	cout << "The total value of your cash is $" << money;

	return 0;
}