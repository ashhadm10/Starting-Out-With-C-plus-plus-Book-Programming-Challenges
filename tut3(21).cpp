#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	const double PERSON_AVERAGE_EATS = 4;
	const double PI = 3.14159, AREA_OF_SLICE = 14.125;	
	double diameter, radius, area, total_area, no_pizzas, no_pieces;
	double no_people;
	cout << "Enter Number of People attending the Party: ";
	cin >> no_people;
	cout << "Enter Diameter of Pizza's to be Ordered: ";
	cin >> diameter;
	radius = diameter / 2;
	area = PI * (pow(radius, 2));    // Area of Ordered Pizzas
	no_pieces = no_people* PERSON_AVERAGE_EATS;
	total_area = no_pieces * AREA_OF_SLICE;   // Area of Pizzas Consumed by People 
	no_pizzas = total_area / area;
	cout << setprecision(1) << fixed;
	cout << "No. of Pizzas recuired for " << no_people << " is/are: " << no_pizzas << endl;
	return 0;                                                                         
}
	
	
	
	
