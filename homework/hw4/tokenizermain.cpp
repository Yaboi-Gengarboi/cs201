/*
tokenizermain.cpp
Justyn P. Durnford
Created on 10/12/2019
Finished on

*/

#include "tokenizer.hpp"

int main()
{
	/*
	vector<string> tokens;
	string line;

		cout << "Enter text. Enter \"end\", \"End\" or \"END\" to finish." << endl;
		while (!readLine(line))
		{
			cout << "Enter text. Enter \"end\", \"End\" or \"END\" to finish." << endl;
		}

		stringToTokensWS(tokens, line);

		analyzeTokens(tokens);

	return 0;
	*/

	cout << getType("\"Hey\"") << endl;
	cout << getType("Hey") << endl;
	cout << getType("0.68192") << endl;
	cout << getType("22");
	return 0;
}