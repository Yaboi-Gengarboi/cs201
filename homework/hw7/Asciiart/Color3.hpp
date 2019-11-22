// Color3.hpp
// Interface for Color3 class
// Original Author: Jonathan Metzgar
// CS 201 course
#ifndef COLOR3_HPP
#define COLOR3_HPP

#include <iostream>

class Color3
{
public:
	Color3();
	Color3(int R, int G, int B);

	// Returns 0.2126R + 0.7152G + 0.0722B
	int weightedSum() const;

	// Returns an ASCII char representing darkness
	// e.g. ' ' = WHITE and 'W' = BLACK
	char asciiValue() const;

	unsigned char r;
	unsigned char g;
	unsigned char b;
};

std::ostream& operator<<(std::ostream& ostr, const Color3& color);
std::istream& operator>>(std::istream& istr, Color3& color);

#endif
