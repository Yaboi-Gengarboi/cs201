/*
lab07.cpp
Justyn P. Durnford
Created on 9/18/2019
Finished on
*/

#include <iostream>
#include "intio.hpp"
using std::cout;
using std::cin;
using std::endl;

int main()
{

	cout << "Enter an integer: ";
	int num1 = getInt();
	cout << "Enter another integer: ";
	int num2 = getInt();
	cout << "Enter another integer: ";
	int num3 = getInt();

	putInt(num1, 10);
	cout << endl;
	putInt(num2, 10);
	cout << endl;
	putInt(num3, 10);
	cout << endl;

	return 0;
}