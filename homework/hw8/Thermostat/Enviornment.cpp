/*
Enviornment.cpp
Justyn P. Durnford
Created on 11/30/2019
Last Uppdated on 12/1/2019
Implementation file for Enviornment class
*/

#include "Enviornment.hpp"

#include <iostream>
using std::cout;
using std::endl;

Enviornment::Enviornment(int pInt)
{
	current_temp = pInt;
}

int Enviornment::getTemp() const
{
	return current_temp;
}

bool Enviornment::isHeaterOn() const
{
	return is_heater_on;
}

void Enviornment::setHeaterState(bool pBool)
{
	is_heater_on = pBool;
}

void Enviornment::iteration()
{
	cout << "Heater is ";
	if (is_heater_on)
	{
		cout << "on." << endl;
		++current_temp;
	}
	else
	{
		cout << "off." << endl;
		--current_temp;
	}
	cout << "Current temperature: " << current_temp << endl;
}