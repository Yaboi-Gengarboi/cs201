//cypher.cpp
//Justyn P. Durnford
//UAF CS 201
//Created on 12/4/2019
//Last Updated on 12/5/2019

#include <string>
using std::string;
using std::getline;
using std::stoi;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <stdexcept>
using std::invalid_argument;

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

int getInt()
{
	int i = 0;
	string str = "";
	bool cont = true;

	while (cont)
	{
		cout << "Enter an integer." << endl;
		getline(cin, str);
		try
		{
			if (str.empty())
				throw invalid_argument("");
			else
			{
				i = stoi(str);
				cont = false;
			}
		}
		catch (invalid_argument& ia)
		{
			cont = true;
		}
	}

	return i;
}

string getString()
{
	string str = "";
	bool cont = true;

	while (cont)
	{
		cout << "Enter a message." << endl;
		getline(cin, str);
		if (!str.empty())
			cont = false;
	}

	return str;
}

int main()
{
	cout << getInt() << endl;
}