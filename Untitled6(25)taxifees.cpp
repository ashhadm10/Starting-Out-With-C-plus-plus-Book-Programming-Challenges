


double taxiFees(double no_days, double atf, double tre, double &total_reimbursed_expenses,
                 double &total_allowable_expenses, double &total_expenses, double &amount_saved)
{
	double t_fees, t_fees1;
	for (int i = 1; i <= no_days; i++)
	{
		cout << "Enter Your taxi Fees of Day No." << i << ": $";
	    cin >> t_fees;
	    t_fees1 = inputValidation(t_fees, 0);
	    if (t_fees1 > 10)
	    {
	        t_fees2 = t_fees1 - 10;
	        total_reimbursed_expenses += t_fees2;
	    }
        total_allowable_expenses += 10;
        amount_saved += (10 - t_fees1);
    }
	atf = total_reimbursed_expenses - tre;
	cout << "Total Additional Taxi Fees (Other then the Company Allows) is: $" << atf << endl;
	total_expenses = total_allowable_expense + total_reimbursed_expenses;
	return t_fees1;	
}