#include<iostream>
#include<iomanip>
#include<string>
#include<limits>
using namespace std;

double inputValidation(double, int);
double totalDays();
double timeDeparture();
double timeArrival();
double roundTripAirFare(double &);
double carRentals(double &);
double privateVehicle(double &);
double parkingFees(double, double, double, double &, double &, double &, double &);
double taxiFees(double, double, double, double &, double &, double &, double &);
double conferenceSeminarRegFees(double &);
double hotelExpenses(double, double, double, double &, double &, double &, double&);
void meal(double &, double &, double &, double &, double &, double &, double &);
void Display(double &, double &, double &, double &);

int main()
{
	double total_days, time_arrival, time_departure, roundtripairfare, carrentalsamount, milescost;
	double total_expenses = 0, total_allowable_expenses = 0, total_reimbursed_expenses = 0, amount_saved = 0;
	double parkingfees, t_r_e, total_r_e, additionalparkingfees, taxifees, additionaltaxifees, conferenceseminarregfees;
	double hotel_expenses, ahe, meal_amount;
	
	total_days = totalDays();
	
	time_departure = timeDeparture();
	
	time_arrival = timeArrival();
	
	roundtripairfare = roundTripAirFare(total_expenses);
	
	carrentalsamount = carRentals(total_expenses);
	
	milescost = privateVehicle(total_expenses);
	
	parkingfees = parkingFees(milescost, total_days, additionalparkingfees, total_reimbursed_expenses,
	                          total_allowable_expenses, total_expenses, amount_saved);
	                          
	t_r_e = total_reimbursed_expenses;
	
	
	
	taxifees = taxiFees(total_days, additionaltaxifees, t_r_e, total_reimbursed_expenses,
	                    total_allowable_expenses, total_expenses, amount_saved);
	                    
	total_r_e = total_reimbursed_expenses;
	
	conferenceseminarregfees = conferenceSeminarRegFees(total_expenses);
	
	hotel_expenses = hotelExpenses(total_days, ahe, total_r_e, total_reimbursed_expenses, 
	                              total_allowable_expenses, total_expenses, amount_saved);

    meal(total_days, time_departure, time_arrival, total_expenses, total_allowable_expenses, total_reimbursed_expenses, amount_saved);
	
	Display(total_expenses, total_allowable_expenses, total_reimbursed_expenses, amount_saved);
	
	return 0;
}

double inputValidation(double value_to_be_checked, int range)
{
	while (value_to_be_checked < range)
	{
		cout << value_to_be_checked << " can't be less than " << range << "!!" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Enter " << value_to_be_checked << " Again: ";
		cin >> value_to_be_checked;
	}
	return value_to_be_checked;
}

double totalDays()
{
	double n_days, t_days;
	cout << "Enter Total No. of Days Spent for the Whole Trip: ";
	cin >> t_days;
	n_days = inputValidation(t_days, 1);
	return n_days;	
}

double timeDeparture()
{
	double t_dep, t_dep1;
	cout << "Enter Both 'The Time Of Arrival' & 'The Time Of Departure'";
	cout << " in (24hrs.mins) Format (i.e: 06:00 pm wouldbe written as ";
	cout << "18.00): " << endl;
	cout << "Enter Time Of Departure: ";
	cin >> t_dep;
	while ((t_dep > 23) || ((t_dep - (t_dep1 = static_cast<int>(t_dep)) > 0.59)))
	{
		cout << "Invalid Time Of Departure!!" << endl;
	    cout << "Enter Time Of Departure Again: ";
	    cin >> t_dep;
	}
	return t_dep;
}

double timeArrival()
{
	double t_arr, t_arr1;
	cout << "Enter Time Of Arrival: ";
	cin >> t_arr;
	while ((t_arr > 25) || ((t_arr - (t_arr1 = static_cast<int>(t_arr)) > 0.59)))
	{
		cout << "Invalid Time Of Arrival!!" << endl;
	    cout << "Enter Time Of Arrival Again: ";
	    cin >> t_arr;
	}
	return t_arr;
}

