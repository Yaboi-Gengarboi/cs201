/*
Agent.hpp
Justyn P. Durnford
Created on 11/30/2019
Last Uppdated on 11/30/2019
Header file for Agent class
*/

#ifndef AGENT_HPP
#define AGENT_HPP

#include "Enviornment.hpp"

class Agent
{
	int desired_temp;
	public:
		/*
		Default constructor for Agent class.
		PARAMATER int pInt: integer to set desired_temp to.
		*/
		Agent(int pInt);

		//Returns the passed Enviornment's current_temp.
		int perceive(const Enviornment& pEnv);

		//Determines whether to turn the heater on or not.
		bool think();

		//Turns the enviornment's heater on or off.
		void act(Enviornment& pEnv);
};

#endif //#ifndef AGENT_HPP