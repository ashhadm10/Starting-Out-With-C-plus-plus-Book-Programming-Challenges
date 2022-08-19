#include<iostream>
using namespace std;

int main()
{
	double mcost_loanpayment, mcost_insurance, mcost_gas, mcost_oil, mcost_tyres, mcost_maintenance, mcost_total, acost;
	cout << "Enter the Monthly Cost of Loan Payment of your Automobile: ";
	cin >> mcost_loanpayment;
	cout << "Enter the Monthly Cost of Insurance of your Automobile: ";
	cin >> mcost_insurance;
	cout << "Enter the Monthly Cost of Gas of your Automobile: ";
	cin >> mcost_gas;
	cout << "Enter the Monthly Cost of Oil of your Automobile: ";
	cin >> mcost_oil;
	cout << "Enter the Monthly Cost of Tyres your Automobile: ";
	cin >> mcost_tyres;
	cout << "Enter the Monthly Cost of Maintenance of your Automobile: ";
	cin >> mcost_maintenance;
	mcost_total = mcost_loanpayment + mcost_insurance + mcost_gas + mcost_oil + mcost_tyres + mcost_maintenance;
	acost = 12 * mcost_total;
	cout << "Total Monthly Cost of Above Expenses is: " << mcost_total << endl;
	cout << "Annual Cost of Above Expenses is: " << acost << endl;
	return 0;
}
	