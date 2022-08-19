#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double diameter, radius, area, no_slices;
	const double PI = 3.14159, AREA_OF_SLICE = 14.125;
	cout << "Welcome to Joe's Pizza!!!" << endl;
	cout << "Enter Diameter of Recquired Pizza(in inches): ";
	cin >> diameter;
	radius = diameter / 2;
	area = PI * (pow(radius, 2));
	no_slices = area /AREA_OF_SLICE;
	cout << setprecision(1) << fixed << showpoint;
	cout << "Your " << diameter << " inches pizza contains " << no_slices << " slices.";
	return 0;
}