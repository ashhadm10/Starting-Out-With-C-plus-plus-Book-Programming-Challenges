#include<iostream>
using namespace std;
int main()
{
	double num1, num2;
	cout << "Enter 1st Number: ";
	cin >> num1;
	cout << "Enter 2nd Number: ";
	cin >> num2;
	if(num1 > num2)
	{
		cout << num1 << " is greater than " << num2 << endl;
	}
	else if(num1 < num2)
	{
		cout << num1 << " is less than " << num2 << endl;
	}
	return 0;
}