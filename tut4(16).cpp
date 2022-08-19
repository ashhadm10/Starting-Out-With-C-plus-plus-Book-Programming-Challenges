#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name1, name2, name3;
	double time1, time2, time3;
	cout << "Enter 1st Runner's name: ";
	cin >> name1;
	cout << "Enter it's Race Finishing Time(in seconds): ";
	cin >> time1;
	cout << "Enter 2nd Runner's name: ";
	cin >> name2;
	cout << "Enter it's Race Finishing Time(in seconds): ";
	cin >> time2;
	cout << "Enter 3rd Runner's name: ";
	cin >> name3;
	cout << "Enter it's Race Finishing Time(in seconds): ";
	cin >> time3;
	if (time1 < 0 || time2 < 0 || time3 < 0)
	{
		cout << "You Haven't Entered Valid Time for Runner's. Start The Program Again and Enter Valid Time!!" << endl;
	}
	else
	{
		if (time1 > time2)
		{
			if (time1 > time3)
			{
				cout << name1 << " got 1st Place." << endl;
				if (time2 > time3)
				{
					cout << name2 << " got 2nd Place." << endl;
					cout << name3 << " got 3rd Place." << endl;
				}
				else if (time3 > time2)
				{
					cout << name3 << " got 2nd Place." << endl;
					cout << name2 << " got 3rd Place." << endl;
				}
			}
		}
		else if (time2 > time1)
		{
			if (time2 > time3)
			{
				cout << name2 << " got 1st Place." << endl;
				if (time1 > time3)
				{
					cout << name1 << " got 2nd Place." << endl;
					cout << name3 << " got 3rd Place." << endl;
				}
				else if (time3 > time1)
				{
					cout << name3 << " got 2nd Place." << endl;
					cout << name1 << " got 3rd Place." << endl;
				}
			}
		}
		else if (time3 > time1)
		{
			if (time3 > time2)
			{
				cout << name3 << " got 1st Place." << endl;
				if (time1 > time2)
				{
					cout << name1 << " got 2nd Place." << endl;
					cout << name2 << " got 3rd Place." << endl;
				}
				else if (time2 > time1)
				{
					cout << name2 << " got 2nd Place." << endl;
					cout << name1 << " got 3rd Place." << endl;
				}
			}
		}
	}
	return 0;
}