double roundTripAirFare(double &totalexpenses)
{
	string ch;
	double fare, fare1, f;
	cout << "Do You Have Any Round Trip Air-Fare?(Y/N): ";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, ch);
	while ( ! ((ch == "Y") || (ch == "y") || (ch == "N") || (ch == "n")))
	{
		cout << "Enter A Valid Answer!!" << endl;
		cout << "Do You Have Any Round Trip Air-Fare?(Y/N): ";
		cin.clear();
	    cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    getline(cin, ch);
	}
	if ((ch == "Y") || (ch == "y") || (ch == "N") || (ch == "n"))
	{
		if ((ch == "Y") || (ch == "y"))
		{
		    cout << "Enter your Round Trip Air-Fare: $";
		    cin >> fare;
		    fare1 = inputValidation(fare, 0);
		    cout << "Total Round Trip Air-Fare: $" << fare1 << endl;
		    totalexpenses += fare1;
		    f = fare1;
		}
		if ((ch == "N") || (ch == "n"))
		{
			fare = 0;
			cout << "Total Round Trip Air-Fare: $" << fare << endl;
			totalexpenses += fare;
			f = fare;
		}
	}
	return f;
}

double carRentals(double &totalexpenses)
{
	string ch1;
	double c_r, c_r1, cr;
	cin.clear();
	cin.ignore();
	cout << "Do You Have Any Amount of Car Rentals?(Y/N): ";
	getline(cin, ch1);
	while ( ! ((ch1 == "Y") || (ch1 == "y") || (ch1 == "N") || (ch1 == "n")))
	{
		cout << "Enter A Valid Answer!!" << endl;
		cin.clear();
	    cin.ignore();
		cout << "Do You Have Any Amount of Car Rentals?(Y/N): ";
	    getline(cin, ch1);
	}
	if ((ch1 == "Y") || (ch1 == "y") || (ch1 == "N") || (ch1 == "n"))
	{
		if ((ch1 == "Y") || (ch1 == "y"))
		{
			cin.clear();
	        cin.ignore();
		    cout << "Enter your Amount of Car Rentals: $";
		    cin >> c_r;
		    c_r1 = inputValidation(c_r, 0);
		    cout << "Total Amount Of Car Rentals: $" << c_r1 << endl;
		    totalexpenses += c_r1;
		    cr = c_r1;
		}
		if ((ch1 == "N") || (ch1 == "n"))
		{
			c_r = 0;
			cout << "Total Amount Of Car Rentals: $" << c_r << endl;
			totalexpenses += c_r;
			cr = c_r;
		}
	}
	return cr;
}

double privateVehicle(double &totalexpenses)
{
	string ch2;
	double m, m1, v_expense, v_e;
	cin.clear();
	cin.ignore();
	cout << "Have You Used Private Vehicle?(Y/N): ";
	getline(cin, ch2);
	while ( ! ((ch2 == "Y") || (ch2 == "y") || (ch2 == "N") || (ch2 == "n")))
	{
		cout << "Enter A Valid Answer!!" << endl;
		cin.clear();
	    cin.ignore();
		cout << "Have You Used Private Vehicle?(Y/N): ";
	    getline(cin, ch2);
	}
	if ((ch2 == "Y") || (ch2 == "y") || (ch2 == "N") || (ch2 == "n"))
	{
		if ((ch2 == "Y") || (ch2 == "y"))
		{
			cin.clear();
	        cin.ignore();
		    cout << "Enter Total Mile(s) Driven on Private Car: ";
		    cin >> m;
		    m1 = inputValidation(m, 0);
		    v_expense = m1 * 0.27;
		    cout << "Total Private Vehicle Expense: $" << v_expense << endl;
		    totalexpenses += v_expense;
		    v_e = v_expense;
		}
		if ((ch2 == "N") || (ch2 == "n"))
		{
			v_expense = 0;
			cout << "Total Private Vehicle Expense: $" << v_expense << endl;
			totalexpenses += v_expense;
			v_e = v_expense;
		}
	}
	return v_e;
}

double parkingFees(double vehicle_ex, double n_d, double apf, double &total_reimbursed_expenses,
                    double &total_allowable_expenses, double &totalexpenses, double &amountsaved)
{
	double p_fees, p_fees1, p_fees2, p_fees3 = 0;
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
	        total_allowable_expenses += p_fees1;
	        amountsaved += (6 - p_fees1);
	        p_fees3 += p_fees1;
	    }
	    cout << "Total Amount Of Parking Fees For " << n_d << " Days is: $" << p_fees3 << endl;
	    apf = total_reimbursed_expenses;
	    cout << "Total Additional Parking Fees (Other then the Company Allows) is: $" << apf << endl;
		totalexpenses = total_allowable_expenses + total_reimbursed_expenses;
	}
	return p_fees1;
}

