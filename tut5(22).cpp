#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num;
	string sign = "X";
	cout << "Enter a Positive Integer(not greater than 15): ";
	cin >> num;
	while (num > 15 || num < 1)
	{
		cout << "Error!! Positive Integer Number Can't be Less than 1 or greater than 15!!" << endl;
		cout << "Enter a Positive Integer Again(not greater than 15): ";
	    cin >> num;
	}
	for (int i = 1; i <= num; i++)
	{
		for (int i = 1; i <= num; i++)
		{
			cout << sign;
		}
		cout << endl;
	}
	return 0;
}