/*
diamond.cpp
Justyn P. Durnford
Created on 9/6/2019
Finished on 9/11/2019
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
	int i = 0;
	cout << "Enter a positive integer: ";
	cin >> n;
	if (n <= 0)
	{
		cout << n << " is not a positive integer. No diamond will be printed.";
	}
	else if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (int o = 0; o < n - i - 1; o++)
				cout << " ";
			for (int p = 0; p < 1 + 2 * i; p++)
				cout << "#";
			cout << endl;
		}
		for (int k = i - 2; k >= 0; k--)
		{
			for (int o = 0; o < n - k - 1; o++)
				cout << " ";
			for (int p = 0; p < 1 + 2 * k; p++)
				cout << "#";
			cout << endl;
		}
	}
	return 0;
}