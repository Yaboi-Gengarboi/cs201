/**
 * @file     userInput.hpp
 * @author   Justyn P. Durnford
 * @version  Feb 12, 2019
 * John Quan
 *
 * Library of string manipulation functions.
 */

#ifndef USERINPUT_HPP_
#define USERINPUT_HPP_

#include <vector>
#include <string>

 /**
  * REQUIRED
  * Add user strings to a string vector until the user types "end".
  * @param words string vector
  */
void getUserStrings(std::vector<std::string>& words);

/**
 * ADDITIONAL
 * Determine whether a string contains a certain character.
 * @param str string to check
 * @param c character to find
 * @return True if the string contains the character.
 */
 bool hasChar(const std::string & str, const char & c);

 /*
 ADDITIONAL
 Prints strings that are at least 5 letters long.
 @param words: string vector
 */
 void printStringsof5(std::vector<std::string>& words);

 /*
 ADDITIONAL
 Prints strings that contain the given letter only.
 @param words: string vector
 @param c: character to seach for
 */
 void printUserStringsX(std::vector<std::string>& words, const char c);

#endif /* USERINPUT_HPP_ */