#include<iostream>
using namespace std;

int noEmployees();
int noDays(int);
double averageNoDays(int, int);

int main()
{
	int noemployees, nodays;
	double average;
	noemployees = noEmployees();
	nodays = noDays(noemployees);
	average = averageNoDays(noemployees, nodays);
	cout << "The Average Days that the Employees were Absent are: " << average << " days." << endl;
	return 0;
}

int noEmployees()
{
	int n_emp;
	cout << "Enter No. of Employees in the Company: ";
	cin >> n_emp;
	while (n_emp < 1)
	{
		cout << "Error!! No. of Emploees Can't Be Less than 1!!" << endl;
		cout << "Enter No. of Employees in the Company Again: ";
	    cin >> n_emp;
	}
	return n_emp;
}

int noDays(int n_emp)
{
	int n_days;
	cout << "Enter No. of Days Employees Missed During the Past Year: ";
	cin >> n_days;
	while (n_days)
	{
		cout << "Error!! No. of Days Can't Be Less than 0!!" << endl;
		cout << "Enter No. of Days Employees Missed During the Past Year Again: ";
	    cin >> n_days;
	}
	return n_days;
}

double averageNoDays(int n_emp, int n_days)
{
	double avg, n_emp1, n_days1;
	n_emp1 = static_cast<double>(n_emp);
	n_days1 = static_cast<double>(n_days);
	avg = n_days1 / n_emp1;
	return avg;
}