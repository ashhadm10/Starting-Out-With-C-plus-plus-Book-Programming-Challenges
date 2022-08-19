#include<iostream>
using namespace std;
int main()
{
	double starting_no_org, percent_avg_daily_increase, no_days, size_population, org_increase_day;
	cout << "Enter Starting Number of Organisms: ";
	cin >> starting_no_org;
	while (starting_no_org < 2)
	{
		cout << "Error!! Starting Number of Organisms Can't Be Less than 2!!" << endl;
		cout << "Enter Starting Number of Organisms Again(greater than 2): ";
	    cin >> starting_no_org;
	}
	cout << "Enter Percentage of Average Daily Population Increase: ";
	cin >> percent_avg_daily_increase;
	while (percent_avg_daily_increase < 0)
	{
		cout << "Error!! Percentage of Average Daily Population Increase Can't Be Negative!!" << endl;
		cout << "Enter Percentage of Average Daily Population Increase Again(Greater than 0): ";
	    cin >> percent_avg_daily_increase;
	}
	cout << "Enter No. of Days they will Multiply For: ";
	cin >> no_days;
	while (no_days < 1)
	{
		cout << "Error!! No. of Days Organisms will Multiply For Can't Be less than 1!!" << endl;
		cout << "Enter No. of Days Organisms will Multiply For Again(Greater than 1): ";
	    cin >> no_days;
	}
	for (int i = 1; i <= no_days; i++)
	{
		org_increase_day = starting_no_org * (percent_avg_daily_increase / 100);
		starting_no_org += org_increase_day;
		cout << "Size of Population for Day " << i << " is: " << starting_no_org << " organisms." << endl;
	}
	return 0;
}