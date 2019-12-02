/*
Simulator.hpp
Justyn P. Durnford
Created on 11/30/2019
Last Uppdated on 12/1/2019
Header file for Simulator class
*/

#include "Agent.hpp"
#include "Enviornment.hpp"

#include <string>
using std::string;

class Simulator
{
	bool loop = true;
		public:
			string getInput();
			void askOwner(Agent& pAg, Enviornment& pEnv);
			void run(Agent& pAg, Enviornment& pEnv);
};