double taxiFees(double no_days, double atf, double tre, double &total_reimbursed_expenses,
                 double &total_allowable_expenses, double &totalexpenses, double &amountsaved)
{
	string choi;
	double t_fees, t_fees1, t_fees2, t_fees3 = 0;
	cout << "Have You Used Taxi?(Y/N): ";
	getline(cin, choi);
	while ( ! ((choi == "Y") || (choi == "y") || (choi == "N") || (choi == "n")))
	{
		cout << "Enter A Valid Answer!!" << endl;
		cin.clear();
		cout << "Have You Used Taxi?(Y/N): ";
	    getline(cin, choi);
	}
	if ((choi == "Y") || (choi == "y") || (choi == "N") || (choi == "n"))
	{
		if ((choi == "Y") || (choi == "y"))
		{
	        for (int i = 1; i <= no_days; i++)
	        {
		        cout << "Enter Your Taxi Fees of Day No." << i << ": $";
	            cin >> t_fees;
	            t_fees1 = inputValidation(t_fees, 0);
	            if (t_fees1 > 10)
	            {
	                t_fees2 = t_fees1 - 10;
	                total_reimbursed_expenses += t_fees2;
	            }
                total_allowable_expenses += t_fees1;
                amountsaved += (10 - t_fees1);
                t_fees3 += t_fees1;
            }
            if ((choi == "N") || (choi == "n"))
		    {
			    t_fees = 0;
			    cout << "Total Taxi Expense: $" << t_fees << endl;
			    totalexpenses += t_fees;
			    t_fees3 += t_fees;
		    }
		}
    }
    cout << "Total Amount Of Taxi Fees is: $" << t_fees3 << endl;
	atf = total_reimbursed_expenses - tre;
	cout << "Total Additional Taxi Fees (Other then the Company Allows) is: $" << atf << endl;
	totalexpenses = total_allowable_expenses + total_reimbursed_expenses;
	return t_fees1;	
}

double conferenceSeminarRegFees(double & totalexpenses)
{
	string choose;
	double csrf, csrf1, c;
	cout << "Do You Have Any Conference or Seminar Registration Fees?(Y/N): ";
	cin.clear();
	getline(cin, choose);
	while ( ! ((choose == "Y") || (choose == "y") || (choose == "N") || (choose == "n")))
	{
		cout << "Enter A Valid Answer!!" << endl;
		cin.clear();
		cout << "Do You Have Any Conference or Seminar Registration Fees?(Y/N): ";
	    getline(cin, choose);
	}
	if ((choose == "Y") || (choose == "y") || (choose == "N") || (choose == "n"))
	{
		if ((choose == "Y") || (choose == "y"))
		{
		    cout << "Enter your Amount of Conference or Seminar Registration Fees: $";
		    cin >> csrf;
		    csrf1 = inputValidation(csrf, 0);
		    cout << "Total Amount of Conference or Seminar Registration Fees is: $" << csrf1 << endl;
		    totalexpenses += csrf1;
		    c = csrf1;
		}
		if ((choose == "N") || (choose == "n"))
		{
			csrf = 0;
			cout << "Total Amount of Conference or Seminar Registration Fees is: $" << csrf << endl;
			totalexpenses += csrf;
			c = csrf;
		}
	}
	return c;
}

double hotelExpenses(double no_d, double ahe, double total_r_e, double &total_reimbursed_expenses, double &total_allowable_expenses, double &total_expenses, double &amount_saved)
{
	double h_expenses, h_expenses1, h_expenses2;
	for (int i = 1; i <= no_d; i++)
	{
		cout << "Enter Your Hotel Expense of Day No." << i << ": $";
	    cin >> h_expenses;
	    h_expenses1 = inputValidation(h_expenses, 0);
	    if (h_expenses1 > 90)
	    {
	        h_expenses2 = h_expenses1 - 90;
	        total_reimbursed_expenses += h_expenses2;
	    }
        total_allowable_expenses += 90;
        amount_saved += (90 - h_expenses1);
    }
	ahe = total_reimbursed_expenses - total_r_e;
	cout << "Total Additional Hotel Expense (Other then the Company Allows) is: $" << ahe << endl;
	total_expenses = total_allowable_expenses + total_reimbursed_expenses;
	return h_expenses1;	
}

