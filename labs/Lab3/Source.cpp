/*
Source.cpp
Lab3
Justyn P. Durnford
Created on 9/6/2019
This lab is used for practice with while loops.
Part 1 will print the numbers 1 - 20.
Part 2 will print a 60 by 10 box with #.
Part 3 will print a 60 by 10 box alternating between # and @.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void part1()
{
	int i = 1;
	while (i < 21)
	{
		cout << i << " ";
		i++;
	}
}

void part2()
{
	int c = 0;
	int r = 0;
	while (r < 10)
	{
		while (c < 60)
		{
			cout << "#";
			c++;
		}
		c = 0;
		cout << endl;
		r++;
	}
}

void part3()
{
	int c = 0;
	int r = 0;
	int i = 0;
	while (r < 10)
	{
		while (c < 60)
		{
			if (i % 2 == 0 && r % 2 == 0)
				cout << "#";
			else if (i % 2 == 1 && r % 2 == 0)
				cout << "@";
			else if (i % 2 == 0 && r % 2 == 1)
				cout << "@";
			else if (i % 2 == 1 && r % 2 == 1)
				cout << "#";
			c++;
			i++;
		}
		c = 0;
		cout << endl;
		r++;
	}
}

int main()
{
	int f = -1;
	while (f != 0)
	{
		cout << "Select part of lab to test\n";
		cout << "Enter 1 to test part 1\n";
		cout << "Enter 2 to test part 2\n";
		cout << "Enter 3 to test part 3\n";
		cout << "Enter 0 to quit\n";
		cin >> f;
		if (f == 1)
			part1();
		else if (f == 2)
			part2();
		else if (f == 3)
			part3();
		cout << endl;
	}
	return 0;
}