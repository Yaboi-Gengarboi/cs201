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

/*
This function takes a vector<string> and string as parameters and
adds the string to the vector.
*/
void inputName(vector<string> vec, string str)
{
	vec.push_back(str);
}

/*
This function takes a vector<string> and string as parameters and
determines if the string exists in the vector.
*/
bool doesNameExist(vector<string> vec, string str)
{
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].compare(str) == 0)
			return true;
	}
	return false;
}

/*
This function takes a vector<string> as a parameter and prints
each string in the vector.
*/
void printNames(vector<string> vec)
{
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << endl;
}

int main()
{
	vector<string> names;
	for (int i = 0; i < 10; i++)
	{
		string name = "";
		cout << "Enter a name: ";
		getline(cin, name);
		inputName(names, name);
	}
	return 0;
}