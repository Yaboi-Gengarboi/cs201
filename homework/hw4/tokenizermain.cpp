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