#include<iostream>
using namespace std;
int main()
{
	double budget, no_expense, expense = 0, expense1, over_budget, under_budget;
	cout << "Enter Amount that you have Budgeted For a month: ";
	cin >> budget;
	cout << "Enter No. of Expenses that you have: ";
	cin >> no_expense;
	for (double i = 1; i <= no_expense; i++)
	{
		cout << "Enter your Expense No. " << i << ": ";
		cin >> expense1;
		expense += expense1;
	}
	if (budget > expense)
	{
		under_budget = budget - expense;
		cout << "Budget is $" << under_budget << " Under" << endl;
	}
	if (budget < expense)
	{
		over_budget = expense - budget;
		cout << "Budget is $" << over_budget << " Over" << endl;
	}
	return 0;
}