#include <iostream>
#include <string>
#include "modifyString.h"
using std::cout;
using std::endl;
using std::string;

int main()
{
	string a = "ALFA";
	string b = "BRAVO";
	string c = "CHARLIE";

	cout << "String a: " << a << endl;
	cout << "New length: " << modifyString(a, 3) << endl;
	cout << "New string: " << a << endl;
	cout << "String b: " << b << endl;
	cout << "New length: " << modifyString(b, 4) << endl;
	cout << "New string: " << b << endl;
	cout << "String c: " << c << endl;
	cout << "New length: " << modifyString(c, 2) << endl;
	cout << "New string: " << c << endl;

	int d = 3;
	int e = 2;
	int f = 5;

	cout << "Characters to overwrite: " << d << endl;
	cout << "String to overwrite: DELTA" << endl;
	cout << "New string: " << modifyString(d, "DELTA") << endl;
	cout << "New amount of characters to overwrite: " << d << endl;
	cout << "Characters to overwrite: " << e << endl;
	cout << "String to overwrite: ECHO" << endl;
	cout << "New string: " << modifyString(e, "ECHO") << endl;
	cout << "New amount of characters to overwrite: " << e << endl;
	cout << "Characters to overwrite: " << f << endl;
	cout << "String to overwrite: FOXTROT" << endl;
	cout << "New string: " << modifyString(f, "FOXTROT") << endl;
	cout << "New amount of characters to overwrite: " << f << endl;

	return 0;
}