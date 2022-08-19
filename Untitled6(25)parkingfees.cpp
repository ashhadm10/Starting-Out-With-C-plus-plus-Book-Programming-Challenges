double parkingFees(double vehicle_ex, double n_d, double apf, double &total_reimbursed_expenses,
                    double &total_allowable_expenses, double &total_expenses, double &amount_saved)
{
	double p_fees, p_fees1, p_fees2;
	if (vehicle_ex > 0)
	{
		for (int i = 1; i <= n_d; i++)
		{
		    cout << "Enter Your Parking Fees of Day No." << i << ": $";
		    cin >> p_fees;
		    p_fees1 = inputValidation(p_fees, 0);
		    if (p_fees1 > 6)
		    {
		        p_fees2 = p_fees1 - 6;
		        total_reimbursed_expenses += p_fees2;
		    }
	        total_allowable_expenses += 6;
	        amount_saved += (6 - p_fees1);
	    }
	    apf = total_reimbursed_expenses;
	    cout << "Total Additional Parking Fees (Other then the Company Allows) is: $" << apf << endl;
		total_expenses = total_allowable_expenses + total_reimbursed_expenses;
	}
	return p_fees1;
}