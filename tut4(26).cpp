#include<iostream>
using namespace std;
int main()
{
	double gb, amount, extra_gb_C, extra_gb_A, extra_gb_B, total_gb, B_saved, C_saved;
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
					extra_gb_A = gb - 4;
					if (gb >= 7 && gb <= 8)
					{
						extra_gb_C = gb - 7;
					}
					else if (gb > 8)
					{
						extra_gb_B = gb - 8;
						extra_gb_C = gb - 7;
					}
					amount = ((A_rate) + (extra_gb_A * 10));
					cout << "Original Cost = $" << (A_rate) << endl;
					cout << "Extra " << extra_gb_A << " GB(s) Cost = $" << (extra_gb_A * 10) << endl;
					cout << "Total Cost = $" << amount << endl;
					if (gb > 4 && gb <= 6)
					{
						cout << "Package A is best for " << gb << "GB(s)" << endl;
					}
					else if (gb > 6 && gb <= 7)
					{
						B_saved = amount - B_rate;
					    cout << "You would have Saved $" << B_saved << ", if you would have Purchased Package B" << endl;
					}
					
					else if (gb > 7 && gb <= 8)	
						{					
						    B_saved = amount - B_rate;
					        cout << "You would have Saved $" << B_saved << ", if you would have Purchased Package B" << endl;
					        C_saved = amount - C_rate;
					        cout << "You would have Saved $" << C_saved << ", if you would have Purchased Package C" << endl;
					    }
					else if (gb > 8)
					    {
					    	B_saved = amount - B_rate;
					        C_saved = amount - C_rate;
						    cout << "You would have Saved $" << B_saved << ", if you would have Purchased Package B" << endl;
						    cout << "You would have Saved $" << C_saved << ", if you would have Purchased Package C" << endl;
						}
					}
				else
				{
					amount = A_rate;
					cout << "Total Cost = $" << amount << endl;
					cout << "Package A is best for " << gb << "GB(s)" << endl;
				}
				break;
			case 'b':
			case 'B':
				if (gb > 8)
				{
					extra_gb_B = gb - 8;
				}
				if (gb >= 0 && gb <= 4)
					{
						amount = B_rate;
						cout << "Total Cost = $" << amount << endl;
						cout << "Package A is best for " << gb << "GB(s)" << endl;
					}
				else if (gb > 4 && gb <= 8)
					{
						amount = B_rate;
						cout << "Total Cost = $" << amount << endl;
					}
				else if (gb > 8 && gb <= 10)
					{
					    amount = (B_rate) + (extra_gb_B * 5); 
					    cout << "Original Cost = $" << (B_rate) << endl;
					    cout << "Extra " << extra_gb_B << " GB(s) Cost = $" << (extra_gb_B * 5) << endl;
					    cout << "Total Cost = $" << amount << endl;
					}
				else if (gb > 10)
				{	
					amount = ((B_rate) + (extra_gb_B * 5));
					C_saved = amount - C_rate;
					cout << "Original Cost = $" << (B_rate) << endl;
					cout << "Extra " << extra_gb_B << " GB(s) Cost = $" << (extra_gb_B * 5) << endl;
					cout << "Total Cost = $" << amount << endl;
					cout << "You would have Saved $" << C_saved << ", if you would have Purchased Package C" << endl;
				}
				break;
			case 'c':
			case 'C':
				if (gb >= 0 && gb <= 4)
				{
					amount = C_rate;
				    cout << "Total Cost = $" << amount << endl;
				    cout << "Package A is best for " << gb << "GB(s)" << endl;
				}
				else if (gb > 4 && gb <= 8)
				{
					amount = C_rate;
				    cout << "Total Cost = $" << amount << endl;
				    cout << "Package B is best for " << gb << "GB(s)" << endl;
				}
				else if (gb > 8)
				{
				    amount = C_rate;
				    cout << "Total Cost = $" << amount << endl;
				}
				break;
			default:
				cout << "Invalid Name of Package!! Re-Run the program and Enter Valid Package!!" << endl;
		}
	}
	return 0;
}
	
	