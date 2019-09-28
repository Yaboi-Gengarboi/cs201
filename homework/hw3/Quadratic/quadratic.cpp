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
Uses i = sqrt(-1) for imaginary solutions.
*/
void quadratic(double a, double b, double c)
{
	double x1 = 0.0;
	double x2 = 0.0;
	double d = pow(b, 2) - 4 * a * c;
	if (d < 0)
	{
		int f = -1;
		int g = -1;
		while (f != 0 && f != 1)
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
					d *= -1;
					while (g != 1 && g != 2)
					{
						cout << "Enter 1 to print the answers in decimal form." << endl;
						cout << "Enter 2 to print the answers in fraction form." << endl;
						cin >> g;
						switch (g)
						{
						case 1:
							cout << -b / (2 * a) << " - " << sqrt(d) / (2 * a) << "i , ";
							cout << -b / (2 * a) << " + " << sqrt(d) / (2 * a) << "i" << endl;
							break;
						case 2:
							cout << "(" << -b << " - " << "i * sqrt(" << d << ")) / (" << 2 * a << ") , ";
							cout << "(" << -b << " + " << "i * sqrt(" << d << ")) / (" << 2 * a << ")" << endl;
							break;
						default:
							cout << "ERROR: Invalid input. Try again." << endl;
							break;
						}
					}
					break;
				default:
					cout << "ERROR: Invalid input. Try again." << endl;
			}
		}
	}
	else
	{
		int f = -1;
		while (f != 1 && f != 2)
		{
			cout << "Enter 1 to print the answers in decimal form." << endl;
			cout << "Enter 2 to print the answers in fraction form." << endl;
			cin >> f;
			switch (f)
			{
				case 1:
					x1 = (-b - sqrt(d)) / (2 * a);
					x2 = (-b + sqrt(d)) / (2 * a);
					cout << x1 << " , " << x2 << endl;
					break;
				case 2:
					cout << "(" << -b << " - " << "sqrt(" << d << ")) / (" << 2 * a << ") , ";
					cout << "(" << -b << " + " << "sqrt(" << d << ")) / (" << 2 * a << ") , " << endl;
					break;
				default:
					cout << "ERROR: Invalid input. Try again." << endl;
					break;
			}
		}
	}
}

int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	int f = 1;
	while (f != 0)
	{
		f = -1;
		cout << "Enter a value for a: ";
		cin >> a;
		cout << "Enter a value for b: ";
		cin >> b;
		cout << "Enter a value for c: ";
		cin >> c;
		quadratic(a, b, c);

		while (f < 0)
		{
			cout << "Enter 1 to continue." << endl;
			cout << "Enter 0 to quit." << endl;
			cin >> f;
			if (f < 0)
				cout << "ERROR: Invalid input. Try again." << endl;
		}
	}
	return 0;
}