/*
lab07.cpp
Justyn P. Durnford
Created on 9/18/2019
Finished on
part1 uses the getInt(); and putInt(); methods added from intio to take 3 integers
from the user and print them in a neat column.
*/

#include <iostream>
#include "intio.hpp"
using std::cout;
using std::endl;

void part1()
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
}

void part2()
{

}

void part3()
{

}

int main()
{
	int f = -1;
	while (f != 0)
	{
		cout << "Enter a part of the lab to test." << endl;
		cout << "Enter 1 to test part 1." << endl;
		cout << "Enter 2 to test part 2." << endl;
		cout << "Enter 3 to test part 3." << endl;
		cout << "Enter 0 to quit." << endl;
		f = getInt();
		switch (f)
		{
		case 1:
			part1();
			break;
		case 0:
			break;
		default:
			cout << "Invalid input. Try again." << endl;
			break;
		}
	}
	return 0;
}