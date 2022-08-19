


double totalDays()
{
	double n_days;
	cout << "Enter Total No. of Days Spent for the Whole Trip: ";
	cin >> t_days;
	n_days = inputValidation(t_days, 1);
	return n_days;	
}