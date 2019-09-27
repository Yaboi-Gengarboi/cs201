/*
lab10main.cpp
Justyn P. Durnford
Created on 9/25/2019
Finished on 9/25/2019
Main file for Lab10
*/

#include "lab10.h"

int main()
{
	int a, b;
	showMultiples3();
	cout << endl;
	cout << "Enter a number to print the multiples of: ";
	cin >> a;
	cout << "Enter the last number to check: ";
	cin >> b;
	showMultiplesAtoB(a, b);
	return 0;
}