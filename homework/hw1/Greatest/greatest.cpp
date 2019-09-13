/*
greatest.cpp
Justyn P. Durnford
Created on 9/11/2019
Finished on 
Takes integers input by the user until a negative is entered.
It will then print the largest of the integers.
*/

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<int> ints;
	int f = 0;
	cout << "This program will take integers you enter and print the greatest one." << endl;
	while (f >= 0)
	{
		cout << "Enter an integer to add it to the list." << endl;
		cout << "Enter a negative integer to stop and print the largest integer." << endl;
		cin >> f;
		if (f >= 0)
			ints.push_back(f);

	}
	return 0;
}