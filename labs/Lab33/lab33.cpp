/*
lab33.cpp
Justyn P. Durnford
Created on 11/20/2019
Last updated on 11/20/2019
Lab 33
*/

#include <iostream>
using std::cout;
using std::endl;

#include "Fighter.hpp"


int main()
{
	Fighter f1("Wrestler", 118);
	Fighter f2("Agent", 75);

	cout << f1.toString() << endl;
	cout << f2.toString() << endl;

	f1.setName("Monster");
	f1.setWeight(104);

	cout << f1.toString() << endl;

	Fighter f3 = f1;

	cout << f3.toString() << endl;

	return 0;
}