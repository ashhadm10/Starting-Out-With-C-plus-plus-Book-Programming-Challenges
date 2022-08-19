#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double principal, interest_rate, interest, amount, amount1, amount2, no_interestcompounded2;
	int no_interestcompounded1;
	cout << "Enter Principal: $";
	cin >> principal;
	cout << "Enter Rate of Interest: ";
	cin >> interest_rate;
	cout << "Enter No. of times Interest is Compounded: ";
	cin >> no_interestcompounded1;
	no_interestcompounded2 = static_cast<double>(no_interestcompounded1);
	interest = principal * (interest_rate / 100);
	cout << setprecision(2) << fixed << showpoint;
	amount1 = 1 + (interest_rate / no_interestcompounded2);
	amount2 = pow(amount1, no_interestcompounded2);
	amount = principal * amount2;
	cout << "Interest Rate:                    " << setw(4) << right << interest_rate << "%" << endl;
	cout << "Times Compounded:                 " << setw(4) << right << no_interestcompounded1 << endl;
	cout << "Principal:                  $  " << setw(4) << right << principal << endl; 
	cout << "Interest:                   $    " << setw(4) << right << interest << endl;
	cout << "Amount in Savings:          $ " << setw(4) << right << amount << endl;
	return 0;
}