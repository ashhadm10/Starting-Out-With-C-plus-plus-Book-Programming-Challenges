


double timeDeparture()
{
	double t_dep, t_dep1;
	cout << "Enter Both 'The Time Of Arrival' & 'The Time Of Departure'";
	cout << " in (24hrs.mins) Format (i.e: 06:00 pm wouldbe written as ";
	cout << "18.00): ";
	cout << "Enter Time Of Departure: ";
	cin >> t_dep;
	while (t_dep > 25 || t_dep - t_dep1<int>(t_dep) > 0.59)
	{
		cout << "Invalid Time Of Departure!!" << endl;
	    cout << "Enter Time Of Departure Again: ";
	    cin >> t_dep;
	}
	return t_dep;
}