#include<iostream>
using namespace std;
int main()
{
	int emp_no;
	double gross_pay, state_tax, federal_tax, fica_holdings, total, net_pay;
	do
	{
		cout << "Enter Employee Number: ";
		cin >> emp_no;
		if (emp_no == 0)
			break;
		else if (emp_no < 0)
		{
			while (emp_no < 0)
			{
				cout << "Employee Number Cannot Be Negative!!" << endl;
				cout << "Enter Employee Number Again: ";
		        cin >> emp_no;
		        if (emp_no == 0)
			    break;
			}
		}
			cout << "Enter Gross Pay: $";
			cin >> gross_pay;
			while (gross_pay < 0)
			{
				cout << "Gross Pay Cannot Be Negative!!" << endl;
				cout << "Enter Gross Pay Again: $";
		        cin >> gross_pay;
			}
			cout << "Enter State Tax: $";
			cin >> state_tax;
			while (state_tax < 0 || state_tax > gross_pay)
			{
				if (state_tax < 0)
				{
				    cout << "State Tax Cannot Be Negative!!" << endl;
				    cout << "Enter State Tax Pay Again: $";
		            cin >> state_tax;
		        }
		        else if (state_tax > gross_pay)
		        {
		        	cout << "State Tax Cannot Be greater than Gross Pay!!" << endl;
				    cout << "Enter State Tax Again: $";
		            cin >> state_tax;
				}
			}
			cout << "Enter Federal Tax: $";
			cin >> federal_tax;
			while (federal_tax < 0 || federal_tax > gross_pay)
			{
				if (federal_tax < 0)
				{
				    cout << "Federal Tax Cannot Be Negative!!" << endl;
				    cout << "Enter Federal Tax Pay Again: $";
		            cin >> federal_tax;
		        }
		        else if (federal_tax > gross_pay)
		        {
		        	cout << "Federal Tax Cannot Be greater than Gross Pay!!" << endl;
				    cout << "Enter Federal Tax Again: $";
		            cin >> federal_tax;
				}
			}
			cout << "Enter FICA Holdigs: $";
			cin >> fica_holdings;
			while (fica_holdings < 0 || fica_holdings > gross_pay)
			{
				if (fica_holdings < 0)
				{
				    cout << "FICA Holdings Cannot Be Negative!!" << endl;
				    cout << "Enter FICA Holdings Again: $";
		            cin >> fica_holdings;
		        }
		        else if (fica_holdings > gross_pay)
		        {
		        	cout << "FICA Holdigs Cannot Be greater than Gross Pay!!" << endl;
				    cout << "Enter FICA Holdings Again: $";
		            cin >> fica_holdings;
				}
			}
		total = federal_tax + state_tax + fica_holdings;
		while (total > gross_pay)
		{
			cout << "Error!! State Tax, Federal Tax and FICA Holdigs altogether cannot be greater than Gross Pay!!" << endl;
			cout << "Enter Employee Number: ";
		    cin >> emp_no;
		    if (emp_no == 0)
			    break;
		    else if (emp_no < 0)
		    {
			    while (emp_no < 0)
			    {
				    cout << "Employee Number Cannot Be Negative!!" << endl;
				    cout << "Enter Employee Number Again: ";
		            cin >> emp_no;
		            if (emp_no == 0)
			            break;
			    }
		    }
			cout << "Enter Gross Pay: $";
		    cin >> gross_pay;
		    while (gross_pay < 0)
		    {
			    cout << "Gross Pay Cannot Be Negative!!" << endl;
			    cout << "Enter Gross Pay Again: $";
		        cin >> gross_pay;
		    }
		    cout << "Enter State Tax: $";
		    cin >> state_tax;
		    while (state_tax < 0 || state_tax > gross_pay)
		    {
			    if (state_tax < 0)
			    {
			        cout << "State Tax Cannot Be Negative!!" << endl;
			        cout << "Enter State Tax Pay Again: $";
	                cin >> state_tax;
		        }
	            else if (state_tax > gross_pay)
	            {
		       	    cout << "State Tax Cannot Be greater than Gross Pay!!" << endl;
			        cout << "Enter State Tax Again: $";
	                cin >> state_tax;
			    }
			}
		    cout << "Enter Federal Tax: $";
		    cin >> federal_tax;
		    while (federal_tax < 0 || federal_tax > gross_pay)
		    {
			    if (federal_tax < 0)
			    {
			        cout << "Federal Tax Cannot Be Negative!!" << endl;
			        cout << "Enter Federal Tax Pay Again: $";
	                cin >> federal_tax;
		        }
	            else if (federal_tax > gross_pay)
	            {
	        	    cout << "Federal Tax Cannot Be greater than Gross Pay!!" << endl;
			        cout << "Enter Federal Tax Again: $";
		            cin >> federal_tax;
			    }
		    }
		    cout << "Enter FICA Holdigs: $";
		    cin >> fica_holdings;
		    while (fica_holdings < 0 || fica_holdings > gross_pay)
		    {
			    if (fica_holdings < 0)
			    {
			        cout << "FICA Holdings Cannot Be Negative!!" << endl;
			        cout << "Enter FICA Holdings Again: $";
	                cin >> fica_holdings;
	            }
	            else if (fica_holdings > gross_pay)
	            {
	        	    cout << "FICA Holdigs Cannot Be greater than Gross Pay!!" << endl;
     		        cout << "Enter FICA Holdings Again: $";
	                cin >> fica_holdings;
			    }
		    } 
	     total = federal_tax + state_tax + fica_holdings;
		}
		while (total <= gross_pay)
		{
		    net_pay = federal_tax + fica_holdings + gross_pay + state_tax;
		    cout << "----------------*WEEKLY PAYROLL REPORT*----------------" << endl;
		    cout << "Employee No: $" << emp_no << endl;
		    cout << "Gross Pay: $" << gross_pay << endl;
		    cout << "State Tax: $" << state_tax << endl;
		    cout << "Federal Tax: $" << federal_tax << endl;
		    cout << "FICA Holdings: $" << fica_holdings << endl;
		    cout << "Net Pay: $" << net_pay << endl;
		    break;
		}
	} while (net_pay == 0 || net_pay > 0);
	return 0;
}