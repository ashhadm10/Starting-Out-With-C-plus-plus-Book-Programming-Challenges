#include<iostream>
using namespace std;
int main()
{
	int days, month, year, year1, year2, year3;
	cout << "Enter a Month (1-12): ";
	cin >> month;
	cout << "Enter a year: ";
	cin >> year;
	year1 = year / 400;
	year2 = year / 100;
	year3 = year / 4;
	if (month == 1)
	{
		cout << "31 Days" << endl;
	}
	else if (month == 2)
	{
		if (year == year2 && year == year1)
		{
		    cout << "29 Days" << endl;
	    }
	    else if (year != year2 && year == year3)
	    {
	    	cout << "29 Days" << endl;
		}
		else if (year != year2 && year != year3)
		{
			cout << "28 Days" << endl;
		}
	}
	else if (month == 3)
	{
		cout << "31 Days" << endl;
	}
	else if (month == 4)
	{
		cout << "30 Days" << endl;
	}
	else if (month == 5)
	{
		cout << "31 Days" << endl;
	}
	else if (month == 6)
	{
		cout << "30 Days" << endl;
	}
	else if (month == 7)
	{
		cout << "31 Days" << endl;
	}
	else if (month == 8)
	{
		cout << "31 Days" << endl;
	}
	else if (month == 9)
	{
		cout << "30 Days" << endl;
	}
	else if (month == 10)
	{
		cout << "31 Days" << endl;
	}
	else if (month == 11)
	{
		cout << "30 Days" << endl;
	}
	else if (month == 12)
	{
		cout << "31 Days" << endl;
	}
	return 0;
}