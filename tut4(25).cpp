#include<iostream>
using namespace std;
int main()
{
	double gb, amount, extra_gb;
	const double A_rate = 39.99, B_rate = 59.99, C_rate = 69.99;
	char option;
	cout << "+=====================================================================================================+" << endl;
	cout << "|Package A:  For $39.99 per Month, 4 GigaBytes are provided. Additional Data Costs $10 per GigaByte.  |" << endl;
	cout << "|Package B:  For $59.99 per Month, 8 GigaBytes are provided. Additional Data Costs $5 per GigaByte.   |" << endl;
	cout << "|Package C:  For $69.99 per Month, unlimite Data is Provided.                                         |" << endl;
	cout << "+=====================================================================================================+" << endl << endl;
	cout << "Enter The Package you have Purchased: ";
	cin >> option;
	cout << "Enter amount of GigaBytes used: ";
	cin >> gb;
	if (gb < 0)
	{
		cout << "Enter Valid Amount of GigaBytes!!!" << endl;
	}
	else
	{
		switch (option)
		{
			case 'a':
			case 'A':
				if (gb > 4)
				{
					extra_gb = gb - 4;
					amount = ((A_rate) + (extra_gb * 10));
					cout << "Original Cost = $" << (A_rate) << endl;
					cout << "Extra " << extra_gb << " GB(s) Cost = $" << (extra_gb * 10) << endl;
					cout << "Total Cost = $" << amount << endl;
					
				}
				else
				{
					amount = A_rate;
					cout << "Total Cost = $" << amount << endl;
				}
				break;
			case 'b':
			case 'B':
				if (gb > 8)
				{
					extra_gb = gb - 8;
					amount = ((B_rate) + (extra_gb * 5));
					cout << "Original Cost = $" << (B_rate) << endl;
					cout << "Extra " << extra_gb << " GB(s) Cost = $" << (extra_gb * 5) << endl;
					cout << "Total Cost = $" << amount << endl;
					
				}
				else
				{
					amount = B_rate;
					cout << "Total Cost = $" << amount << endl;
				}
				break;
			case 'c':
			case 'C':
				amount = C_rate;
				cout << "Total Cost = $" << amount << endl;
				break;
			default:
				cout << "Invalid Name of Package!! Re-Run the program and Enter Valid Package!!" << endl;
		}
	}
	return 0;
}
	
	