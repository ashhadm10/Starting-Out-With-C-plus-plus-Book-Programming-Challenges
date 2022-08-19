


double timeArrival()
{
	double t_arr, t_arr1;
	cout << "Enter Time Of Arrival: ";
	cin >> t_arr;
	while ((t_arr > 25) || (t_arr - t_arr1<int>(t_arr) > 0.59))
	{
		cout << "Invalid Time Of Arrival!!" << endl;
	    cout << "Enter Time Of Arrival Again: ";
	    cin >> t_arr;
	}
	return t_arr;
}