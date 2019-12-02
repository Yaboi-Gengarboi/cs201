/*
Simulator.cpp
Justyn P. Durnford
Created on 11/30/2019
Last Uppdated on 12/1/2019
Header file for Simulator class
*/

#include "Simulator.hpp"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::getline;

#include <string>
using std::string;
using std::stoi;

#include <stdexcept>

string Simulator::getInput()
{
	string input = "";
	getline(cin, input);
	return input;
}

void Simulator::askOwner(Agent& pAg, Enviornment& pEnv)
{
	bool loop2 = true;
	string input = "";
	int intInput = 0;

	while (loop2)
	{
		cout << "Enter a desired temperature, or enter \"QUIT\" to quit." << endl;
		input = getInput();
		
		try
		{
			intInput = stoi(input);
			cout << "Desired temperature: " << intInput << endl;
			pAg.setDesiredTemp(intInput);
			loop2 = false;
		}
		catch (const std::invalid_argument & ia)
		{
			if (input == "QUIT")
			{
				cout << "Quiting." << endl;
				loop = false;
				loop2 = false;
			}
			else
			{
				cout << "Invalid input. Try again." << endl;
				loop2 = true;
			}
		}
	}
}

void Simulator::run(Agent& pAg, Enviornment& pEnv)
{
	while (loop)
	{
		for (int i = 0; i < 10; ++i)
		{
			pEnv.iteration();
			pAg.act(pEnv);
		}
		askOwner(pAg, pEnv);
	}
}