#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout << "---------------------------------------------------------------------------" << endl;
	cout << "  Substance          Freezing Point(F)          Boiling Point(F)       " << endl;
	cout << "---------------------------------------------------------------------------" << endl;
	cout << "1. Ethyl Alcohol          -173                         172                   " << endl;
	cout << "2. Mercury                -38                          676                   " << endl;
	cout << "3. Oxygen                 -362                        -306                   " << endl;
	cout << "3. Water                   32                          212                   " << endl;
	cout << "---------------------------------------------------------------------------" << endl << endl;
	cout << "Enter Temperature(in F): ";
	cin >> temp;
	if (temp >= 676)
	{
		cout << "\tBoiling: " << endl;
		cout << "------------------------------" << endl;
		cout << "\tMercury" << endl;
		cout << "\tWater" << endl;
		cout << "\tEthyl Alcohol" << endl;
		cout << "\tOxygen" << endl << endl;
	}
	
	else if (temp < 676 && temp >= 212)
		{
			cout << "\tBoiling: " << endl;
		    cout << "------------------------------" << endl;
			cout << "\tWater" << endl;
			cout << "\tEthyl Alcohol" << endl;
			cout << "\tOxygen" << endl << endl;
		}
		
    else if (temp < 212 && temp >= 172)
		{
			cout << "\tBoiling: " << endl;
		    cout << "------------------------------" << endl;
    		cout << "\tEthyl Alcohol" << endl;
			cout << "\tOxygen" << endl << endl;
		}
			
	else if (temp < 172 && temp >= 32)
		{
			cout << "\tBoiling: " << endl;
	        cout << "------------------------------" << endl;
			cout << "\tOxygen" << endl << endl;
			if (temp == 32)
				{
					cout << "\tFreezing: " << endl;
	                cout << "------------------------------" << endl;
	                cout << "\tWater" << endl;
				}
		}

	else if (temp < 32 && temp >= -38)
       {
			cout << "\tBoiling:" << endl;
		    cout << "------------------------------" << endl;
		    cout << "\tOxygen" << endl << endl;
		    cout << "\tFreezing:" << endl;
		    cout << "------------------------------" << endl;
		    cout << "\tWater" << endl;
		    if (temp == -38)
		        {
		    	    cout << "\tMercury" << endl;
		        }
		}
		
	else if (temp < -38 && temp >=-173)
		{
		    cout << "\tBoiling:" << endl;
		    cout << "------------------------------" << endl;
		    cout << "\tOxygen" << endl << endl;
		    cout << "\tFreezing:" << endl;
		    cout << "------------------------------" << endl;
		    cout << "\tWater" << endl;
		    cout << "\tMercury" << endl;
		    if (temp == -173)
		    	{
		    		cout << "\tEthyl Alcohol" << endl;
				}
		}
				
	else if (temp < -173 && temp >= -306)
		{
			cout << "\tBoiling:" << endl;
		    cout << "------------------------------" << endl;
		    cout << "\tOxygen" << endl << endl;
			cout << "\tFreezing:" << endl;
		    cout << "------------------------------" << endl;
		    cout << "\tWater" << endl;
		    cout << "\tMercury" << endl;
		    cout << "\tEthyl Alcohol" << endl;
		}
			
	else if (temp < -306 && temp > -362)
		{
			cout << "\tFreezing:" << endl;
		    cout << "------------------------------" << endl;
		    cout << "\tWater" << endl;
		    cout << "\tMercury" << endl;
		    cout << "\tEthyl Alcohol" << endl;
		}
		
	else if (temp <= -362)
		{
			cout << "\tFreezing:" << endl;
		    cout << "------------------------------" << endl;
		    cout << "\tWater" << endl;
		    cout << "\tMercury" << endl;
		    cout << "\tEthyl Alcohol" << endl;
		    cout << "\tOxygen" << endl;
		}
		
	else
	    {
	    	cout << "Enter Valid Number!!!" << endl;
	    }
    return 0;
}