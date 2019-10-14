/*
tokenizermain.cpp
Justyn P. Durnford
Created on 10/12/2019
Finished on 10/13/2019
Main file for Tokenizer
*/

#include "tokenizer.hpp"

int main()
{
	vector<string> tokens;
	string line = "";

	while (line.compare("end") != 0
		   && line.compare("End") != 0
		   && line.compare("END") != 0)
	{
		cout << "Enter text. Enter \"end\", \"End\" or \"END\" to finish." << endl;
		if (readLine(line))
			stringToTokensWS(tokens, line);

	}
	analyzeTokens(tokens);

	return 0;
}