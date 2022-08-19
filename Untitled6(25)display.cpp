

void Display(double &, double &, double &, double &)


void Display(double &total_expense, double &total_allowable_expenses, double &total_reimbursed_expenses, double &amountsaved)
{
	if (total_expenses < total_allowable_expenses)
	{
		cout << "Total Expenses Of Trip: $" << total_expenses << endl;
		cout << "Total Allowable Expenses: $" << total_allowable_expenses << endl;
		cout << "Total Amount Saved: $" << amountsaved << endl;
	}
	else if (total_expense > total_allowable_expense)
	{
		cout << "Total Expenses Of Trip: $" << total_expenses << endl;
		cout << "Total Allowable Expenses: $" << total_allowable_expenses << endl;
		cout << "Total Reimbursed Expense: $" << total_reimbursed_expense << endl;
	}
}