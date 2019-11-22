// Image3.hpp
// Interface for Image3 class
// Original Author: Jonathan Metzgar
// CS 201 course
#ifndef IMAGE3_HPP
#define IMAGE3_CPP

#include <iostream>
#include <vector>
#include "Color3.hpp"

class Image3
{
public:
	Image3(unsigned width, unsigned height);
	
	const Color3& getPixel(unsigned x, unsigned y) const;
	void setPixel(unsigned x, unsigned y, const Color3& color);

	bool savePPM(const std::string& path) const;
	bool loadPPM(const std::string& path);

	void printASCII(std::ostream& ostr) const;

	std::vector<Color3> pixels;
	unsigned w;
	unsigned h;
	Color3 borderColor;
};

std::ostream& operator<<(std::ostream& ostr, const Image3& image);
std::istream& operator>>(std::istream& istr, Image3& image);

#endif
