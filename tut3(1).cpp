#include<iostream>
using namespace std;

int main()
{
	double gallons_of_gas, no_of_miles, gas_mileage;
	cout << "Enter the No. of Gallons of Gas the Car can hold: ";
	cin >> gallons_of_gas;	
    cout << "Enter the No. of Miles the Car can be Driven on a Full Tank: ";
    cin >> no_of_miles;
    gas_mileage = no_of_miles / gallons_of_gas;
    cout << "Car's Gas Mileage is: " << gas_mileage << " miles per gallon." << endl;
    return 0;
}
