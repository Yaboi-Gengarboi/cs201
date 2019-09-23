#pragma once
#include <string>
using std::string;

#ifndef FILE_MODIFYSTRING_H_INCLUDED
#define FILE_MODIFYSTRING_H_INCLUDED

/*
Append n amount of random characters to a string
@param referencedString: string to append to
@param n:amount of characters to append
@return: New length of referencedString
*/
int modifyString(string& referencedString, int n);

/*
Overwrite referencedInt amount of random characters to a string
@param str: string to append to
@param referencedInt: amount of characters to overwrite
@return: New string with referencedInt amount of characters overwritten
*/
string modifyString(int& referencedInt, string str);

#endif