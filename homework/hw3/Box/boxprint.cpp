/*
boxprint.cpp
Justyn P. Durnford
Created on 9/24/2019
Finished on 9/

*/

#include "box.hpp"

//See box.hpp
void printBox(int layers, string message)
{
	int length = layers * 2 + message.size() + 2;
	for (int i = 0; i < layers; i++)
	{
		for (int p = 0; p < length; p++)
			cout << "*";
		cout << endl;
	}

	for (int i = 0; i < layers; i++)
		cout << "*";
	cout << " " << message << " ";
	for (int i = 0; i < layers; i++)
		cout << "*";
	cout << endl;

	for (int i = 0; i < layers; i++)
	{
		for (int p = 0; p < length; p++)
			cout << "*";
		cout << endl;
	}
	cout << endl;
}

//See box.hpp
void prompt()
{
	string message = "";
	int layers = 0;
	cout << "Enter a message for the box: ";
	cin >> message;
	cout << "Enter an amount of layers for the box: ";
	cin >> layers;
	printBox(layers, message);
}