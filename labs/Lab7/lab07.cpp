/*
lab07.cpp
Justyn P. Durnford
Created on 9/18/2019
Finished on
part1 uses the getInt(); and putInt(); methods added from intio to take 3 integers
from the user and print them in a neat column.
part2 uses the getInt(); and putInt(); methods added from intio to take integers
from the user and print them in a neat column before printing their sum.
part3 uses the getInt(); and putInt(); methods added from intio to take integers
from the user and print them in a neat column before printing the smallest integer.
*/

#include <iostream>
#include <vector>
#include "intio.hpp"
using std::cout;
using std::endl;
using std::vector;

void part1()
{
	cout << "Enter an integer: ";
	int num1 = getInt();
	cout << "Enter another integer: ";
	int num2 = getInt();
	cout << "Enter another integer: ";
	int num3 = getInt();

	putInt(num1, 10);
	cout << endl;
	putInt(num2, 10);
	cout << endl;
	putInt(num3, 10);
	cout << endl;
}

void part2()
{
	vector<int> numbers;
	cout << "This code will take the sum of all the integers you enter." << endl;
	int f = 1;
	while (f != 0)
	{
		cout << "Enter a non-zero integer to add it to the list." << endl;
		cout << "Enter 0 to stop and add the numbers. ";
		f = getInt();
		switch (f)
		{
		case 0:
			switch (numbers.size())
			{
			case 0:
				cout << "No integers were intered." << endl;
				break;
			case 1:
				cout << "Sum: " << numbers[0];
				break;
			default:
				int sum = 0;
				for (int i = 0; i < numbers.size(); i++)
				{
					putInt(numbers[i], 10);
					cout << endl;
					sum += numbers[i];
				}
				cout << "Sum: " << sum << endl;
				break;
			}
		default:
			numbers.push_back(f);
			break;
		}
	}
	cout << endl;
}

void part3()
{

}

int main()
{
	int f = -1;
	while (f != 0)
	{
		cout << "Enter a part of the lab to test." << endl;
		cout << "Enter 1 to test part 1." << endl;
		cout << "Enter 2 to test part 2." << endl;
		cout << "Enter 3 to test part 3." << endl;
		cout << "Enter 0 to quit." << endl;
		f = getInt();
		switch (f)
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
			break;
		}
	}
	return 0;
}