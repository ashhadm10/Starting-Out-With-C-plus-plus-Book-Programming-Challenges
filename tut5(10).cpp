#include<iostream>
using namespace std;
int main()
{
	double rainfall, total_rainfall = 0, avg_rainfall, no_years;
	cout << "Enter No. of Years for which you want to calculate the Average Rainfall: ";
	cin >> no_years;
	while (no_years < 0)
	{
		cout << "Error!! No. of Years Can't Be Negative!!" << endl;
		cout << "Enter No. of Years for which you want to calculate the Average Rainfall Again: ";
	    cin >> no_years;
	}
	for (int i = 1; i <= no_years; i++)
	{
		for (int j = 1; j <= 12; j++)
		{
			    cout << "Enter The Rainfall of Month " << j << " for Year " << i << "(in inches): ";
			    cin >> rainfall;
			    total_rainfall += rainfall;
			    continue;			
		}
	}
	avg_rainfall = total_rainfall / (no_years * 12);
	cout << "Number of Months: " << (no_years * 12) << endl;
	cout << "Total Rainfall(in inches): " << total_rainfall << endl;
	cout << "Average Rainfall(in inches): " << avg_rainfall << endl;
	return 0;
}