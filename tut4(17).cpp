#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name, date1, date2, date3;
	double height1, height2, height3;
	cout << "Enter Your Name: ";
	getline(cin, name);
	cout << "Enter your 3 Best Vaults down below: " << endl;
	cout << "Height of 1st Best Vault(between 2m and 5m): ";
	cin >> height1;
	cout << "Enter Date on which 1st Best Vault Occured: ";
	cin >> date1;
	cin.ignore();
	cout << "Height of 2nd Best Vault(between 2m and 5m): ";
	cin >> height2;
	cout << "Enter Date on which 2nd Best Vault Occured: ";
	cin >> date2;
	cin.ignore();
	cout << "Height of 3rd Best Vault(between 2m and 5m): ";
	cin >> height3;
	cout << "Enter Date on which 3rd Best Vault Occured: ";
	cin >> date3;
	cin.ignore();
	if ((height1 > 5 || height1 < 2) || (height2 > 5 || height2 < 2) || (height3 > 5 || height3 < 2))
	{
		cout << "Invalid Height!! Range of Height is between 2m to 5m. Run the program again and enter Valid Height!!" << endl;
	}
	else
	{
		if ((height1 > height2) && (height1 > height3))
		{
			cout << "Gold:     " << height1 << "m" << endl;
			cout << "Date:     " << date1 << endl;
				if (height2 > height3) 
				{
					cout << "Silver:   " << height2 << "m" << endl;
				    cout << "Date:     " << date2 << endl;
				    cout << "Bronze:   " << height3 << "m" << endl;
				    cout << "Date:     " << date3 << endl;
				}
				else if (height3 > height2) 
				{
					cout << "Silver:   " << height3 << "m" << endl;
				    cout << "Date:     " << date3 << endl;
				    cout << "Bronze:   " << height2 << "m" << endl;
				    cout << "Date:     " << date2 << endl;
				}
		}
		else if ((height2 > height3) && (height2 > height1))
		{
			cout << "Gold:     " << height2 << "m" << endl;
			cout << "Date:     " << date2 << endl;
				if (height1 > height3)
				{
					cout << "Silver:   " << height1 << "m" << endl;
				    cout << "Date:     " << date1 << endl;
				    cout << "Bronze:   " << height3 << "m" << endl;
				    cout << "Date:     " << date3 << endl;
				}
				else if (height3 > height1) 
				{
					cout << "Silver:   " << height3 << "m" << endl;
				    cout << "Date:     " << date3 << endl;
				    cout << "Bronze:   " << height1 << "m" << endl;
				    cout << "Date:     " << date1 << endl;
				}
		}
		else if ((height3 > height1) && (height3 > height2))
		{
				cout << "Gold:     " << height3 << "m" << endl;
				cout << "Date:     " << date3 << endl;
				if (height1 > height2) 
				{
					cout << "Silver:   " << height1 << "m" << endl;
				    cout << "Date:     " << date1 << endl;
				    cout << "Bronze:   " << height2 << "m" << endl;
				    cout << "Date:     " << date2 << endl;
				}
				else if (height2 > height1) 
				{
					cout << "Silver:   " << height2 << "m" << endl;
				    cout << "Date:     " << date2 << endl;
				    cout << "Bronze:   " << height1 << "m" << endl;
				    cout << "Date:     " << date1 << endl;
				}
		}
	}
	return 0;
}