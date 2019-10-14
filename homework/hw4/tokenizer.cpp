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

string getType(string str)
{
	istringstream stream(str);
	string type = "[Identifier]";

	for (char c : str)
	{
		if (!isalnum(c) && c != '_')
		{
			type = "[Other]";
		}
	}

	if (str.empty())
		type = "[Whitespace]";

	int num;
	stream >> num;
	if (stream)
		type = "[Integer]";

	double dec;
	stream >> dec;
	if (stream)
		type = "[Double]";

	if (str[0] == '"' && str[str.size() - 1] == '"')
		type = "[String]";

	return type;
}

void analyzeTokens(const vector<string>& tokens)
{
	for (string token : tokens)
	{
		cout << getType(token) << "\t" << token << endl;
	}
}