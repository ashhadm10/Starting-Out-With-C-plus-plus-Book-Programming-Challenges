#include <iostream>
using namespace std;

int main()
{
	int purchase = 95;
	float salestax, statesalestax, countrysalestax;
	statesalestax = 95*.04;
	countrysalestax = 95*0.02;
	salestax = statesalestax + countrysalestax;
	cout << "Sales Tax on $95 purchase is $" << salestax << endl;
	return 0;
}