#include <iostream>
using namespace std;

int main()
{
	double p_item1 = 15.95,
	       p_item2 = 24.95,
	       p_item3 = 6.95,
	       p_item4 = 12.95,
	       p_item5 = 3.95,
	       subtotal, 
	       salestax,
		   total;
	
	subtotal = p_item1 + p_item2 + p_item3 + p_item4 + p_item5;
	salestax = subtotal * 0.07;
	total = salestax + subtotal;
	
	cout << "Price of Item 1 is: $" << p_item1 << endl;
	cout << "Price of Item 2 is: $" << p_item2 << endl;
	cout << "Price of Item 3 is: $" << p_item3 << endl;
	cout << "Price of Item 4 is: $" << p_item4 << endl;
	cout << "Price of Item 5 is: $" << p_item5 << endl;   
	cout << "Sub-Total is: $" << subtotal << endl;
	cout << "Sales Tax is: $" << salestax << endl;
	cout << "Total is: $" << total << endl;
	return 0;
}