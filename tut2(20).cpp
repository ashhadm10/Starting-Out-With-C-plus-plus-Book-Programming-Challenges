#include <iostream>
using namespace std;

int main()
{
	double area_covered_by_gallon = 340, area_wooden_fence = 600;
	int gallons;
	gallons = (2*(area_wooden_fence/area_covered_by_gallon))+1;
	cout << "Gallons of Paint Needed: " << gallons << endl;
	return 0;
}
	