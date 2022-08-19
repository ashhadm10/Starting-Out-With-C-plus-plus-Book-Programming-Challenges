#include<iostream>
using namespace std;
int main()
{
	double rising_ocean_level = 1.5;
	cout << "Following Table Shows the no. of millimeters that the Ocean will have risen each year " << endl;
	cout << "for the next 25 Years: " << endl;
	for (int i = 1; i <= 25; i++)
	{
		cout << "Year " << i << ": " << rising_ocean_level << endl;
		rising_ocean_level += 1.5;
	}
	return 0;
}