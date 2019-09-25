/*
boxer.cpp
Justyn P. Durnford
Created on 9/24/2019
Finished on 9/

*/

#include "box.hpp"

int main()
{
	int f = -1;
	prompt();
	while (f != 0)
	{
		cout << endl << "Would you like to continue?" << endl;
		cout << "Enter 1 to continue." << endl;
		cout << "Enter 0 to quit." << endl;
		cin >> f;
		switch (f)
		{
		case 0:
			break;
		case 1:
			prompt();
			break;
		default:
			cout << "Invalid input. Try again." << endl;
		}
	}
	return 0;
}