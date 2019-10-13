/*
tokenizer.hpp
Justyn P. Durnford
Created on 10/12/2019
Finished on

*/

#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::istringstream;

/*
Reads line of input and ensures
that the line is not empty.
Assigns the line to str if it
is not.
@param string line: String to
write line to.
@return true/false, false if
str is empty.
*/
bool readLine(string& line);

/*

*/
unsigned int stringToTokensWS(vector<string>& tokens, string& line);

/*

*/
void analyzeTokens(const vector<string>& tokens);