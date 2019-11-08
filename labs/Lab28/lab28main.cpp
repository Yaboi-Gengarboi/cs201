/*
lab28main.cpp
Justyn P. Durnford
Created on 11/8/2019
Last updated on 11/8/2019
Lab 28
*/

#include <fstream>
#include <iostream>
#include <iomanip>

using std::ofstream;
using std::cout;
using std::endl;
using std::setw;

int main()
{
	ofstream fout("Lab28Text.txt");

	for (int i = 0; i < 10; ++i)
	{
		for (int p = 1; p <= 10; ++p)
			fout << setw(4) << p + i * 10;
		fout << endl;
	}

	return 0;
}