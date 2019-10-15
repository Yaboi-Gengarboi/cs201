/*
fifo-lifo.cpp
Justyn P. Durnford
Created on 10/15/2019
Finished on

*/

#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using std::string;
using std::vector;
using std::cin;
using std::getline;
using std::cout;
using std::endl;
using std::istringstream;

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

bool testFifo()
{
	int key = 1;
	vector<string> container;
	string item;
	
	while (key != 0)
	{
		key = getKey();
		switch (key)
		{
			case -1:
				cout << "Invalid input. Try again." << endl;
				break;
			case 0: //Quit
				break;
			case 1:

		}

	}

	return true;
}

bool testLifo()
{

}

/*
This function prompts the user for an item.
I am attempting to keep the prompt in its
own functuion so that there will be no
problems with cin in a loop. We shall see.
@RETURN string str: string that will be
passed to the vector.
*/
string getItem()
{
	cout << "Enter an item" << endl;
	string str;
	getline(cin, str);
	return str;
}

/*
This function prompts the user for an
integer that will decide which function
will be used.
@RETURN int: The entered key if it is
valid, or -1 if it is not.
*/
int getKey()
{
	cout << "Enter 1 to add an item to the container" << endl;
	cout << "Enter 2 to take an item from the container" << endl;
	cout << "Enter 0 to quit" << endl;

	int key;
	string str;
	getline(cin, str);
	istringstream instream(str);
	instream >> key;

	if (!instream || key < 0 || key > 2)
		return -1; //Indicates error
	return key;
}

int main()
{
	

	return 0;
}