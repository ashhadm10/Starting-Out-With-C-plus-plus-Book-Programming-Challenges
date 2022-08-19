


double inputValidation(double value_to_be_checked, int range)
{
	while (value_to_be_checked < range)
	{
		cout << value_to_be_checked << " can't be less than " << range << "!!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>, '\n');
		cout << "Enter " << value_to_be_checked << " Again: ";
		cin >> value_to_be_checked;
	}
	return value_to_be_checked;
}