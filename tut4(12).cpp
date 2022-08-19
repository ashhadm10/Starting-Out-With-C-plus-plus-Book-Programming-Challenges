#include<iostream>
using namespace std;
int main()
{
	int units;
	double price, price1, discount;
	cout << "Enter the No. of Sold Packages: ";
	cin >> units;
	if (units > 0 && units < 10)
	{
		price = units * 99;
		cout << "Total Price of " << units << " units is: " << price << " $." << endl;
	}
	else if (units >= 10 && units <= 19)
	{
		price1 = units * 99;
		discount = price1 * 0.2;
		price = price1 - discount;
		cout << "Total Price of " << units << " units is: " << price << " $." << endl;
	}
	else if (units >= 20 && units <= 49)
	{
		price1 = units * 99;
		discount = price1 * 0.3;
		price = price1 - discount;
		cout << "Total Price of " << units << " units is: " << price << " $." << endl;
	}
	else if (units >= 50 && units <= 99)
	{
		price1 = units * 99;
		discount = price1 * 0.4;
		price = price1 - discount;
		cout << "Total Price of " << units << " units is: " << price << " $." << endl;
	}
	else if (units >= 100)
	{
		price1 = units * 99;
		discount = price1 * 0.5;
		price = price1 - discount;
		cout << "Total Price of " << units << " units is: " << price << " $." << endl;
	}
	else
	{
		cout << "Run the Program Again and Enter Valid Number!!" << endl;
	}
	return 0;
}