/*
Enviornment.cpp
Justyn P. Durnford
Created on 11/30/2019
Last Uppdated on 11/30/2019
Implementation file for Enviornment class
*/

#include "Enviornment.hpp"

Enviornment::Enviornment(int pInt, bool pBool)
{
	current_temp = pInt;
	is_heater_on = pBool;
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

}