/*
student.hpp
Justyn P. Durnford
Created on 11/25/2019
Last Updated on 11/25/2019
Header file for Student class
*/

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
using std::string;

class Student
{
	string _name;
	int _id;

	public:
		Student();
		Student(string name);
		Student(int id);
		Student(string name, int id);
		void printInfo() const;
};

#endif // #ifndef STUDENT_HPP