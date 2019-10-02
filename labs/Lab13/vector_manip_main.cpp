/**
 * @file     vector_manip_main.cpp
 * @author   Justyn P. Durnford
 * @version  Jan 21, 2019
 * John Quan
 *
 * Declare a vector of strings, initialize it using an initializer
 * list (braces-based initialization), and print it—neatly—using
 * a range-based for-loop.
 */

#include <iostream>
#include <vector>

#include "vector_manip.hpp"

int main()
{

	std::cout << "-------------------Required--------------------------"
		<< std::endl;
	std::vector<std::string> words = { "Welcome.", "I", "have", "been", "expecting", "you." };

	printWords(words);

	std::cout << std::endl;
	std::cout << "-------------------Additional 1----------------------"
		<< std::endl;

	//TODO ADDITIONAL 1 Create this function in vector_manip.cpp
	const char ch = 'x';
	firstLetterChange(words, ch);
	printWords(words);

		//TODO print strings that had their first letter changed in vector

	std::cout << std::endl;
	std::cout << "-------------------Additional 2----------------------"
		<< std::endl;

	//TODO ADDITIONAL 2 Create this function in vector_manip.cpp
	addUserStrings(words, "done");
	printWords(words);

	return 0;
}