/*
lab08.cpp
Justyn P. Durnford
Created on 9/20/2019
Finished on

*/

#include "intio.hpp"
#include "lab8.hpp"
#include <iostream>
using std::cout;
using std::endl;

int doInput()
{
	int num = getInt();
	return num;
}

int compute(int n)
{
	n *= 3;
	n -= 2;
	n *= 6;
	n += 5;
	n /= 4;
	n *= n;
	return n;
}