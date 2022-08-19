#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double actual_value, assessment_value, property_tax;
	cout << "Enter Actual Value of Property: $";
	cin >> actual_value;
	assessment_value = actual_value * 0.6;
	property_tax = (assessment_value / 100) * 0.75;
	cout << "Actual Value:          $" << setw(6) << right << actual_value << endl;
	cout << "Assessment Value:      $" << setw(6) << right << assessment_value << endl;
	cout << "Property Tax:          $" << setw(6) << right << property_tax << endl;
	return 0;
}
	