#include<iostream>
using namespace std;

int main()
{
	double fahrenheit, celsius;
	cout << "Enter the temperature in Celsius which is to be converted in Fahrenheit: ";
	cin >> celsius;
	fahrenheit = ((9/5) * celsius) + 32;
	cout << celsius << " celsius is equivalent to " << fahrenheit << " fahrenheit." << endl;
	return 0;
}