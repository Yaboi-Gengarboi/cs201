/*
tokenizer.hpp
Justyn P. Durnford
Created on 10/12/2019
Finished on 10/13/2019
Header file for Tokenizer
*/

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <ctype.h>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::istringstream;
using std::isalnum;

/*
Reads line of input and ensures
that the line is not empty.
Assigns the line of text to line if it
is not.
@param string line: String to
write line to.
@return: true/false, false if
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
@return: Amount of strings added to
tokens.
*/
unsigned int stringToTokensWS(vector<string>& tokens, string& line);

/*
Determines if str is an integer,
a double, a string or an identifier.
@param string str: String to evaluate.
@return: Type.
*/
void getType(string str);

/*
Takes each string in the vector
and prints its type and the string
itself using getType.
*/
void analyzeTokens(const vector<string>& tokens);