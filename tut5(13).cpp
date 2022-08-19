#include<iostream>
using namespace std;

int main()
{
	double num, min, max;
	cout << "Enter a Value(Enter '-99' at anytime you want to stope entering numbers): ";
	cin >> num;
	min = max = num;
	while (num != -99)
	{
		if (num < min)
		{
			min = num;
		}
		if (num > max)
		{
			max = num;
		}
		cout << "Enter A Value(Enter '-99' at anytime you want to stope entering numbers): ";
		cin >> num;
	}
	cout << "Smallest Number is: " << min << endl;
	cout << "Greatest Number is: " << max << endl;
	return 0;
}
    