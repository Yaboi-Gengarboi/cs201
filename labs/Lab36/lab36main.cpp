/*
lab36main.cpp
Justyn P. Durnford
CS 201
Created on 12/2/2019
Last Updated on 12/2/2019
*/

#include <iostream>
using std::cout;
using std::endl;

void evenOrOdd(int pInt)
{
	if ((pInt & 1) == 0)
		cout << pInt << " is an even number." << endl;
	else
		cout << pInt << " is an odd number." << endl;
}

int main()
{
	evenOrOdd(0);
	evenOrOdd(3);
	evenOrOdd(8);
	evenOrOdd(10);
	evenOrOdd(15);

	cout << "A double takes up " << sizeof(double);
	cout << " bytes on this system." << endl;
	cout << "That's " << sizeof(double) * 8 << " bits." << endl;

	return 0;
}