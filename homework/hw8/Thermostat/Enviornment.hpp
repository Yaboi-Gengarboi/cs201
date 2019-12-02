/*	
Enviornment.hpp
Justyn P. Durnford
Created on 11/30/2019
Last Uppdated on 12/1/2019
Header file for Enviornment class 
*/

#ifndef ENVIORNMENT_HPP
#define ENVIORNMENT_HPP

class Enviornment
{
	int current_temp;
	bool is_heater_on = true;
	public:
		/* 
		Default constructor for Enviornment class.
		PARAMETER int pint: integer to set current_temp to.
		PARAMETER bool pbool: boolean to set is_heater_on to. 
		*/
		Enviornment(int pInt);

		//Returns current_temp.
		int getTemp() const;

		//Returns is_heater_on.
		bool isHeaterOn() const;

		/*
		Sets is_heater_on to true or false.
		PARAMETER bool pbool: boolean to set is_heater_on to.
		*/
		void setHeaterState(bool pBool);

		/*
		Increases or decreases current_temp depending on whether
		or not the heater is on.
		*/
		void iteration();
};

#endif //#ifndef ENVIORNMENT_HPP