/*
names.cpp
Justyn P. Durnford
Created on 9/18/2019
Finished on

*/

#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> names;
	for (int i = 0; i < 10; i++)
	{
		string name = "";
		cout << "Enter a name: ";
		getline(cin, name);
		names.push_back(name);
	}
	return 0;
}