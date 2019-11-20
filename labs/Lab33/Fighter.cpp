/*
Fighter.cpp
Justyn P. Durnford
Modified version of Fighter.cpp from
Project MX repository for use in CS201
Lab 33
Last updated on 11/20/2019
*/

#include <string>
using std::string;
using std::to_string;

#include "Fighter.hpp"

Fighter::Fighter(string name, unsigned int weight)
{
	_name = name;
	_weight = weight;
}

string Fighter::getName()
{
	return _name;
}

unsigned int Fighter::getWeight()
{
	return _weight;
}

void Fighter::setName(const std::string& name)
{
	_name = name;
}

void Fighter::setWeight(const unsigned int& weight)
{
	_weight = weight;
}

string Fighter::toString()
{
	string out = "";
	out += "Fighter: " + _name;
	out += ", Weight Value: " + to_string(_weight);
	return out;
}