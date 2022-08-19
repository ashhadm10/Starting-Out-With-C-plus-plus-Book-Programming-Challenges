#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double actual_value, assessment_value, property_tax, tax_rate, quarterly_taxbill;
	cout << "Enter Actual Value of Property: $";
	cin >> actual_value;
	cout << "Enter Current Tax Rate for each $100 of Assessed Value: $";
	cin >> tax_rate;
	assessment_value = (actual_value * 0.6) - 5000;
	property_tax = (assessment_value / 100) * tax_rate;
	quarterly_taxbill = property_tax / 4;
	cout << "Actual Value:         $" << setw(10) << right << actual_value << endl;
	cout << "Assessment Value:     $" << setw(10) << right << assessment_value << endl;
	cout << "Property Tax:         $" << setw(10) << right << property_tax << endl;
	cout << "Quarterly Tax Bill:   $" << setw(10) << right << quarterly_taxbill << endl;
	return 0;
}