#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double length_row, space_epa, space_bw_vines, no_vines;   //epa = End Post Assembly , bw = between
	cout << "Enter Length of Row(in ft): ";
	cin >> length_row;
	cout << "Enter Amount of Space used by an End-Post Assembly(in ft): ";
	cin >> space_epa;
	cout << "Enter Amount of Space between the Vines(in ft): ";
	cin >> space_bw_vines;
	no_vines = (length_row - (2 * space_epa)) / space_bw_vines;
	cout << setprecision(1) << fixed;
	cout << "No. of GrapeVines that will fit in each Row: " << no_vines << endl;
	return 0;	
}