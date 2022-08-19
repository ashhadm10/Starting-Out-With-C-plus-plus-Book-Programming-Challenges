double privateVehicle(double &total_expenses)
{
	string ch2;
	double m, m1, v_expense;
	cout << "Have You Used Private Vehicle?(Y/N): ";
	getline(cin, ch2);
	while ( ! ((ch2 == "Y") || (ch2 == "y") || (ch2 == "N") || (ch2 == "n")))
	{
		cout << "Enter A Valid Answer!!" << endl;
		cout << "Have You Used Private Vehicle?(Y/N): ";
	    getline(cin, ch2);
	}
	if ((ch2 == "Y") || (ch2 == "y") || (ch2 == "N") || (ch2 == "n"))
	{
		if ((ch2 == "Y") || (ch2 == "y"))
		{
		    cout << "Enter Total Mile(s) Driven on Private Car: ";
		    cin >> m;
		    m1 = inputValidation(m, 0);
		    v_expense = m1 * 0.27;
		    total_expenses += v_expense;
		    return v_expense;
		}
		if ((ch2 == "N") || (ch2 == "n"))
		{
			v_expense = 0;
			total_expenses += v_expense;
			return v_expense;
		}
	}
}