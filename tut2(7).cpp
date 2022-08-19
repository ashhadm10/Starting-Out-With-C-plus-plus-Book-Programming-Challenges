#include <iostream>
using namespace std;

int main()
{
	double rising = 1.5, rising_5, rising_7, rising_10;
	rising_5 = 5 * rising;
	rising_7 = 7 * rising;
	rising_10 = 10 * rising;
	cout << "Ocean Level after 5 years will be " << rising_5 << " millimeters higher." << endl;
	cout << "Ocean Level after 7 years will be " << rising_7 << " millimeters higher." << endl;
	cout << "Ocean Level after 10 years will be " << rising_10 << " millimeters higher." << endl;
	return 0;
}
	