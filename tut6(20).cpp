#include<iostream>
#include<iomanip>
using namespace std;

double stockPrice(int, double, double, double, double);

int main()
{
	int noshares;
	double sales_price_share, sales_commission, purchased_price_share, purchased_commission, profit;
	cout << "This Program will show you if you gain Profit or Loss During Stock(s) Purchase and Sale!!" << endl;
	cout << "Enter No. of Shares you Have Purchased: ";
	cin >> noshares;
	while (noshares < 0)
	{
		cout << "No. of Shares Purchased Can't be -ve!!" << endl;
		cout << "Enter No. of Shares you Have Purchased Again: ";
	    cin >> noshares;
	}
	cout << "Enter Purchased Price Per Share: $";
	cin >> purchased_price_share;
	while (purchased_price_share < 0)
	{
		cout << "Purchased Price Per Share Can't Be -ve!!" << endl;
		cout << "Enter Purchased Price Per Share Again: $";
	    cin >> purchased_price_share;
	}
	cout << "Enter Purchased Commission Paid: $";
	cin >> purchased_commission;
	while (purchased_commission < 0)
	{
		cout << "Purchased Commission Paid can't be -ve!!" << endl;
		cout << "Enter Purchased Commission Paid: $";
	    cin >> purchased_commission;
	}
	cout << "Enter Sale Price Per Share: $";
	cin >> sales_price_share;
	cout << "Enter Sale Commission Paid: $";
	cin >> sales_commission;
	while (sales_commission < 0)
	{
		cout << "Sale Commission Paid Can't be -ve!!" << endl;
		cout << "Enter Sale Commission Paid: $";
	    cin >> sales_commission;
	}
	profit = stockPrice(noshares, sales_price_share, sales_commission, purchased_price_share, purchased_commission);
	if (profit > 0)
	{
		cout << "The Sale of Stock Resulted in $" << profit << " Profit!!" << endl;
	}
	else
	{
		cout << "The Sale of Stock Resulted in $" << profit << " Loss!!" << endl;
	}
	return 0;
}

double stockPrice(int n_shares, double s_price, double s_commission, double p_price, double p_commission)
{
	double p;
	p = ((n_shares * s_price) - s_commission) - ((n_shares* p_price) + p_commission);
	return p;
}