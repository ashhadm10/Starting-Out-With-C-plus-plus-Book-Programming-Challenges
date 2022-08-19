#include<iostream>
using namespace std;
int main()
{
	double annual_interest_rate, monthly_interest_rate, starting_balance;
	double balance = 0, no_months, amount_deposited = 0, amount_deposited1, amount_withdrawn = 0;
	double amount_withdrawn1, monthly_interest_balance = 0, monthly_interest_balance1;
	cout << "Enter Annual Interest Rate(%): ";
	cin >> annual_interest_rate;
	while (annual_interest_rate < 0)
	{
		cout << "Error!! Annual Interest Rate Can't be Negative!!" << endl;
		cout << "Enter Annual Interest Rate Again(Greater than 0): ";
	    cin >> annual_interest_rate;
	}
	annual_interest_rate /= 100;
	cout << "Enter Starting Balance: $";
	cin >> starting_balance;
	while (starting_balance < 0)
	{
		cout << "Error!! Starting Balance Can't be Negative!!" << endl;
		cout << "Enter Starting Balance Again(Greater than 0): ";
	    cin >> starting_balance;
	}
	cout << "No. of Months Passed since the Account was Established: ";
	cin >> no_months;
	while (no_months < 0)
	{
		cout << "Error!! No. of MOnths Can't be Negative!!" << endl;
		cout << "Enter No. of Months Passed since the Account was Established Again(Greater than 0): ";
	    cin >> no_months;
	}
	balance += starting_balance;
	for (int i = 1; i <= no_months; i++)
	{
		cout << "Enter the Amount Deposited in the Account during Month " << i << ":";
		cin >> amount_deposited1;
		while (amount_deposited1 < 0)
		{
			cout << "Error!! Deposited Amount Can't be Negative!!" << endl;
			cout << "Enter the Amount Deposited in the Account during Month " << i << ":";
		    cin >> amount_deposited1;
		}
		amount_deposited += amount_deposited1; 
		balance += amount_deposited1;
		if (balance < 0)
		{
			break;
		}
		cout << "Enter the Amount Withdrawn from the Account during Month " << i << ":";
		cin >> amount_withdrawn1;
		while (amount_withdrawn1 < 0)
		{
			cout << "Error!! Withdrawn Amount Can't be Negative!!" << endl;
			cout << "Enter the Amount Withdrawn from the Account during Month " << i << ":";
		    cin >> amount_withdrawn1;
		}
		amount_withdrawn +=  amount_withdrawn1;
		balance -= amount_withdrawn1;
		if (balance < 0)
		{
			break;
		}
		monthly_interest_rate = annual_interest_rate / 12; 
		monthly_interest_balance1 = balance * monthly_interest_rate;
		monthly_interest_balance += monthly_interest_balance1;
		balance += monthly_interest_balance1; 
		if (balance < 0)
		{
			break;
		}
	}
	if (balance < 0)
	{
		cout << "Account has been Closed" << endl;
	}
	else
	{
	    cout << "Ending Balance: $" << balance << endl;
	    cout << "Amount Deposited: $" << amount_deposited << endl;
	    cout << "Amount Withdrawn: $" << amount_withdrawn << endl;
	    cout << "Total Interest Earned: $" << monthly_interest_balance << endl;
	}
	return 0;
}
	