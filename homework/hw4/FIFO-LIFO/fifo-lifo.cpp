/*
fifo-lifo.cpp
Justyn P. Durnford
Created on 10/15/2019
Finished on

*/

#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cin;
using std::getline;
using std::cout;
using std::endl;

//First In First Out

void fifoPush(vector<string>& container, const string& item)
{

}

string fifoPop(vector<string>& container)
{
	string str = " ";



	return str;
}

//Last In First Out

void lifoPush(vector<string>& container, const string& item)
{

}

string lifoPop(vector<string>& container)
{
	string str = " ";



	return str;
}

bool isContainerEmpty(const vector<string>& container)
{
	return false;
}

void printContainer(const vector<string>& container)
{
	
}

/*
This function prompts the user for input.
I am attempting to keep the prompt in its
own functuion so that there will be no
problems with cin in a loop. We shall see.
@RETURN string line: string that will be
passed to the vector.
*/
string getInput()
{
	cout << "Enter an item" << endl;
	string line;
	getline(cin, line);
	return line;
}

int main()
{
	

	return 0;
}