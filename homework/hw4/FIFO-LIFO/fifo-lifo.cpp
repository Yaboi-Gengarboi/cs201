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

/*
This function prompts the user for input.
I am attempting to keep the prompt in its
own functuion so that there will be no
problems with cin in a loop. We shall see.
@RETURN int: Value that will be passed to
the function XXX to determine which of the
above functions should be used (or to quit).
*/
int inputPrompt()
{
	string line;
	getline(cin, line);
	istringstream instream(line);
	//-2 is the starting value and should change
	int key = -2;

	instream >> key;
	if (!instream || (key < 0 && key > 100)) //100 is a Placeholder
	{
		//Indicates error and will require a repeat
		return -1;
	}
	else
		return key;
}

/*

*/
void decideAction(int key)
{

}

int main()
{
	return 0;
}