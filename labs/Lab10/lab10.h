/*
lab10.h
Justyn P. Durnford
Created on 9/25/2019
Finished on 9/25/2019
Header file for Lab10
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#ifndef FILE_LAB10_H
#define FILE_LAB10_H

/*
Takes an integer num and checks to see if
it is perfectly divisible by 3.
@param num: integer to check if it is
divisible by 3.
@return boolean literal to indicate
if num is divisible by 3.
*/
bool isDiv3(int num);

/*
Prints all multiples of 3 between and
including 1 and 40.
*/
void showMultiples3();

/*
Takes an integer num and checks to see if
it is perfectly divisible by integer a.
@param num: integer to check if it is divisible by a.
@param a: integer to divide by.
@return boolean literal to indicate if num is divisible by a.
*/
bool isDivA(int num, int a);

/*
Prints all multiples of a between and
including 1 and b.
@param a: integer to show multiples of.
@param b: integer to end at.
*/
void showMultiplesAtoB(int a, int b);

#endif