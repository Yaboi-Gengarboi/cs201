/*
collatz.cpp
Justyn P. Durnford
Created on 9/27/2019
Finished on 9/27/2019
Allows the user to enter numbers into the Collatz
conjecture multiple times.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*
This finction takes an integer input k and
modifies it according to the Collatz conjecture,
that is:
If k is even, c(k) = 3 * k + 1
If k is odd, c(k) = k / 2
*/
void collatz(int k)
{
	cout << k << " ";
	while (k > 1)
	{
		
		switch (k % 2)
		{
			case 0:
				k /= 2;
				break;
			default:
				k *= 3;
				k += 1;
				break;
		}
		cout << k << " ";
	}
	cout << endl;
}

int main()
{
	int k = 1;
	int f = -1;
	while (f != 0)
	{
		cout << "Enter 1 to test the Collatz conjecture." << endl;
		cout << "Enter 0 to quit." << endl;
		cin >> f;
		switch (f)
		{
			case 0:
				break;
			case 1:
				cout << "Enter a positive non-zero integer to put in the Collatz conjecture: ";
				cin >> k;
				if (k < 1)
					cout << "ERROR: Invalid input. Try again." << endl;
				else
					collatz(k);
				break;
			default:
				cout << "ERROR: Invalid input. Try again." << endl;
		}
	}
	return 0;
}