/*
boxMain.cpp
Justyn P. Durnford
Created on 9/24/2019
Finished on 9/28/2019
Main file, calls boxprint.cpp, contains loop
to print boxes multiple times.
*/

#include "box.hpp"

int main()
{
	int f = -1;
	prompt();
	while (f != 0)
	{
		cout << "Would you like to continue?" << endl;
		cout << "Enter 1 to continue." << endl;
		cout << "Enter 0 to quit." << endl;
		cin >> f;
		switch (f)
		{
		case 0:
			break;
		case 1:
			cin.ignore();
			prompt();
			break;
		default:
			cout << "Invalid input. Try again." << endl;
		}
	}
	return 0;
}