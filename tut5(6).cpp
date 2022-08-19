#include<iostream>
using namespace std;
int main()
{
	double speed, dist, time;
	cout << "Enter Speed of Vehicle (in MPH): ";
	cin >> speed;
	while (speed < 0)
	{
		cout << "Speed Cannot be -ve!!!" << endl;
		cout << "Enter Speed of Vehicle (in MPH): ";
	    cin >> speed;
	}
	cout << "Enter No. of Hours it has Traveled: ";
	cin >> time;
	while (time < 1)
	{
		cout << "Enter Time Greater than 1!!" << endl;
		cout << "Enter No. of Hours it has Traveled: ";
	    cin >> time;
	}
	cout << "Hour No:      Distance Traveled (Miles):" << endl;
	cout << "----------------------------------------" << endl;
	for (double i = 1.0; i <= time; i++)
	{
		dist = speed * i;
		cout << "  " << i << "               " << dist << endl;
	}
	return 0;
}