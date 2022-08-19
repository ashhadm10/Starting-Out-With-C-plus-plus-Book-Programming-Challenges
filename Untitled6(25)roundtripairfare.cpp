

double roundTripAirFare(double &total_expenses)
{
	string ch;
	double fare, fare1;
	cout << "Do You Have Any Round Trip Air-Fare?(Y/N): ";
	getline(cin, ch);
	while ( ! ((ch == "Y") || (ch == "y") || (ch == "N") || (ch == "n")))
	{
		cout << "Enter A Valid Answer!!" << endl;
		cout << "Do You Have Any Round Trip Air-Fare?(Y/N): ";
	    getline(cin, ch);
	}
	if ((ch == "Y") || (ch == "y") || (ch == "N") || (ch == "n"))
	{
		if ((ch == "Y") || (ch == "y"))
		{
		    cout << "Enter your Round Trip Air-Fare: $";
		    cin >> fare;
		    fare1 = inputValidation(fare, 0);
		    toal_expenses += fare1;
		    return fare1;
		}
		if ((ch == "N") || (ch == "n"))
		{
			fare = 0;
			total_expenses += fare;
			return fare;
		}
	}
}