void meal(double &total_days, double &time_departure, double &time_arrival, double &total_expenses, double &total_allowable_expenses, double & total_reimbursed_expenses, double &amount_saved)
{
	double dep_b_expense, dep_b_expense1, dep_b_expense11, dep_l_expense, dep_l_expense1, dep_l_expense11, dep_d_expense, dep_d_expense1, dep_d_expense11;
	double arr_b_expense, arr_b_expense1, arr_b_expense11, arr_l_expense, arr_l_expense1, arr_l_expense11, arr_d_expense, arr_d_expense1, arr_d_expense11;
	double b_expense, b_expense11, l_expense, l_expense11, d_expense, d_expense11;
	static double  b_expense1 = 0, l_expense1 = 0, d_expense1 = 0, m_amount;
	for (int i = 1; i <= (total_days - 1); i++)
	{
	    if (i == 1)
		{ 	
		    if (time_departure < 7.00)
	        {
		        cout << "Your Time of Departure was BEFORE 7am!!" << endl;
		        cout << "Enter the Amount of Breakfast For Day no." << i << ": $";
		        cin >> dep_b_expense;
		        dep_b_expense1 = inputValidation(dep_b_expense, 0);
		        if (dep_b_expense1 > 9)
		        {
			        dep_b_expense11 = dep_b_expense1 - 9;
			        total_reimbursed_expenses += dep_b_expense11;
		        }
			    total_allowable_expenses += 9;	
			    amount_saved += (9 - dep_b_expense1);
			    total_expenses = total_allowable_expenses + total_reimbursed_expenses;	
			    continue;
	        }
	        if (time_departure > 7 && time_departure < 12.00)
	        {
		        cout << "Your Time of Departure was BEFORE 12 noon!!" << endl;
		        cout << "Enter the Amount of Lunch For Day no." << i << ": $";
		        cin >> dep_l_expense;
		        dep_l_expense1 = inputValidation(dep_l_expense, 0);
		        if (dep_l_expense1 > 12)
		        {
			        dep_l_expense11 = dep_l_expense1 - 12;
			        total_reimbursed_expenses += dep_l_expense11;
		        }
			    total_allowable_expenses += 12;	
			    amount_saved += (12 - dep_l_expense1);
			    total_expenses = total_allowable_expenses + total_reimbursed_expenses;	
			    continue;
	        }
	        if (time_departure > 12 && time_departure < 18.00)
	        {
		        cout << "Your Time of Departure was BEFORE 6pm!!" << endl;
		        cout << "Enter the Amount of Dinner For Day no." << i << ": $";
		        cin >> dep_d_expense;
		        dep_d_expense1 = inputValidation(dep_d_expense, 0);
		        if (dep_d_expense1 > 12)
		        {
			        dep_d_expense11 = dep_d_expense1 - 16;
			        total_reimbursed_expenses += dep_d_expense11;
		        }
			    total_allowable_expenses += 16;	
			    amount_saved += (16 - dep_d_expense1);
			    total_expenses = total_allowable_expenses + total_reimbursed_expenses;	
			    continue;
	        }
	    }
	    if (i == total_days)
		{ 	
		    if (time_arrival > 8.00)
	        {
		        cout << "Your Time of Arrival is AFTER 8am!!" << endl;
		        cout << "Enter the Amount of Breakfast For Day no." << i << ": $";
		        cin >> arr_b_expense;
		        arr_b_expense1 = inputValidation(arr_b_expense, 0);
		        if (arr_b_expense1 > 9)
		        {
			        arr_b_expense11 = arr_b_expense1 - 9;
			        total_reimbursed_expenses += arr_b_expense11;
		        }
			    total_allowable_expenses += 9;	
			    amount_saved += (9 - arr_b_expense1);
			    total_expenses = total_allowable_expenses + total_reimbursed_expenses;	
			    continue;
	        }
	        if (time_arrival > 8.00 && time_arrival < 7)
	        {
		        cout << "Your Time of Departure was BEFORE 12 noon!!" << endl;
		        cout << "Enter the Amount of Lunch For Day no." << i << ": $";
		        cin >> arr_l_expense;
		        arr_l_expense1 = inputValidation(arr_l_expense, 0);
		        if (arr_l_expense1 > 12)
		        {
			        arr_l_expense11 = arr_l_expense1 - 12;
			        total_reimbursed_expenses += arr_l_expense11;
		        }
			    total_allowable_expenses += 12;	
			    amount_saved += (12 - arr_l_expense1);
			    total_expenses = total_allowable_expenses + total_reimbursed_expenses;	
			    continue;
	        }
	        if (time_arrival > 18.00)
	        {
		        cout << "Your Time of Departure was BEFORE 6pm!!" << endl;
		        cout << "Enter the Amount of Dinner For Day no." << i << ": $";
		        cin >> arr_d_expense;
		        arr_d_expense1 = inputValidation(arr_d_expense, 0);
		        if (arr_d_expense1 > 12)
		        {
			        arr_d_expense11 = arr_d_expense1 - 16;
			        total_reimbursed_expenses += arr_d_expense11;
		        }
			    total_allowable_expenses += 16;	
			    amount_saved += (16 - arr_d_expense1);
			    total_expenses = total_allowable_expenses + total_reimbursed_expenses;	
			    continue;
	        }
	    }
	    cout << "Enter the Amount of Breakfast For Day No." << i << ": $";
		cin >> b_expense;
	    b_expense1 = inputValidation(b_expense, 0);
        if (b_expense1 > 9)
        {
			b_expense11 = b_expense1 - 9;
			total_reimbursed_expenses += b_expense11;
	    }
        else
        {
			amount_saved += (9 - b_expense1);
		}
		total_allowable_expenses += 9;	
	    cout << "Enter the Amount of Lunch For Day No." << i << ": $";
		cin >> l_expense;
		l_expense1 = inputValidation(l_expense, 0);
		if (l_expense1 > 12)
		{
			l_expense11 = l_expense1 - 12;
			total_reimbursed_expenses += l_expense11;
		}
		else
		{
			amount_saved += (12 - l_expense1);
		}
		total_allowable_expenses += 12;	
		l_expense1 += l_expense1;
        cout << "Enter the Amount of Dinner For Day No." << i << ": $";
		cin >> d_expense;
	    d_expense1 = inputValidation(d_expense, 0);
		if (d_expense1 > 12)
		{
			d_expense11 = d_expense1 - 16;
			total_reimbursed_expenses += d_expense11;
		}
		else
		{
			amount_saved += (16 - d_expense1);
		}
		total_allowable_expenses += 16;	
		d_expense1 += d_expense1;
	}
	total_expenses = total_allowable_expenses + total_reimbursed_expenses;
	m_amount = (b_expense1 + dep_b_expense1 + arr_b_expense1 + l_expense1 + dep_l_expense1 + arr_l_expense1 + d_expense1 + dep_d_expense1 + arr_d_expense1);
	cout << "Total Meal Amount is: $" << m_amount << endl;
}

void Display(double &total_expenses, double &total_allowable_expenses, double &total_reimbursed_expenses, double &amount_saved)
{
	if (total_expenses < total_allowable_expenses)
	{
		cout << "Total Expense is Smaller than Total Allowable Expense!!!" << endl;
		cout << "Total Expenses Of Trip: $" << total_expenses << endl;
		cout << "Total Allowable Expenses(other than Seminar/Conference Registration, Round Trip Air-Fare, Car Rental and Private Vehicle Expense): $" << total_allowable_expenses << endl;
		cout << "Total Amount Saved: $" << amount_saved << endl;
	}
	else if (total_expenses > total_allowable_expenses)
	{
		cout << "Total Expense is Greater than Total Allowable Expense!!!" << endl;
		cout << "Total Expenses Of Trip: $" << total_expenses << endl;
		cout << "Total Allowable Expenses(other than Seminar/Conference Registration, Round Trip Air-Fare, Car Rental and Private Vehicle Expense): $" << total_allowable_expenses << endl;
		cout << "Total Reimbursed Expense Towards Company: $" << total_reimbursed_expenses << endl;
	}
}