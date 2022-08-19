double hotelExpenses(double no_d, double ahe, double total_r_e, double &total_reimbursed_expenses,
                 double &total_allowable_expenses, double &total_expenses, double &amount_saved)
{
	double h_expenses, h_expenses1, h_expense2;
	for (int i = 1; i <= no_d; i++)
	{
		cout << "Enter Your Hotel Expense of Day No." << i << ": $";
	    cin >> h_expenses;
	    h_expenses1 = inputValidation(h_expense, 0);
	    if (h_expense1 > 90)
	    {
	        h_expense2 = h_expense1 - 90;
	        total_reimbursed_expenses += h_expense2;
	    }
        total_allowable_expenses += 90;
        amount_saved += (90 - h_expense1);
    }
	ahe = total_reimbursed_expenses - total_r_e;
	cout << "Total Additional Hotel Expense (Other then the Company Allows) is: $" << ahe << endl;
	total_expenses = total_allowable_expense + total_reimbursed_expenses;
	return h_expense1;	
}