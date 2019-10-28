/*
lab23.cpp
Justyn P. Durnford
Created on 10/28/2019
Last Updated on 10/28/2019
Lab 23
*/

#include <map>
#include <string>
#include <iostream>

using std::map;
using std::string;
using std::cout;
using std::endl;

void printMap(const map<string, int>& mapJ)
{
	cout << "[ ";
	for (const auto& item : mapJ)
	{
		cout << item.first << "::";
		cout << item.second << " ";
	}
	cout << "]" << endl;
}

int main()
{
	map <string, int> map1;

	map1["abc"] = -38;
	map1["def"] = 24;
	map1["ghi"] = 7;
	map1["jkl"] = -59;
	map1["mno"] = 4;
	map1["pqr"] = 10;

	map1.erase(map1.begin());

	printMap(map1);

	return 0;
}