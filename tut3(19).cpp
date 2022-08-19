#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	//Constants
	const int ONE = 1, HUNDERED = 100;
	
	//Variables
	double rate_monthlyinterest, no_payments1, loan, payment, amount, interest;
	int  no_payments;
	
	//Ask the user for Rate of Interest, No. of Payments and amount of loan
	cout << "Enter Loan Amount: ";
	cin >> loan;
	cout << "Enter Monthly Interest Rate: ";
	cin >> rate_monthlyinterest;
	cout << "No. of Payments: ";
	cin >> no_payments;
	
	//Calculation
	
	no_payments1 = static_cast<double>(no_payments);
	
	rate_monthlyinterest /= HUNDERED;
	
	/*1. Payment = [Rate * (1 + Rate)^N / ((1 + Rate)^N - 1)]*/ 
	payment = (((rate_monthlyinterest) * pow((ONE + (rate_monthlyinterest)), no_payments1)) / (pow(ONE + (rate_monthlyinterest), no_payments1) - ONE)) * loan;
	
	/*2. Amount Paid Back = Number of Payments * Monthly Payment*/
	amount = no_payments1 * payment;
	
	/*3. interest = [(N * Payment) OR (Amount Paid Back)] - Loan*/
	interest = amount - loan;
	
	rate_monthlyinterest *= HUNDERED;
	
	/*3. Data Editing and Beautification*/
	cout << setprecision(2) << fixed << showpoint;
	cout << "Loan Amount:                $ " << setw(8) << right << loan << endl;
	cout << "Monthly Interest Rate:     " << setw(10) << right << rate_monthlyinterest << "%" << endl;
	cout << "No. of Payments:            " << setw(10) << right << no_payments << endl;
	cout << "Monthly Payment:            $ " << setw(8) << right << payment << endl;
	cout << "Amount Paid Back:           $ " << setw(8) << right << amount << endl;
	cout << "Interest Paid:              $ " << setw(8) << right << interest << endl;
	return 0;
}