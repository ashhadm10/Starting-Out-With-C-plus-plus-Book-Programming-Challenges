#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	string month, year;
	double total_amount, state_salestax, country_salestax, total_salestax, product_sales;
	cout << "Enter Year: ";
	cin >> year;
	cout << "Enter Month: ";
	cin >> month;
	cout << "Enter Total Amount collected at Cash Register: $";
	cin >> total_amount;
	state_salestax = total_amount * 0.04;
	country_salestax = total_amount * 0.02;
	total_salestax = state_salestax + country_salestax;
	product_sales = total_amount / 1.06;
	cout << "--------------------*REPORT*--------------------" << endl;
	cout << "                  Year: " << year << endl;
	cout << "                  Month: " << month << endl;
	cout << "------------------------------------------------" << endl;
	cout << setprecision(2) << fixed << showpoint;
	cout << "Total Collected:                    $ " << setw(8) << right << total_amount << endl;
	cout << "Sales:                              $ " << setw(8) << right << product_sales << endl;
	cout << "Country Sales Tax:                  $ " << setw(8) << right << country_salestax << endl;
	cout << "State Sales Tax:                    $ " << setw(8) << right << state_salestax << endl;
	cout << "Total Sales Tax:                    $ " << setw(8) << right << total_salestax << endl;
	return 0;
}
	