#include <iostream>
using namespace std;

int main()
{
	int gallons_of_gas1 = 20, gallons_of_gas2 = 1;
	double driven_in_town1 = 23.5, average_town, driven_on_highway1 = 28.9, average_highway;
	average_town = driven_in_town1/gallons_of_gas1;
	average_highway = driven_on_highway1/gallons_of_gas1;
	cout << "Distance the Car can travel on One Tank of gas when driven in Town: " << average_town << " miles." << endl;
	cout << "Distance the Car can travel on One Tank of gas when driven on Highway: " << average_highway << " miles." << endl;
	return 0;
}