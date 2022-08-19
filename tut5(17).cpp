#include<iostream>
using namespace std;
int main()
{
	int sales_1, sales_2, sales_3, sales_4, sales_5, sales1_100s, sales2_100s, sales3_100s, sales4_100s, sales5_100s;
	cout << "Enter Today's Sales of Store 1: $";
	cin >> sales_1;
	while (sales_1 < 0)
	{
		cout << "Error!! Sales Can't Be Negative!!" << endl;
		cout << "Enter Today's Sales of Store 1: $";
	    cin >> sales_1;
	}	
	sales1_100s = sales_1 / 100;
	cout << "Enter Today's Sales of Store 2: $";
	cin >> sales_2;
	while (sales_2 < 0)
	{
		cout << "Error!! Sales Can't Be Negative!!" << endl;
		cout << "Enter Today's Sales of Store 2: $";
	    cin >> sales_2;
	}	
	sales2_100s = sales_2 / 100;
	cout << "Enter Today's Sales of Store 3: $";
	cin >> sales_3;
	while (sales_3 < 0)
	{
		cout << "Error!! Sales Can't Be Negative!!" << endl;
		cout << "Enter Today's Sales of Store 3: $";
	    cin >> sales_3;
	}	
	sales3_100s = sales_3 / 100;
	cout << "Enter Today's Sales of Store 4: $";
	cin >> sales_4;
	while (sales_4 < 0)
	{
		cout << "Error!! Sales Can't Be Negative!!" << endl;
		cout << "Enter Today's Sales of Store 4: $";
	    cin >> sales_4;
	}	
	sales4_100s = sales_4 / 100;
	cout << "Enter Today's Sales of Store 5: $";
	cin >> sales_5;
	while (sales_5 < 0)
	{
		cout << "Error!! Sales Can't Be Negative!!" << endl;
		cout << "Enter Today's Sales of Store 5: $";
	    cin >> sales_5;
	}	
	sales5_100s = sales_5 / 100;
	cout << "SALES BAR CHART" << endl;
	cout << "(Each * = $100)" << endl;
	cout << "Store 1: ";
	for (int i = 0; i < sales1_100s; i++)
	{
		cout << "*";
	}
	cout << endl;
	cout << "Store 2: ";
	for (int i = 0; i < sales2_100s; i++)
	{
		cout << "*";
	}
	cout << endl;
	cout << "Store 3: ";
	for (int i = 0; i < sales3_100s; i++)
	{
		cout << "*";
	}
	cout << endl;
	cout << "Store 4: ";
	for (int i = 0; i < sales4_100s; i++)
	{
		cout << "*";
	}
	cout << endl;
	cout << "Store 5: ";
	for (int i = 0; i < sales5_100s; i++)
	{
		cout << "*";
	}
	cout << endl;
	return 0;
}
	