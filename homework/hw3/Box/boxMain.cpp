/*
boxer.cpp
Justyn P. Durnford
Created on 9/24/2019
Finished on 9/

*/

#include "box.hpp"

int main()
{
	string message = "";
	int layers = 0;
	cout << "Enter a message for the box: ";
	cin >> message;
	cout << endl << "Enter an amount of layers for the box: ";
	cin >> layers;
	cout << endl;
	printBox(layers, message);
	return 0;
}