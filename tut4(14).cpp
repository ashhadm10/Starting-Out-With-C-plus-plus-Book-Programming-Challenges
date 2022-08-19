#include<iostream>
using namespace std;
int main()
{
	int checks;
	double b_balance, b_servicefees;
	
	cout << "Enter Beginning Balance: $";
	cin >> b_balance;
	if (b_balance < 0)
		cout << "Your Account is Overdrawn!!" << endl;

	if (b_balance < 400)
		b_servicefees += 15;
	
	cout << "Enter No. of Checks written this Month: ";
	cin >> checks;
	if (checks < 0)
	{
		cout << "Enter Valid No. of Checks!!" << endl;
	}
	else 
	{
		if (b_balance < 400 && checks < 20)
	        {
		        b_servicefees += ((0.10 * checks) + 10);
		        cout << "Bank Service Fees for the Month: $" << b_servicefees << endl;
	        }
	    else if (checks < 20)
	        {
		        b_servicefees += ((0.10 * checks) + 10);
		        cout << "Bank Service Fees for the Month: $" << b_servicefees << endl;
	        }
	    else if (checks >= 20 && checks <= 39)
	        {
		        b_servicefees += ((0.08 * checks) + 10);
		        cout << "Bank Service Fees for the Month: $" << b_servicefees << endl;
	        }
	    else if (checks >= 40 && checks <= 59)
	        {
		        b_servicefees += ((0.06 * checks) + 10);
		        cout << "Bank Service Fees for the Month: $" << b_servicefees << endl;
	        }
	    else if (checks >= 60)
	        {
		        b_servicefees += ((0.04 * checks) + 10);
		        cout << "Bank Service Fees for the Month: $" << b_servicefees << endl;
	        }
    }
	return 0;
}