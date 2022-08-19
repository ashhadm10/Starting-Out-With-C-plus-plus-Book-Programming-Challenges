#include<iostream>
#include<string>
using namespace std;
int main()
{
	string answer;
	cout << "*This Program is Used For TroubleShooting a Bad Wi-Fi Connection*" << endl;
	cout << "Reboot the Computer and Try to Connect." << endl;
	cout << "Did that Fix the Problem?(Yes or No): ";
	cin >> answer;
	if (answer == "Yes" || answer == "yes" || answer == "No" || answer == "no")
	{
	    if (answer == "No" || answer == "no")
	    {
		    cout << "Reboot the Router and try to Connect." << endl;
		    cout << "Did that Fix the Problem?(Yes or No): ";
	        cin >> answer;
	        if (answer == "Yes" || answer == "yes" || answer == "No" || answer == "no")
	        {
	            if (answer == "No" || answer == "no")
	            {
	    	        cout << "Make Sure the Cables Between the Router and Modem are plugged in Firmly." << endl;
	    	        cout << "Did that Fix the Problem?(Yes or No): ";
	                cin >> answer;
	                if (answer == "Yes" || answer == "yes" || answer == "No" || answer == "no")
	                {
	                    if (answer == "No" || answer != "no")
	                    {
	        	            cout << "Move the Router to a new Location and try to Connect." << endl;
	        	            cout << "Did that Fix the Problem?(Yes or No): ";
	                        cin >> answer;
				            if (answer == "Yes" || answer == "yes" || answer == "No" || answer == "no")
				            {	            
	                            if (answer == "No" || answer == "no")
	                            {
	            	                cout << "Get a new Router!!!" << endl;
				                }
	                        }
	                        else
                            {
    	                        cout << "Invalid Answer!!!" << endl;
	                        }
	                    }
		            }
		            else
                    {
    	                cout << "Invalid Answer!!!" << endl;
	                }
	            }
            }
            else
            {
    	        cout << "Invalid Answer!!!" << endl;
	        }
	    }
	else
    {
    	cout << "Invalid Answer!!!" << endl;
	}
    }
	return 0;	
}