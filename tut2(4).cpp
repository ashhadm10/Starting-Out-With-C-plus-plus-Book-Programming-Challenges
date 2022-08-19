#include <iostream>
using namespace std;

int main()
{
	float mealcharge = 88.67, tax, tip, totalbill;
	tax = 88.67*0.0675;
	totalbill = mealcharge + tax;
	tip = totalbill*0.2;
	cout << "Meal Cost: $" << mealcharge << endl;
	cout << "Tax Amount: $" << tax << endl;
	cout << "Tip Amount: $" << tip << endl;
	cout << "Total Bill: $" << totalbill << endl;
	return 0;
}