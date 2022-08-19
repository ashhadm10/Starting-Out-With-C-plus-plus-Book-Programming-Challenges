#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

/*Overloaded Functions[with same name but different parameter list uses
function signature(function name and first parameter's datatype) to differentiate between the two same name functions]*/
double totalCharges(int, double, double, double);
double totalCharges(double, double);

int main()
{
	string choice;
	int nodays;
	double daily_rate, hospitalmedicationcharges, charges_hospitalservices, totalcharges;
	cout << "Were you admitted as InPatient or OutPatient?(Enter 'I' for InPatient or 'O' for OutPatient): ";
	cin >> choice;
	if ((choice == "o") || (choice == "O") || (choice == "i") || (choice == "I"))
	{
	    if ((choice == "i") || (choice == "I"))
		{
			cout << "Enter No. of Days Spent in the Hospital: ";
			cin >> nodays;
			while (nodays < 0)
			{
				cout << "Error!! No. of Days Can't be -ve!!" << endl;
				cout << "Enter No. of Days Spent in the Hospital Again: ";
			    cin >> nodays;
			}
			cout << "Enter the Daily Rate: $";
			cin >> daily_rate;
			while (daily_rate < 0)
			{
				cout << "Error!! Daily rate Can't be -ve!!" << endl;
				cout << "Enter Daily Rate Again: ";
			    cin >> daily_rate;
			}
			cout << "Enter Hospital Medication Charges: $";
			cin >> hospitalmedicationcharges;
			while (hospitalmedicationcharges < 0)
			{
				cout << "Error!! Hospital Medication Charges Can't be -ve!!" << endl;
				cout << "Enter Hospital Medication Charges Again: $";
			    cin >> hospitalmedicationcharges;
			}
			cout << "Enter Charges for Hospital Services (Lab Tests etc.): $";
			cin >> charges_hospitalservices;
			while (charges_hospitalservices < 0)
			{
				cout << "Error!! Charges for Hospital Services Can't be -ve!!" << endl;
				cout << "Enter Charges for Hospital Services (Lab Tests etc.) Again: $";
			    cin >> charges_hospitalservices;
			}
			totalcharges = totalCharges(nodays, daily_rate, hospitalmedicationcharges, charges_hospitalservices);
			cout << "No. of Days Patient was in Hospital: " << nodays << " days" << endl;
			cout << "Daily Rate for Hospital is: $" << daily_rate << endl;
			cout << "Hospital Medication Charges are: $" << hospitalmedicationcharges << endl;
			cout << "Charges for Hospital Services are: $" << charges_hospitalservices << endl;
			cout << "Total Charges (of Inpatient) for the above entered Data is: $" << totalcharges << endl;
		}
		if ((choice == "o") || (choice == "O"))
		{
			cout << "Enter Hospital Medication Charges: $";
			cin >> hospitalmedicationcharges;
			while (hospitalmedicationcharges < 0)
			{
				cout << "Error!! Hospital Medication Charges Can't be -ve!!" << endl;
				cout << "Enter Hospital Medication Charges Again: $";
			    cin >> hospitalmedicationcharges;
			}
			cout << "Enter Charges for Hospital Services (Lab Tests etc.): $";
			cin >> charges_hospitalservices;
			while (charges_hospitalservices < 0)
			{
				cout << "Error!! Charges for Hospital Services Can't be -ve!!" << endl;
				cout << "Enter Charges for Hospital Services (Lab Tests etc.) Again: $";
			    cin >> charges_hospitalservices;
			}
			totalcharges = totalCharges(charges_hospitalservices, hospitalmedicationcharges);
			cout << "Hospital Medication Charges are: $" << hospitalmedicationcharges << endl;
			cout << "Charges for Hospital Services are: $" << charges_hospitalservices << endl;
			cout << "Total Charges (of Outpatient) for the above entered Data is: $" << totalcharges << endl;
		}	
	}
	else
	{
		while (!(choice == "o") || (choice == "O") || (choice == "i") || (choice == "I"))
	    {
		    cout << "Error!! You Have Choose an Incorrect Option!!" << endl;
		    cin.clear();
		    cin.ignore(12345, '\n');
		    cout << "Were you admitted as InPatient or OutPatient?(Enter 'I' for InPatient or 'O' for OutPatient): ";
            cin >> choice;
        } 
        if ((choice == "o") || (choice == "O") || (choice == "i") || (choice == "I"))
	    {
	        if ((choice == "i") || (choice == "I"))
		    { 
			    cout << "Enter No. of Days Spent in the Hospital: ";
			    cin >> nodays;
			    while (nodays < 0)
			    {
				    cout << "Error!! No. of Days Can't be -ve!!" << endl;
				    cout << "Enter No. of Days Spent in the Hospital Again: ";
			        cin >> nodays;
			    }
			    cout << "Enter the Daily Rate: $";
			    cin >> daily_rate;
			    while (daily_rate < 0)
			    {
				    cout << "Error!! Daily rate Can't be -ve!!" << endl;
				    cout << "Enter Daily Rate Again: ";
			        cin >> daily_rate;
			    }
			    cout << "Enter Hospital Medication Charges: $";
			    cin >> hospitalmedicationcharges;
			    while (hospitalmedicationcharges < 0)
			    {
				    cout << "Error!! Hospital Medication Charges Can't be -ve!!" << endl;
				    cout << "Enter Hospital Medication Charges Again: $";
			        cin >> hospitalmedicationcharges;
			    }
			    cout << "Enter Charges for Hospital Services (Lab Tests etc.): $";
			    cin >> charges_hospitalservices;
			    while (charges_hospitalservices < 0)
			    {
				    cout << "Error!! Charges for Hospital Services Can't be -ve!!" << endl;
				    cout << "Enter Charges for Hospital Services (Lab Tests etc.) Again: $";
			        cin >> charges_hospitalservices;
			    }
			    totalcharges = totalCharges(nodays, daily_rate, hospitalmedicationcharges, charges_hospitalservices);
			    cout << "No. of Days Patient was in Hospital: " << nodays << " days" << endl;
			    cout << "Daily Rate for Hospital is: $" << daily_rate << endl;
			    cout << "Hospital Medication Charges are: $" << hospitalmedicationcharges << endl;
			    cout << "Charges for Hospital Services are: $" << charges_hospitalservices << endl;
			    cout << "Total Charges (of Inpatient) for the above entered Data is: $" << totalcharges << endl;
		    }
		    if ((choice == "o") || (choice == "O"))
		    {
			    cout << "Enter Hospital Medication Charges: $";
			    cin >> hospitalmedicationcharges;
			    while (hospitalmedicationcharges < 0)
			    {
				    cout << "Error!! Hospital Medication Charges Can't be -ve!!" << endl;
				    cout << "Enter Hospital Medication Charges Again: $";
			        cin >> hospitalmedicationcharges;
			    }
			    cout << "Enter Charges for Hospital Services (Lab Tests etc.): $";
			    cin >> charges_hospitalservices;
			    while (charges_hospitalservices < 0)
			    {
				    cout << "Error!! Charges for Hospital Services Can't be -ve!!" << endl;
				    cout << "Enter Charges for Hospital Services (Lab Tests etc.) Again: $";
			        cin >> charges_hospitalservices;
			    }
			    totalcharges = totalCharges(charges_hospitalservices, hospitalmedicationcharges);
			    cout << "Hospital Medication Charges are: $" << hospitalmedicationcharges << endl;
			    cout << "Charges for Hospital Services are: $" << charges_hospitalservices << endl;
			    cout << "Total Charges (of Outpatient) for the above entered Data is: $" << totalcharges << endl;
		    }  	
	    }
	}
	return 0;
}

double totalCharges(int n_days, double d_rate, double hm_charges, double ch_services)
{
	double total = ((n_days * d_rate) + hm_charges + ch_services);
	return total;
}

double totalCharges(double charges_h_services, double h_medication_charges)
{
	double t = charges_h_services + h_medication_charges;
	return t;
}