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

bool isContainerEmpty(const vector<string>& container)
{
	if ()
	{

	}
	return false;
}

void printContainer(const vector<string>& container)
{

}

//First In First Out

void fifoPush(vector<string>& container, const string& item)
{
	container.push_back(item);
	cout << item << " added." << endl;
}

string fifoPop(vector<string>& container)
{
	string str = " ";
	if (isContainerEmpty(container))
	{
		cout << "The container is empty." << endl;
	}
	else
	{
		str = container[0];
		cout << str << " removed." << endl;
		container.erase(container.begin());
	}
	return str;
}

//Last In First Out

void lifoPush(vector<string>& container, const string& item)
{
	container.push_back(item);
	cout << "Item added." << endl;
}

string lifoPop(vector<string>& container)
{
	string str = " ";



	return str;
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
			case 0: //Quit
				break;
			case 1:
				item = getItem();
				fifoPush(container, item);
				break;
			case 2:
				fifoPop(container);
				break;
			default:
				cout << "Invalid input. Try again." << endl;
				break;
		}
	}
	return true;
}

bool testLifo()
{
	return true;
}

int main()
{
	if (testFifo())
		cout << "Test Successful." << endl;

	return 0;
}