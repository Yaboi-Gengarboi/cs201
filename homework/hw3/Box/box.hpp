/*
box.hpp
Justyn P. Durnford
Created on 9/24/2019
Finished on 9/24/2019
Header file for Box hw project
*/

#ifndef FILE_BOX_HPP
#define FILE_BOX_HPP

#include <string>
#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

/*
Prints box with specified amount of layers of (*)
surrounding specified message.
@param layers: amount of (*) to surround message.
@param message: message to put in box.
*/
void printBox(int layers, string message);

/*
Prompts the user to enter a message and amount
of layers for the box.
*/
void prompt();

#endif