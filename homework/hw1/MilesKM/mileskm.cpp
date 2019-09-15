/*
mileskm.cpp
Justyn P. Durnford
Created on 9/15/2019
Finished on 9/15/2019
Allows the user to convert from either miles to kilometers or kilometers to miles.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int f = 0;
	double num;
	cout << "Would you like to convert miles or kilometers?" << endl;
	cout << "Enter 1 to convert miles to kilometers." << endl;
	cout << "Enter 2 to convert kilometers to miles." << endl;
	cin >> f;
	switch (f)
	{
	case 1:
		cout << "Enter the amount of miles." << endl;
		cin >> num;
		num *= 1.60934;
		cout << "Kilometers: " << num << endl;
		break;
	case 2:
		cout << "Enter the amount of kilometers." << endl;
		cin >> num;
		num /= 1.60934;
		cout << "Miles: " << num << endl;
		break;
	default:
		cout << "Invalid input. Try again." << endl;
	}
	return 0;
}