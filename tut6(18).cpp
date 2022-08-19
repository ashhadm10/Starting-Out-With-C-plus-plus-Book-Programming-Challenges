#include<iostream>
#include<iomanip>
using namespace std;

int noGallonsRecquired(double);
double hoursLaborRecquired(double);
double costOfPaint(int, double);
double costOfLabor(double);

int main()
{
	int norooms, nogallons;
	double price_per_gallon, area, hours_labor, cost_paint, labor_charges, total_area = 0, total_cost;
	cout << "Enter Total No. of Rooms to be Painted: ";
	cin >> norooms;
	while (norooms < 1)
	{
		cout << "Error!! No. of Rooms to be Painted Can't be Less than 1!!" << endl;
		cout << "Enter Total No. of Rooms to be Painted Again: ";
	    cin >> norooms;
	}
	for (int i = 1; i <= norooms; i++)
	{
	    cout << "Enter Square Feet of Wall Space in Room No." << i << ": ";
	    cin >> area;
	    while (area < 0)
	    {
		    cout << "Error!! The Area of Each Room can't be less than 0!!" << endl;
		    cout << "Enter Square Feet of Wall Space in Each Room Again: ";
	        cin >> area;
	    }
	    total_area += area;
	}
	cout << "Enter Price of Paint per gallon: $";
	cin >> price_per_gallon;
	while (price_per_gallon < 10.00)
	{
		cout << "Error!! Price of Paint Can't be less than $10.00!!" << endl;
		cout << "Enter Price of Paint per gallon Again: $";
	    cin >> price_per_gallon;
	}
	nogallons = noGallonsRecquired(total_area);
	hours_labor = hoursLaborRecquired(total_area);
	cost_paint = costOfPaint(nogallons, price_per_gallon);
	labor_charges = costOfLabor(hours_labor);
	total_cost = cost_paint + labor_charges;
	cout << "Total Cost: $" << total_cost << endl;
	return 0;	
}

int noGallonsRecquired(double t_a)
{
	int n_gallons = t_a / 110;
	cout << "No. of Gallons of paint Recquired: " << (n_gallons + 1) << endl;
	return (n_gallons + 1);
}

double hoursLaborRecquired(double total_a)
{
	double hrs = (total_a / 110) * 8;
	cout << "The Hours of Labor Recquired: " << hrs << "hrs" << endl;
	return hrs;
}

double costOfPaint(int n_g, double p_p_gallon)
{
	double pr = n_g * p_p_gallon;
	cout << "The Cost of Paint: $" << pr << endl;
	return pr;
}

double costOfLabor(double h)
{
	double p = h * 25.00;
	cout << "Labor Charges: $" << p << endl;
	return p;
}