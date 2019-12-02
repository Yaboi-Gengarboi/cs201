/*
Agent.cpp
Justyn P. Durnford
Created on 11/30/2019
Last Uppdated on 12/1/2019
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

	if (current_temp >= desired_temp) //Too hot or perfect
		return false; //Turn heater off

	return true; //Too cold, turn heater on
}

void Agent::setDesiredTemp(int pInt)
{
	desired_temp = pInt;
}

void Agent::act(Enviornment& pEnv)
{
	pEnv.setHeaterState(think(pEnv));
}