#include<iostream>
using namespace std;

int main()
{
	double pallet_weight, pallet_widgets_weight, no_widgets, widgets_weight;
	const double widget_weight = 12.5;
	cout << "Weight of Pallet: ";
	cin >> pallet_weight;
	cout << "Weight of Pallet With Widget(s) stacked on it:";
	cin >> pallet_widgets_weight;
	widgets_weight = pallet_widgets_weight - pallet_weight;
	no_widgets = widgets_weight / widget_weight;
	cout << "No. of Widgets stacked on pallet is/are: " << no_widgets << endl;
	return 0;
}
	
