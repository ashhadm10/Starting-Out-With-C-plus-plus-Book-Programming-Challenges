#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double angle;
	cout << "Enter Angle(in radians): ";
	cin >> angle;
	cout << setprecision(4) << fixed;
	cout << "Sin " << angle << " is: " << sin(angle) << endl;
    cout << "Cos " << angle << " is: " << cos(angle) << endl;
	cout << "Tan " << angle << " is: " << tan(angle) << endl;	
	return 0;
}