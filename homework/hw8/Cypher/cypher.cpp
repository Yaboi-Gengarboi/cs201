//cypher.cpp
//Justyn P. Durnford
//UAF CS 201
//Created on 12/4/2019
//Last Updated on 12/5/2019

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

void encript(string& str, int shift)
{
	string low_alphabet = "abcdefghijklmnopqrstuvwxyz";
	string up_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int findChar;

	for (int i = 0; i < str.size(); ++i)
	{
		findChar = low_alphabet.find(str[i]);
		if (findChar == -1)
		{
			findChar = findChar = up_alphabet.find(str[i]);
			if (findChar != -1)
			{
				int a = findChar + shift;
				if (a >= 26)
				{
					while (a >= 26)
						a -= 26;
				}
				else if (a < 0)
				{
					while (a < 0)
						a += 26;
				}
					str[i] = up_alphabet[a];
			}
		}
		else
		{
			int a = findChar + shift;
			if (a >= 26)
			{
				while (a >= 26)
					a -= 26;
			}
			else if (a < 0)
			{
				while (a < 0)
					a += 26;
			}
			str[i] = low_alphabet[a];
		}
	}
}

int main()
{
	string test = "abcdefghijklmnopqrstuvwxyz";
	cout << test << " 210" << endl;
	encript(test, 210);
	cout << test << endl;

	cout << test << " -210" << endl;
	encript(test, -210);
	cout << test << endl;
}