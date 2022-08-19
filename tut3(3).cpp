#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double test_1, test_2, test_3, test_4, test_5, average;
	cout << "Enter 1st Test Score: ";
	cin >> test_1;
	cout << "Enter 2nd Test Score: ";
	cin >> test_2;
	cout << "Enter 3rd Test Score: ";
	cin >> test_3;
	cout << "Enter 4th Test Score: ";
	cin >> test_4;
	cout << "Enter 5th Test Score: ";
	cin >> test_5;
	average = ((test_1 + test_2 + test_3 + test_4 + test_5)/5);
	cout << setprecision(1) << fixed << showpoint;
	cout << "Average of The Above 5 Tests is: " << average << endl;
	return 0;
}
	