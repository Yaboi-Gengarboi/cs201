/*
lab04.cpp
Justyn P. Durnford
Created on 9/11/2019
Finished on 9/11/2019
This program runs through the numbers 1-100.
Part 1 will print "Fizz" for every number divisible by 3,
but the number itself if it is not divisible.
Part 2 will print "Buzz" for every number divisible by 5,
"Fizz" for every number divisible by 3, "Fizz Buzz" for 
every number by both and the number itself if it is not divisible.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void part1()
{
	for (int i = 1; i < 101; i++)
	{
		switch (i % 3)
		{
			case 0:
				cout << "Fizz" << endl;
				break;
			default:
				cout << i << endl;
				break;
		}
	}
}

void part2()
{
	for (int i = 1; i < 101; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
			cout << "Fizz Buzz" << endl;
		else if (i % 3 == 0)
			cout << "Fizz" << endl;
		else if (i % 5 == 0)
			cout << "Buzz" << endl;
		else
			cout << i << endl;
	}
}

int main()
{
	int f = -1;
	while (f != 0)
	{
		cout << "Select part of lab to test" << endl;
		cout << "Enter 1 to test part 1" << endl;
		cout << "Enter 2 to test part 2" << endl;
		cout << "Enter 0 to quit" << endl;
		cin >> f;
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