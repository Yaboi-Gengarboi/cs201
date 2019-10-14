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
Assigns the line of text to line if it
is not.
@param string line: String to
write line to.
@return true/false, false if
line is empty.
*/
bool readLine(string& line);

/*
Seperates line into individual strings
and puts them into vector tokens.
@param vector<string> tokens: vector
to put strings in.
@param string line: Line to segment
into individual strings.
@return Amount of strings added to
tokens.
*/
unsigned int stringToTokensWS(vector<string>& tokens, string& line);

/*

*/
string getType(string str);

/*

*/
void analyzeTokens(const vector<string>& tokens);