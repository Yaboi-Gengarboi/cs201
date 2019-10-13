/*
tokenizer.hpp
Justyn P. Durnford
Created on 10/12/2019
Finished on

*/

#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::getline;
using std::vector;

/*

*/
bool readLine(string& str);

/*

*/
unsigned int stringToTokensWS(vector<string>& tokens);

/*

*/
void analyzeTokens(const vector<string>& tokens);