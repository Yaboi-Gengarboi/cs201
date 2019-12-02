/*
thermostat_main.cpp
Justyn P. Durnford
Created on 11/30/2019
Last Uppdated on 12/1/2019
Main file for Thermostat project
*/

#include "Enviornment.hpp"
#include "Agent.hpp"
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

string getInput()
{
	string input = "";
	getline(cin, input);
	return input;
}


int main()
{
	bool loop = true;
	string input = "";
	int intInput = 0;

	while (loop)
	{
		cout << "Enter a temmperature." << endl;
		input = getInput();

		try
		{
			intInput = stoi(input);
			cout << "Current temperature: " << intInput << endl;
			loop = false;
		}
		catch (const std::invalid_argument & ia)
		{
			cout << "Invalid input. Try again." << endl;
			loop = true;
		}
	}
	Enviornment env{ intInput };
	
	loop = true;
	while (loop)
	{
		cout << "Enter a desired temperature." << endl;
		input = getInput();

		try
		{
			intInput = stoi(input);
			cout << "Desired temperature: " << intInput << endl;
			loop = false;
		}
		catch (const std::invalid_argument & ia)
		{
			cout << "Invalid input. Try again." << endl;
			loop = true;
		}
	}
	Agent ag{ intInput };

	Simulator sim{};
	sim.run(ag, env);
}