#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	string month1, month2, month3;
	double rain1, rain2, rain3, average;
	cout << "Enter the Name of 1st Month: ";
	getline(cin, month1);
	cout << "Enter amount of rain (in inches) in " << month1 << ": ";
	cin >> rain1;
	cin.ignore();
	cout << "Enter the Name of 2nd Month: ";
	getline(cin, month2);
	cout << "Enter amount of rain (in inches) in " << month2 << ": ";
	cin >> rain2;
	cin.ignore();
	cout << "Enter the Name of 3rd Month: ";
	getline(cin, month3);
	cout << "Enter amount of rain (in inches) in " << month3 << ": ";
	cin >> rain3;
	cin.ignore();
	average = (rain1 + rain2 + rain3) / 3;
	cout << "The Average rainfall for " << month1 << ", " << month2 << " and " << month3 << " is " << average << " inches." << endl;
	return 0;
}
	
	