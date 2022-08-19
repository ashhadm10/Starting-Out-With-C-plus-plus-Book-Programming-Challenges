#include<iostream>
using namespace std;
int main()
{
	double pennies, nickels, dimes, quarters, dollars_pennies, dollars_nickels, dollars_dimes, dollars_quarters, dollars_all, dollars;
	cout << "Enter No. of Pennies: ";
	cin >> pennies;
	cout << "Enter No. of Nickels: ";
	cin >> nickels;
	cout << "Enter No. of Dimes: ";
	cin >> dimes;
	cout << "Enter No. of Quarters: ";
	cin >> quarters;
	dollars_pennies = pennies * 1;
	dollars_nickels = nickels * 5;
	dollars_dimes = dimes * 10;
	dollars_quarters = quarters * 25;
	dollars_all = dollars_pennies + dollars_nickels + dollars_dimes + dollars_quarters;
	dollars = dollars_all / 100;
{
	if (dollars_all == 100)
	{
		cout << "Congratulations! Your Entered Amount was 1$ Altogether. You Win. " << endl;
		cout << "Total Amount was: " << dollars << "$"<< endl;
	}
	else if (dollars_all < 100)
	{
		cout << "Amount Entered was less than 1$." << endl;
		cout << "Total Amount was: " << dollars << "$"<< endl;
	}
	else if (dollars_all > 100)
	{
		cout << "Amount Entered was greater than 1$." << endl;
		cout << "Total Amount was: " << dollars << "$"<< endl;
	}
}
	return 0;
}