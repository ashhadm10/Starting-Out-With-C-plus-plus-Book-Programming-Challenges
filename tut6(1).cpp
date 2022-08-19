#include<iostream>
#include<iomanip>
using namespace std;

double calculateRetail(double , double);

int main()
{
    double wholesale_cost, markup_percentage, retail_price;
	cout << "Enter the Item's Wholesale Cost: $";
	cin >> wholesale_cost;
	while (wholesale_cost < 0)
	{
	    cout << "Error!! Wholesale Cost can't be Negative!!" << endl;
		cout << "Enter the Item's Wholesale Cost Again: $";
	    cin >> wholesale_cost;	
	}	
	cout << "Enter The Item's Markup Percentage: %";
	cin >> markup_percentage;
	while (markup_percentage < 0)
	{
		cout << "Error!! Markup Percentage can't be Negative!!" << endl;
		cout << "Enter The Item's Markup Percentage Again: %";
	    cin >> markup_percentage;
	}
	cout << setprecision(2) << fixed << showpoint;
	retail_price = calculateRetail(wholesale_cost, markup_percentage);
	cout << "The Retail Price of Item is: $" << retail_price << endl;
	return 0 ;
}

double calculateRetail(double ws_cost, double markup_percent)
{
	double retail;
	retail = ws_cost + (ws_cost * (markup_percent / 100));
	return retail;
}