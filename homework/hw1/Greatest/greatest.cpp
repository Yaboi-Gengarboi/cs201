/*
greatest.cpp
Justyn P. Durnford
Created on 9/11/2019
Finished on 
Takes integers input by the user until a non-positive is entered.
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
	bool isOrganized = false;
	int el1;
	int el2;

	cout << "This program will take integers you enter and print the greatest one." << endl;
	while (f >= 0)
	{
		cout << "Enter a positive integer to add it to the list." << endl;
		cout << "Enter a non-positive integer to stop and print the largest integer." << endl;
		cin >> f;
		if (f > 0)
			ints.push_back(f);
		else
		{
			if (ints.size() == 0)
				cout << "No positive integers were entered." << endl;
			else if (ints.size() == 1)
				cout << "Greatest integer entered: " << ints.back() << endl;
			while (!isOrganized)
			{
				for (int i = 0; i < ints.size() - 1; i++)
				{
					
				}
			}
		}
	}
	return 0;
}