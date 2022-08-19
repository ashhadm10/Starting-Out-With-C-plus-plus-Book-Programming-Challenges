#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double salary = 0.01, days, total = 0;
	cout << "This Program will Show you how much you would have earned if your Salary get doubled each day startig from a " << endl;
	cout << "single Penny!!" << endl;
	cout << "Enter No. of Days of which you want to calculate your Salary: ";
	cin >> days;
	while (days < 1)
	{
		cout << "Days cannot be less than 1!!" << endl;
		cout << "Enter No. of Days of which you want to calculate your Salary: ";
	    cin >> days;
	}
	cout << "No. of Day(s):            Salary:" << endl;
	cout << "-----------------------------------" << endl;
	for (int i = 1; i <= days; i++)
	{
		salary += salary;
		cout << setprecision(2) << fixed;
		cout << "    " << setw(5) << left << i << "                  $" << setw(5) << left << salary << endl;
		total += salary;
	}
	cout << "Total Amount: $" << total << endl;
	return 0;
}
	