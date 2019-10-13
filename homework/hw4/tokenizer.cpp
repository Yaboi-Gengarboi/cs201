/*
tokenizer.cpp
Justyn P. Durnford
Created on 10/12/2019
Finished on

*/

#include "tokenizer.hpp"

bool readLine(string& str)
{
	getline(cin, str);
	if (str.empty())
		return false;
	return true;
}