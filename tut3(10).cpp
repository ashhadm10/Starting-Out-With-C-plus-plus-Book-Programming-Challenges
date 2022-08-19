#include<iostream>
using namespace std;

int main()
{
	double replacement_cost, min_insurance;
	cout << "Enter Replacement Cost of the Building: ";
	cin >> replacement_cost;
	min_insurance = replacement_cost * 0.8;
	cout << "Minimum Amount of Insurance you should Buy for property is " << min_insurance << "." << endl;
	return 0;
}