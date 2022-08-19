#include <iostream>
using namespace std;

int main()
{
	int stocks = 750, price_per_stock = 35;
	double price_stocks, commission, total;
	price_stocks = stocks * price_per_stock;
	commission = price_stocks * 0.02;
	total = price_stocks + commission;
	cout << "Amount Paid for the Stock Alone (without Commission): $" << price_stocks << endl;
	cout << "Amount of Commission: $" << commission << endl;
	cout << "Total Amount Paid (for the Stock plus Commission): $" << total << endl;
	return 0;
}