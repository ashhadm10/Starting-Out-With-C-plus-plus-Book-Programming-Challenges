#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double futureValue(double, double, double);

int main()
{
	double presentvalue, futurevalue, interestrate, nomonths;
	cout << "This Program will Calculate Amount would you have in Certain Period of Time on a Certain Value!!" << endl;
	cout << "Enter the Amount you have in your Account: $";
	cin >> presentvalue;
	cout << "Enter Monthly Interest Rate: %";
	cin >> interestrate;
	cout << "Enter No. of Months you want to Keep Money for in the Savings Account: ";
	cin >> nomonths;
	futurevalue = futureValue(presentvalue, interestrate, nomonths);
	cout << setprecision(2) << fixed << showpoint;
	cout << "You will have $" << futurevalue << " if you put $" << presentvalue << " in Savings Account with " << interestrate;
	cout << "% for " << nomonths << " months." << endl;
	return 0;
}

double futureValue(double p_value, double i_rate, double n_months)
{
	double f_value, i_rate1;
	i_rate1 = 1 + (i_rate / 100);
	f_value = (p_value * pow(i_rate1, n_months));
	return f_value;
}