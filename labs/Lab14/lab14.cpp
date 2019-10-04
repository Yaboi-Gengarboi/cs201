//lab14.main.cpp
//Justyn P. Durnford
//Created on 10/4/2019
//Finished on
//Function file for Lab14

#include "lab14.hpp"

void printSubStrs(string str)
{
	int x = str.size() - 1;
	while (x >= 1)
	{
		cout << str.substr(0, x) << endl;
		x--;
	}
}