#include<iostream>
using namespace std;

int main()
{
	double cups_of_sugar = 1.5, percentage_sugar, cups_of_sugar_needed, cups_of_butter = 1.0, percentage_butter, cups_of_butter_needed, cups_of_flour = 2.75, percentage_flour, cups_of_flour_needed;
	double no_of_cookies1 = 48, no_of_cookies2;
	percentage_sugar = 1.5 / 48;
	percentage_butter = 1.0 / 48;
	percentage_flour = 2.75 / 48;
	cout << "How many Cookies you want to make? : ";
	cin >> no_of_cookies2;
	cups_of_sugar_needed = no_of_cookies2 * percentage_sugar;
	cups_of_butter_needed = no_of_cookies2 * percentage_butter;
	cups_of_flour_needed = no_of_cookies2 * percentage_flour;
	cout << "No. of cups of sugar needed for " << no_of_cookies2 << " cookies is/are: " << cups_of_sugar_needed << " cups." << endl;
	cout << "No. of cups of butter needed for " << no_of_cookies2 << " cookies is/are: " << cups_of_butter_needed << " cups." << endl;
	cout << "No. of cups of flour needed for " << no_of_cookies2 << " cookies is/are: " << cups_of_flour_needed << " cups." << endl;
	return 0;
}
	