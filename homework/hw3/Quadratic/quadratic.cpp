/*
quadratic.cpp
Justyn P. Durnford
Created on 9/27/2019
Finished on 

*/

#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;
using std::pow;
using std::sqrt;

/*
Calculates the solution to a polynomial
via the quadratic equation:
x = (-b +- sqrt(b^2 - 4 * a * c)) / (2 * a)
*/
void quadratic(int a, int b, int c)
{
	int d = pow(b, 2) - 4 * a * c;
	if (d < 0)
	{
		int f = -1;
		while (f != 0 || f != 1)
		{
			cout << "WARNING: This polynomial has non-real answers." << endl;
			cout << "Enter 1 to continue using imaginary numbers." << endl;
			cout << "Enter 0 to stop." << endl;
			cin >> f;
			switch (f)
			{
				case 0:
					break;
				case 1:

					break;
				default:
					cout << "ERROR: Invalid input. Try again." << endl;
			}
		}
	}
	else
	{
		int f = -1;
		while (f != 0)
		{
			cout << "Enter 1 to print the answers in decimal form." << endl;
			cout << "";
		}
	}

	double x1 = 0.0;
	double x2 = 0.0;

}