/*
lab08.cpp
Justyn P. Durnford
Created on 9/20/2019
Finished on 9/20/2019
*/

#include "intio.hpp"
#include "lab8.hpp"

int doInput()
{
	return getInt();
}

int compute(int n)
{
	if (n <= 0)
		return 0;
	int f = 0;
	for (int i = 1; i < n / 2 + 1; i++)
	{
		if (n % i == 0)
			f++;
	}
	return f;
}