#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double cA, cB, cC, income_A, income_B, income_C, total_income;
	const double price_A = 15;
	const double price_B = 12;
	const double price_C = 9;
	cout << "Enter the No. of Sold Tickets for Class A: ";
	cin >> cA;
	cout << "Enter the No. of Sold Tickets for Class B: ";
	cin >> cB;
	cout << "Enter the No. of Sold Tickets for Class C: ";
	cin >> cC;
	income_A = cA * price_A;
	income_B = cB * price_B;
	income_C = cC * price_C;
	total_income = income_A + income_B + income_C;
	cout << setprecision(2) << fixed << showpoint;
	cout << "Income from Solding the tickets of seat of Class A: $" << income_A << endl;
	cout << "Income from Solding the tickets of seat of Class B: $" << income_B << endl;
	cout << "Income from Solding the tickets of seat of Class C: $" << income_C << endl;
	cout << "Total Income: $" << total_income << endl;
	return 0;
}
	
	
	