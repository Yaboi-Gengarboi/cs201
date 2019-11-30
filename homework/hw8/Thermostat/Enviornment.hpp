/*	
Enviornment.hpp
Justyn P. Durnford
Created on 11/30/2019
Last Uppdated on 11/30/2019
Header file for Enviornment class 
*/

#ifndef ENVIORNMENT_HPP
#define ENVIORNMENT_HPP

class Enviornment
{
	int current_temp;
	bool is_heater_on;
	public:
		/* 
		Default constructor for Enviornment class.
		PARAMETER int p1: integer to set current_temp to.
		PARAMETER bool p2: boolean to set is_heater_on to. 
		*/
		Enviornment(int p1, bool p2);

		//Returns current_temp.
		int getTemp();

		//Returns is_heater_on.
		bool isHeaterOn();

		/*
		Sets is_heater_on to true or false.
		PARAMETER bool p1: boolean to set is_heater_on to.
		*/
		void setHeaterState(bool p1);

		/*
		
		*/
		void iteration();
};

#endif //#ifndef ENVIORNMENT_HPP