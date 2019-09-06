/*
Justyn P. Durnford
9/4/2001
Lab 2
*/

/*
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	cout << "Enter an integer: ";
	int a = 0;
	cin >> a;
	cout << "\n" << (a + 1) * (a + 1);
	return 0;
}
*/

/*
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int month = 0;
	int day = 0;
	int year = 0;

	cout << "Enter the month of your birthday (1 - 12): ";
	cin >> month;
	cout << "\nEnter the day of your birthday (1 - 31): ";
	cin >> day;
	cout << "\nEnter the year of your birthday (0 - 2019): ";
	cin >> year;

	cout << "\nYour birthday is " << month << "/" << day << "/" << year;
	return 0;
}
*/

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int month = 0;
	int day = 0;
	int year = 0;

	cout << "Enter the month of your birthday (1 - 12): ";
	cin >> month;
	cout << "\nEnter the day of your birthday (1 - 31): ";
	cin >> day;
	cout << "\nEnter the year of your birthday (0 - 2019): ";
	cin >> year;

	cout << "\nYour birthday is ";
	if (year < 10)
		cout << "000";
	else if (year < 100)
		cout << "00";
	else if (year < 1000)
		cout << "0";
	cout << year << "-";
	if (month < 10)
		cout << "0";
	cout << month << "-";
	if (day < 10)
		cout << "0";
	cout << day;
	return 0;
}