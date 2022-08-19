#include<iostream>
using namespace std;
int main()
{
	int day, month, year;
	cout << "Enter Day: ";
	cin >> day;
	cout << "Enter Month(in Numeric Form): ";
	cin >> month;
	cout << "Enter Year(last two numbers): ";
	cin >> year;
	if (year == month * day)
	{
		cout << "Above Date is Magic!!!" << endl;
	}
	else
	{
		cout << "Above Date is NOT Magic!!!" << endl;
	}
	return 0;
}