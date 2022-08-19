#include<iostream>
using namespace std;
int main()
{
	float starting_time, no_minutes, charges, starting_time_minutes;
	cout << "-----------------------------------------------------------------" << endl;
	cout << "  Starting Time of Call                 Rate Per Minute" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << "   00:00-06:59                           0.05" << endl;
	cout << "   07:00-19:00                           0.45" << endl;
	cout << "   19:01-23:59                           0.20" << endl;
	cout << "-----------------------------------------------------------------" << endl << endl;
	cout << "Enter Starting Time of Call('07:00' as '07.00' and '16:28' as '16.28'): ";
	cin >> starting_time;
	starting_time_minutes = starting_time - static_cast<int>(starting_time);
	starting_time_minutes *= 100;
	cout << "Enter No. of Minutes the Call Lasted: ";
	cin >> no_minutes;
	if ((starting_time > 23 || starting_time < 0) || (starting_time_minutes < 0 || starting_time_minutes > 60))
	{
		cout << "Enter Valid Time!!" << endl;
	}
	else if (starting_time >= 00.00 && starting_time <= 06.59)
	{
		charges = no_minutes * 0.05;
		cout << "Your Call of " << no_minutes << " minutes starting from " << starting_time << " has charges of " << charges << " $" << endl; 
	}
	else if (starting_time >= 07.00 && starting_time <= 19.00)
	{
		charges = no_minutes * 0.45;
		cout << "Your Call of " << no_minutes << " minutes starting from " << starting_time << " has charges of " << charges << " $" << endl; 
	}
	else if (starting_time >= 19.01 && starting_time <= 23.59)
	{
		charges = no_minutes * 0.05;
		cout << "Your Call of " << no_minutes << " minutes starting from " << starting_time << " has charges of " << charges << " $" << endl; 
	}
	return 0;
}
	
	