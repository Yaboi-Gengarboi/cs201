/*
lab5.cpp
Justyn P. Durnford
Created on 9/13/2019


*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*
Takes an integer input by the user and either adds 5, multiplies it by 3, or squares it.
*/
void part1()
{
	int b = 0;
	int c = -1;
	while (c != 0)
	{
		cout << "Enter an integer: ";
		cin >> b;
		cout << "What would you like to do with the number " << b << "?" << endl;
		cout << "Enter 1 to add 5 to it." << endl;
		cout << "Enter 2 to multiply it by 3." << endl;
		cout << "Enter 3 to square it." << endl;
		cout << "Enter 0 to quit." << endl;
		cin >> c;
		switch (c)
		{
		case 1:
			b += 5;
			cout << b << endl;
			break;
		case 2:
			b *= 3;
			cout << b << endl;
			break;
		case 3:
			b *= b;
			cout << b << endl;
			break;
		case 0:
			break;
		default:
			cout << "Invalid input. Try again." << endl;
			break;
		}
	}
}

/*
Same as part1 but uses if/else if/else instead of a switch.
*/
void part2()
{
	int d = 0;
	int e = -1;
	while (e != 0)
	{
		cout << "Enter an integer: ";
		cin >> d;
		cout << "What would you like to do with the number " << d << "?" << endl;
		cout << "Enter 1 to add 5 to it." << endl;
		cout << "Enter 2 to multiply it by 3." << endl;
		cout << "Enter 3 to square it." << endl;
		cout << "Enter 0 to quit." << endl;
		cin >> e;
		if (e == 1)
		{
			d += 5;
			cout << d << endl;
		}
		else if (e == 2)
		{
			d *= 3;
			cout << d << endl;
		}
		else if (e == 3)
		{
			d *= d;
			cout << d << endl;
		}
		else if (e == 0)
			e = 0;
		else
			cout << "Invalid input. Try again." << endl;
	}
}

int main()
{
	int a = -1;
	while (a != 0)
	{
		cout << "Enter 1 to test part 1." << endl;
		cout << "Enter 2 to test part 2." << endl;
		cout << "Enter 0 to quit." << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			part1();
			break;
		case 2:
			part2();
			break;
		case 0:
			break;
		default:
			cout << "Invalid input. Try again." << endl;
		}
	}
}