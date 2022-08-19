#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double presentValue(double, double, double);

int main()
{
	double presentvalue, futurevalue, interestrate, noyears;
	cout << "This Program will Calculate How Much Interest would you have in Certain Period of Time on a Certain Value!!" << endl;
	cout << "Enter the Amount you want in your Account: $";
	cin >> futurevalue;
	cout << "Enter Annual Interest Rate: %";
	cin >> interestrate;
	cout << "Enter No. of Years you want to Keep Money for in the Savings Account: ";
	cin >> noyears;
	presentvalue = presentValue(futurevalue, interestrate, noyears);
	cout << setprecision(2) << fixed << showpoint;
	cout << "You Need to Deposit $" << presentvalue << " for the Above Recquirements!!" << endl;
	return 0;
}

double presentValue(double f_value, double i_rate, double n_years)
{
	double p_value, i_rate1;
	i_rate1 = 1 + (i_rate / 100);
	p_value = (f_value / pow(i_rate1, n_years));
	return p_value;
}