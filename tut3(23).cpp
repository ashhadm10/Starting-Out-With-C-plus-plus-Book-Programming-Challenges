#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const double PURCHASED_STOCK = 1000;
	const double SOLD_STOCK = 1000;
	const double STOCK_PURCHASED_PRICE = 45.50;
	const double SOLD_STOCK_PRICE = 56.90;
	double stockbroker_purchased_commission = (PURCHASED_STOCK * STOCK_PURCHASED_PRICE) * 0.02;
	double stockbroker_sold_commission = (SOLD_STOCK * SOLD_STOCK_PRICE) * 0.02;
	double money = ((SOLD_STOCK * SOLD_STOCK_PRICE) - (PURCHASED_STOCK * STOCK_PURCHASED_PRICE) - stockbroker_purchased_commission - stockbroker_sold_commission);
	cout << "Amount Joe Paid For Stock:                                   $ " << setw(6) << right << PURCHASED_STOCK * STOCK_PURCHASED_PRICE << endl;
	cout << "Amount Joe Paid his Broker when he BOUGHT Stock:             $ " << setw(6) << right << stockbroker_purchased_commission << endl;
	cout << "Amount Joe Sold for his Stock:                               $ " << setw(6) << right << SOLD_STOCK * SOLD_STOCK_PRICE << endl;
	cout << "Amount of Commission Joe Paid To Broker when he SOLD Stock:  $ " << setw(6) << right << stockbroker_sold_commission << endl;
	cout << "Profit:                                                      $ " << setw(6) << right << money << endl;
	return 0;
}