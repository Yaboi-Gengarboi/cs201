/*
lab20.cpp
Justyn P. Durnford
Created on 10/21/2019
Finished on 10/21/2019
Lab 20
*/

#include <cmath>
#include <iostream>
#include <iomanip>

using std::cos;
using std::cout;
using std::endl;
using std::setprecision;
using std::scientific;
using std::pow;

int main()
{
	const double PI = 3.14159265358979323846;
	const double E = 2.71828182845904523536;

	cout << setprecision(8);

	int x = 0;
	while (x <= 180)
	{
		if (x < 10)
			cout << "  ";
		else if (x < 100)
			cout << " ";
		
		cout << x;
		cout << " " << cos(x * PI / 180) << endl;
		x += 5;
	}

	x = 0;
	cout << scientific << endl;
	
	while (x <= 180)
	{
		if (x < 10)
			cout << "  ";
		else if (x < 100)
			cout << " ";

		cout << x;
		cout << " " << pow(E, x / 10) << endl;
		x += 5;
	}

	return 0;
}