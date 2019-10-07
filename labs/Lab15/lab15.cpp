/*
lab15.cpp
Justyn P. Durnford
Created on 10/7/2019
Finished on 10/7/2019
Source file for Lab15
*/

#include "lab15.hpp"

bool stringSquare(string str)
{
	istringstream instream(str);
	double num;
	instream >> num;
	
	//Error checking
	if (!instream)
		return false;
	else
		cout << num << "^2 = " << num * num << endl;
	return true;
}

bool loop(int input)
{
	bool cont = true;
	switch (input)
	{
		//End Loop
		case 0:
			cont = false;
			break;
		case 1:
			cont = true;
			break;
		//Invalid Input
		default:
			cout << "ERROR: Invalid input. Try again." << endl;
			cont = true;
			break;
	}
	return cont;
}

void test()
{
	vector<string> vec = { "69", "69a", "a69", "5.6", "68", "\t11", "68 69", "0xA" };
	for (string str : vec)
		stringSquare(str);
}