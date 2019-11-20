/*
Fighter.hpp
Justyn P. Durnford
Modified version of Fighter.hpp from
Project MX repository for use in CS201
Lab 33
Last updated on 11/20/2019
*/

#ifndef FIGHTER_HPP
#define FIGHTER_HPP

#include <string>

class Fighter
{
	std::string _name;
	unsigned int _weight;
	public:
		Fighter(std::string name, unsigned int weight);
		std::string getName();
		unsigned int getWeight();
		void setName(const std::string& name);
		void setWeight(const unsigned int& weight);
		std::string toString();
};

#endif