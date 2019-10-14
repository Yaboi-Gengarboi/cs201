/*
tokenizermain.cpp
Justyn P. Durnford
Created on 10/12/2019
Finished on

*/

#include "tokenizer.hpp"

int main()
{
	vector<string> tokens;
	string line;
	/*

		cout << "Enter text. Enter \"end\", \"End\" or \"END\" to finish." << endl;
		while (!readLine(line))
		{
			cout << "Enter text. Enter \"end\", \"End\" or \"END\" to finish." << endl;
		}

		stringToTokensWS(tokens, line);

		analyzeTokens(tokens);

	return 0;
	*/

	tokens.push_back("\"Hey\"");
	tokens.push_back("Hey");
	tokens.push_back("0.68192");
	tokens.push_back("22");
	tokens.push_back("\"\"");
	analyzeTokens(tokens);

	return 0;
}