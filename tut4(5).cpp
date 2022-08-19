#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double weight, height, bmi;
	cout << "Enter your Weight(in Pounds): ";
	cin >> weight;
	cout << "Enter your Height(in inches): ";
	cin >> height;
	bmi = weight * (703 / (pow(height, 2)));
	if (bmi > 18.5 && bmi < 25)
	{
		cout << "You have Optimal Weight!!" << endl;
	}
	else if (bmi < 18.5)
	{
		cout << "You are Underweight!!" << endl;
	}
	else if (bmi > 25)
	{
		cout << "You are Overweight!!" << endl;
	}
	return 0;
}