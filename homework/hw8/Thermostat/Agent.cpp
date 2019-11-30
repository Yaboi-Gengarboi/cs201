/*
Agent.cpp
Justyn P. Durnford
Created on 11/30/2019
Last Uppdated on 11/30/2019
Implementation file for Agent class
*/

#include "Agent.hpp"

Agent::Agent(int pInt)
{
	desired_temp = pInt;
}

int Agent::perceive(const Enviornment& pEnv)
{
	return pEnv.getTemp();
}

bool Agent::think(const Enviornment& pEnv)
{
	int current_temp = perceive(pEnv);
	if (pEnv.isHeaterOn())
	{
		if (current_temp >= desired_temp)
			return false; //Turn heater off
		else
			return true; //Keep heater on
	}
	else
	{
		if (current_temp < desired_temp)
			return true; //Turn heater on
		else
			return false; //Keep heater off
	}
	return true; //This should never be read
}

void Agent::act(Enviornment& pEnv)
{
	pEnv.setHeaterState(think(pEnv));
}