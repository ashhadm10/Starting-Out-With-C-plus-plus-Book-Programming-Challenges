#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

double getSales(string);
void findHighest(double, double, double, double, string, string, string, string);

int main()
{
	double sales1, sales2, sales3, sales4;
	string name1, name2, name3, name4;
	cout << "Which Division of the Company you Belong To?: ";
	cin >> name1;
	sales1 = getSales(name1);
	cout << "Which Division of the Company you Belong To?: ";
	cin >> name2;
	while (name2 == name1)
	{
		cout << "Error!! You have Entered this Division Sales Once!!" << endl;
		cout << "Enter The Sales of Division other than " << name1 << ": " << endl;
		cin >> name2;
	}
	sales2 = getSales(name2);
	cout << "Which Division of the Company you Belong To?: ";
	cin >> name3;
	while (name3 == name1 || name3 == name2)
	{
		if (name3 == name1)
		{
		    cout << "Error!! You have Entered this Division Sales Once!!" << endl;
		    cout << "Enter The Sales of Division other than " << name1 << ": " << endl;
		    cin >> name3;
		}
		else if (name3 == name2)
		{
			cout << "Error!! You have Entered this Division Sales Once!!" << endl;
		    cout << "Enter The Sales of Division other than " << name2 << ": " << endl;
		    cin >> name3;
		}
	}
	sales3 = getSales(name3);
	cout << "Which Division of the Company you Belong To?: ";
	cin >> name4;
	while (name4 == name1 || name4 == name2 || name4 == name3)
	{
		if (name4 == name1)
		{
		    cout << "Error!! You have Entered this Division Sales Once!!" << endl;
		    cout << "Enter The Sales of Division other than " << name1 << ": " << endl;
		    cin >> name4;
		}
		else if (name4 == name2)
		{
			cout << "Error!! You have Entered this Division Sales Once!!" << endl;
		    cout << "Enter The Sales of Division other than " << name2 << ": " << endl;
		    cin >> name4;
		}
		else if (name4 == name3)
		{
			cout << "Error!! You have Entered this Division Sales Once!!" << endl;
		    cout << "Enter The Sales of Division other than " << name2 << ": " << endl;
		    cin >> name4;
		}
	}
	sales4 = getSales(name4);
	findHighest(sales1, sales2, sales3, sales4, name1, name2, name3, name4);
	return 0;
}

double getSales(string companys_region)
{
	static double quarterly_s_figures;
	cout << "Enter The Quarterly Sales Figures of " << companys_region << " division: $";
	cin >> quarterly_s_figures;
	while (quarterly_s_figures < 0)
	{
		cout << "Quarterly Sales Figures can't be Less than 0.00$!!" << endl;
		cout << "Enter The Quarterly Sales Figures of " << companys_region << " division Again: $";
	    cin >> quarterly_s_figures;
	}
	return quarterly_s_figures;
}

void findHighest(double division1, double division2, double division3, double division4, string companys_region1, string companys_region2, string companys_region3, string companys_region4)
{
	if (division1 > division2)
	{
		if (division1 > division3)
		{
			if (division1 > division4)
			{
				cout << setprecision(2) << fixed << showpoint;
				cout << companys_region1 << " has the Highest Grossing Sales of $" << division1 << endl;
			}
		}
	}
	if (division2 > division1)
	{
		if (division2 > division3)
		{
			if (division2 > division4)
			{
				cout << setprecision(2) << fixed << showpoint;
				cout << companys_region2 << " has the Highest Grossing Sales of $" << division2 << endl;
			}
		}
	}
	if (division3 > division1)
	{
		if (division3 > division2)
		{
			if (division3 > division4)
			{
				cout << setprecision(2) << fixed << showpoint;
				cout << companys_region3 << " has the Highest Grossing Sales of $" << division3 << endl;
			}
		}
	}
	if (division4 > division1)
	{
		if (division4 > division2)
		{
			if (division4 > division3)
			{
				cout << setprecision(2) << fixed << showpoint;
				cout << companys_region4 << " has the Highest Grossing Sales of $" << division4 << endl;
			}
		}
	}
}