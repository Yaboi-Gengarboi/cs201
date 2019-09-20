/*
money.cpp
Justyn P. Durnford
Created on 9/18/2019
Finished on

*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

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

	cout << "You have " << nPennies << " pennies." << endl;
	cout << "You have " << nNickels << " nickeles." << endl;
	cout << "You have " << nDimes << " dimes." << endl;
	cout << "You have " << nQuarters << " quarters." << endl;
	cout << "You have " << nHalfDollars << " half dollars." << endl;
	cout << "You have " << nDollars << " dollars." << endl;
	cout << "The value of all your money is " << money << " cents.";

	return 0;
}