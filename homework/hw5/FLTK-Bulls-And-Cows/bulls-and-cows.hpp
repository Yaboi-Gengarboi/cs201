/*
bulls-and-cows.hpp
Justyn P. Durnford
Created on 11/1/2019
Last updated on 11/1/2019
Header file for FLTK-Bulls-And-Cows
*/

#ifndef BULLS_AND_COWS_HPP
#define BULLS_AND_COWS_HPP

#include <vector>

/*
Takes the vector and entry and compares the individual
digits of the entry to the corrisponding vector spots.
@PARAM vector<int> nums: Vector to compare to.
@PARAM vector<int> Vector with 4 digits to compare with.
@RETURN int common: 0-4 based on how many digits match.
*/
int compareDigits(const std::vector<int>& nums, const std::vector<int>& guess);

/*
Takes the vectors from main.cpp and initializes them
with a random number generator for guess.
@PARAM vector<int>& nums: Vector to initialize with
random integers.
@PARAM vector<int>& guess: Vector to initialize with
zeros.
*/
void initVectors(std::vector<int>& nums, std::vector<int>& guess);

#endif