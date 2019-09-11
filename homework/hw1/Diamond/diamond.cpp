/*
diamond.cpp
Justyn P. Durnford
Created on 9/6/2019
Finished on 
This program takes a positive integer input, n, and prints a diamond
with a maximum width of 2 * n - 1.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n = 0;
	cout << "Enter a positive integer: ";
	cin >> n;
	if (n <= 0)
	{
		cout << n << " is not a positive integer. No diamond will be printed.";
	}
	else if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			for (int x = 0; x < n - i; x++)
				cout << " ";
			for (int p = 0; p < i; p++)
				cout << "#";
			cout << endl;
		}
	}
	return 0;
}