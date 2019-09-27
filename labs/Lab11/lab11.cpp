/*
lab11.cpp
Justyn P. Durnford
Created on 9/27/2019
Finished on 9/27/2019
Takes a string input and prints the lowercase letters,
the uppercase letters, and other characters seperately.
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
	int cont = -1;
	string in = "";
	string lowCase = "";
	string upCase = "";
	string other = "";
	while (cont != 0)
	{
		cout << "Enter 1 to test." << endl;
		cout << "Enter 0 to quit." << endl;
		cin >> cont;
		switch (cont)
		{
			case 1:
				cin.ignore();
				cout << "Enter a message: ";
				cin >> in;
				for (int i = 0; i < in.size(); i++)
				{
					if (in[i] >= 'a' && in[i] <= 'z')
						lowCase += in[i];
					else if (in[i] >= 'A' && in[i] <= 'Z')
						upCase += in[i];
					else if (in[i] >= ' ' && in[i] <= '@')
						other += in[i];
					else if (in[i] >= '[' && in[i] <= '`')
						other += in[i];
					else if (in[i] >= '{' && in[i] <= '~')
						other += in[i];
				}
				cout << lowCase << endl;
				cout << upCase << endl;
				cout << other << endl;
				break;
			case 0:
				cin.ignore();
				break;
			default:
				cout << "ERROR: Invalid input. Try again." << endl;
				break;
		}
		in = "";
		lowCase = "";
		upCase = "";
		other = "";
	}
	return 0;
}