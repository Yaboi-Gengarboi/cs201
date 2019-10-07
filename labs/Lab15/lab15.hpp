/*
lab15.hpp
Justyn P. Durnford
Created on 10/7/2019
Finished on 10/7/2019
Header file for Lab15
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;
using std::istringstream;
using std::vector;

#ifndef LAB15_HPP
#define LAB15_HPP

/*
Takes a string and prints the square of
the number inside it. Prints an error
message if no number was found. Returns
true/false depending on if there was an
error.
@param str: String to evaluate
@return: true/false
*/
bool stringSquare(string str);

/*
Loop function for user input in main.
Takes an int from the user that will tell
the loop in main to keep going or to stop.
Returns false and continues the loop in
the case of an invalid input.
@param input: int to decide whether to
stop or continue
@return: true/false
*/
bool loop(int input);

/*
Test function for stringSquare.
*/
void test();

#endif