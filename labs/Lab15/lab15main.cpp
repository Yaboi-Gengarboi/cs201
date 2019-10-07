/*
lab15main.cpp
Justyn P. Durnford
Created on 10/7/2019
Finished on 10/7/2019
Main file for LAb15
*/

#include "lab15.hpp"

int main()
{
	//test(); Debug Test
	int cont = 1;
	string str = "";
	while (loop(cont))
	{
		cout << "Enter a number" << endl;
		cin >> str;
		if (!stringSquare(str))
			cout << "ERROR: " << str << " is an invalid input." << endl;
		cin.clear();
		cout << "Enter 1 to continue." << endl;
		cout << "Enter 0 to quit." << endl;
		cin >> cont;
	}
	return 0;
}