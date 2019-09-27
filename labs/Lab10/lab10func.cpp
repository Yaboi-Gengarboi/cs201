/*
lab10.h
Justyn P. Durnford
Created on 9/25/2019
Finished on 9/25/2019
Function file for Lab10
*/

#include "lab10.h"

//See lab10.h for documentation
bool isDiv3(int num)
{
	if (num % 3 == 0)
		return true;
	return false;
}

//See lab10.h for documentation
void showMultiples3()
{
	for (int i = 1; i <= 40; i++)
	{
		if (isDiv3(i))
			cout << i << " ";
	}
}

//See lab10.h for documentation
bool isDivA(int num, int a)
{
	if (num % a == 0)
		return true;
	return false;
}

//See lab10.h for documentation
void showMultiplesAtoB(int a, int b)
{
	for (int i = 1; i <= b; i++)
	{
		if (isDivA(i, a))
			cout << i << " ";
	}
}