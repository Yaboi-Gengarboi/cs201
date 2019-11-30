/*
student.cpp
Justyn P. Durnford
Created on 11/25/2019
Last Updated on 11/25/2019
Implementation file for Student class
*/

#include "student.hpp"

#include <iostream>
using std::cout;
using std::endl;

Student::Student()
{
	_name = "DEFAULT";
	_id = -1;
}

Student::Student(string name)
{
	_name = name;
	_id = -1;
}

Student::Student(int id)
{
	_name = "DEFAULT";
	_id = id;
}

Student::Student(string name, int id)
{
	_name = name;
	_id = id;
}

void Student::printInfo() const
{
	if (_name == "DEFAULT")
		cout << "No Name assigned." << endl;
	else
		cout << "Name : " << _name << endl;

	if (_id == -1)
		cout << "No ID assigned." << endl;
	else
		cout << "ID : " << _id << endl;
}