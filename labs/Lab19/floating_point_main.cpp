/**
 * @file     floating_point_main.cpp
 * @author   Justyn P. Durnford
 * @version  Jan 28, 2019
 * John Quan
 *
 * Useful trigonometric functions.
 */

#include <iostream>
#include <vector>
 // using sin, cos
#include <cmath>

#include "floating_point.hpp"

int main()
{
	// TODO Turn on "error on warnings" so this doesn't*****************
	// compile.  Make it compile by using std::size_t
	// You can comment this for loop out after that.

	//for (std::size_t i = 2; i < v.size(); i++)
	//{
		//v[i]++;
		//std::cout << v[i] << std::endl;
	//}

	std::cout << std::endl << std::endl;
	// *****************************************************************

	// TODO Declare and initialize a vector of radians by calling*******
	//        degreesToRadians(360).
	//      Print degree,cos(radian),sin(radian) as a comma separated
	//        values (CSV) list.

	std::vector<double> degrees = degreesToRadians(360);
	std::cout << "DEGREE, COS, SIN" << std::endl;

	for (size_t i = 0; i < degrees.size(); i++)
	{
		std::cout << i << ", ";
		std::cout << std::cos(degrees[i]) << ", ";
		std::cout << std::sin(degrees[i]) << std::endl;
	}

	// *****************************************************************

	return 0;
}