/*
tokenizer.cpp
Justyn P. Durnford
Created on 10/12/2019
Finished on

*/

#include "tokenizer.hpp"

bool readLine(string& line)
{
	getline(cin, line);
	if (line.empty())
		return false;
	return true;
}

unsigned int stringToTokensWS(vector<string>& tokens, string& line)
{
	istringstream stream(line);
	string str = " ";
	
	int index = 0;
	if (line.compare("end") != 0
		&& line.compare("End") != 0
		&& line.compare("END") != 0)
	{
		while (index < line.size())
		{
			stream >> str;
			index += str.size() + 1;
			tokens.push_back(str);
			tokens.push_back("");
		}
	}
	
	return tokens.size() - 1;
}

void getType(string str)
{
	istringstream stream(str);

	if (str.empty())
	{
		cout << "[Whitespace] \t";
		return;
	}

	double dec;
	stream >> dec;
	if (stream)
	{
		cout << "[Number] \t";
		return;
	}

	if (str[0] == '"' && str[str.size() - 1] == '"')
	{
		cout << "[String] \t";
		return;
	}

	for (char c : str)
	{
		if (!isalnum(c) && c != '_')
		{
			cout << "[Other] \t";
			return;
		}
	}

	cout << "[Identifier] \t";
}

void analyzeTokens(const vector<string>& tokens)
{
	for (string token : tokens)
	{
		getType(token);
		cout << token << endl;
	}
}