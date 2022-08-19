#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double seconds, minutes, hours, days;
	cout << "Enter No. of Seconds: ";
	cin >> seconds;
	cout << setprecision(2) << fixed << showpoint;
	if (seconds >= 60 && seconds < 3600)
	{
		minutes = seconds / 60;
		cout << "Number of Minutes in " << seconds << " seconds are " << minutes << " minutes" << endl;
	}
	else if (seconds <=86400 && seconds >= 3600)
	{
		hours = seconds / 3600;
		cout << "Number of Hours in " << seconds << " seconds are " << hours << " hours" << endl;				
	}
	else if (seconds >= 86400)
	{
		days = seconds / 8640;
		cout << "Number of Days in " << seconds << " seconds are " << days << " days" << endl;
	}
	return 0;
}