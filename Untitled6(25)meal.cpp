void meal(double &total_days, double &time_departure, double &time_arrival, double &total_expenses, double &total_allowable_expenses, double & total_reimbursed_expenses, double &amount_saved)
{
	double dep_b_expense, dep_b_expense1, dep_b_expense11, dep_l_expense, dep_l_expense1, dep_l_expense11, dep_d_expense, dep_d_expense1, dep_d_expense11;
	double arr_b_expense, arr_b_expense1, arr_b_expense11, arr_l_expense, arr_l_expense1, arr_l_expense11, arr_d_expense, arr_d_expense1, arr_d_expense11;
	double b_expense, b_expense2, l_expense, l_expense2, d_expense, d_expense2;
	static double  b_expense1 = 0, l_expense1 = 0, d_expense1 = 0, m_amount;
	    for (int i = 1; i <= total_days; i++)
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
		m_amount = b_expense1 + dep_b_expense1 + arr_b_expense1 + l_expense1 + dep_l_expense1 + arr_l_expense1 + d_expense1 + dep_d_expense1 + arr_d_expense1);
		cout << "Total Meal Amount is: $" << m_amount << endl;
}