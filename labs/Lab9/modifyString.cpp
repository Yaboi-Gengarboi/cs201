#include "modifyString.h"
#include <ctime> 
using std::rand;
using std::srand;
using std::time;

string alph = "qwertyuiopasdfghjklzxcvbnm1234567890!@#$%^&*()";

int modifyString(string& referencedString, int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
		referencedString += alph[rand() % 45];
	return referencedString.size();
}

string modifyString(int& referencedInt, string str)
{
	srand(time(0));
	for (int i = str.size() - 1; i >= str.size() - referencedInt; i--)
		str[i] = alph[rand() % 45];
	referencedInt = 0;
	return str;
}