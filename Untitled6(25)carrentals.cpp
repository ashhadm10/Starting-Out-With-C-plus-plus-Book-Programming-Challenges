double carRentals(double &total_expenses)
{
	string ch1;
	double c_r, c_r1;
	cout << "Do You Have Any Amount of Car Rentals?(Y/N): ";
	getline(cin, ch1);
	while ( ! ((ch1 == "Y") || (ch1 == "y") || (ch1 == "N") || (ch1 == "n")))
	{
		cout << "Enter A Valid Answer!!" << endl;
		cout << "Do You Have Any Amount of Car Rentals?(Y/N): ";
	    getline(cin, ch1);
	}
	if ((ch1 == "Y") || (ch1 == "y") || (ch1 == "N") || (ch1 == "n"))
	{
		if ((ch1 == "Y") || (ch1 == "y"))
		{
		    cout << "Enter your Amount of Car Rentals: $";
		    cin >> c_r;
		    c_r1 = inputValidation(c_r, 0);
		    total_expenses += c_r1;
		    return c_r1;
		}
		if ((ch1 == "N") || (ch1 == "n"))
		{
			c_r = 0;
			total_expenses += c_r;
			return c_r;
		}
	}
	
}