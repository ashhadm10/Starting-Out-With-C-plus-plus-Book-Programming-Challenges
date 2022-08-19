#include<iostream>
using namespace std;
int main()
{
	double weight, distance, charges;
	cout << "Enter Weight of the Package(in kg): ";
	cin >> weight;
	cout << "Enter Distance the Weight has to be Shipped(in miles): ";
	cin >> distance;
	if (distance < 10 || distance > 3000)
	{
		cout << "You have entered the Distance which is neither in The Company's Maximum Shipping Range nor Minimum Shipping Range. Run the Program Again and Enter Valid Shipping Distance(Between 10 miles to 3,000 miles)!!" << endl;
	}
	else 
	{
	    if (weight <= 2)
	        {
		        charges = ((1.10 / 500) * distance);
		        cout << "Total Charges to Ship " << weight << " kg(s) of weight through " << distance << " miles are: $" << charges << endl; 
	        }
	    else if (weight > 2 && weight < 6)
	        {
		        charges = ((2.20 / 500) * distance);
		        cout << "Total Charges to Ship " << weight << " kg(s) of weight through " << distance << " miles are: $" << charges << endl; 
	        }
	    else if (weight > 6 && weight < 10)
	        {
		        charges = ((3.70 / 500) * distance);
		        cout << "Total Charges to Ship " << weight << " kg(s) of weight through " << distance << " miles are: $" << charges << endl; 
	        }
	    else if (weight > 10 && weight < 20)
	        {
		        charges = ((4.80 / 500) * distance);
		        cout << "Total Charges to Ship " << weight << " kg(s) of weight through " << distance << " miles are: $" << charges << endl; 
	        }
	    else
	        {
		        cout << "The Company Ships the Weight only Between 0 kg and 20 kg. Run the Program Again and Enter Valid Weight!!" << endl;
	        }
    }
	return 0;
}