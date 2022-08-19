#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int noSpoolsOrdered();
int noSpoolsInStock();
double ShippingHandlingFees();
void Display(int, int, double);
void noSpoolsShip(int);
void noSpoolsBackorder(int, int);
double SubTotalShipped(int);
void ShippingHandlingFeesDisplay(double, int);
double Total(double, double, int);

int main()
{
	int spools_ordered, spools_backorder, spools_stock;
	double sub_total, sh_f, total;
	cout << setprecision(2) << fixed << showpoint;
	spools_ordered = noSpoolsOrdered();
	spools_stock = noSpoolsInStock();
	sh_f = ShippingHandlingFees();
	Display(spools_stock, spools_ordered, sh_f);
	noSpoolsBackorder(spools_stock, spools_ordered);
	noSpoolsShip(spools_stock);
	sub_total = SubTotalShipped(spools_stock);
	ShippingHandlingFeesDisplay(sh_f, spools_stock);
	Total(sub_total, sh_f, spools_stock);
	return 0;
}

int noSpoolsOrdered()
{
	int n_ordered;
	cout << "Enter No. of Spools Ordered: ";
	cin >> n_ordered;
	while (n_ordered < 1)
	{
		cout << "Amount of Spools less than 1 can't be Ordered!!" << endl;
		cout << "Enter No. of Spools Ordered Again: ";
	    cin >> n_ordered;
	}
	return n_ordered;
}

int noSpoolsInStock()
{
	int n_stocked;
	cout << "Enter No. of Spools in Stock: ";
	cin >> n_stocked;
	while (n_stocked < 0)
	{
		cout << "Spools in Stock can't be less than 0!!" << endl;
		cout << "Enter No. of Spools in Stock Again: ";
	    cin >> n_stocked;
	}
	return n_stocked;
}

double ShippingHandlingFees()
{
	double sh_fees;
	string op;
	cout << "Are There any Special Shipping and Handling Charges? ('y' for yes and 'n for no'): ";
	cin >> op;
	if (op == "y" || op == "Y" || op == "n" || op == "N")
	{
		if (op == "y" || op == "Y")
		{
		    cout << "Enter The Special Shipping and Handling Charges per Spool: $";
		    cin >> sh_fees;
		    while (sh_fees < 0)
		    {
			    cout << "Special Shipping and Handling Charges can't be Less than 0!!" << endl;
			    cout << "Enter The Special Shipping and Handling Charges per Spool Again: $";
		        cin >> sh_fees;  
	 	    }
	 	}
	 	if (op == "n" || op == "N")
		{
		    sh_fees = 0;
		}
	}
	else
	{
		while (op != "y" || op != "Y" || op != "n" || op != "N")
		cout << "Enter Valid Answer!!" << endl;
		cout << "Are There any Special Shipping and Handling Charges? ('y' for yes and 'n for no'): ";
	    cin >> op;
	    if (op == "y" || op == "Y" || op == "n" || op == "N")
	    {
		    if (op == "y" || op == "Y")
		    {
		        cout << "Enter The Special Shipping and Handling Charges per Spool: $";
		        cin >> sh_fees;
		        while (sh_fees < 0)
		        {
			        cout << "Special Shipping and Handling Charges can't be Less than 0!!" << endl;
			        cout << "Enter The Special Shipping and Handling Charges per Spool Again: $";
		            cin >> sh_fees;  
	 	        }
	 	    }
	 	    if (op == "n" || op == "N")
		    {
		 	    sh_fees = 10;
		    }
	    }
	}
	return sh_fees;	
}

void Display(int n_stocked, int n_ordered, double sh_fees)
{
	cout << "No. of Spools Ordered: " << n_ordered << endl;
	cout << "No. of Spools in Stock: " << n_stocked << endl;  
	cout << "Special Charges for Shipping: $" << sh_fees << endl;
}
void noSpoolsBackorder(int n_stocked, int n_ordered)
{
	int b_ordered;
	b_ordered = n_ordered-n_stocked;
	cout << "No. of Spools on Backorder are: " << b_ordered << endl;
}

void noSpoolsShip(int n_stocked)
{
	cout << "No. of Spools Ready to Ship from Current Stock is: " << n_stocked << endl;
}

double SubTotalShipped(int n_stocked)
{
	double s_total;
	s_total = n_stocked * 100;
	cout << "Price Per Spool: $100" << endl; 
	cout << "Subtotal of the Portion Ready to be Shipped is: $" << s_total << endl;
	return s_total;
}

void ShippingHandlingFeesDisplay(double sh_fees, int n_stocked)
{
	double n_stocked1 = static_cast<double>(n_stocked);
	cout << "Shipping and Handling Fees: $" << sh_fees * n_stocked1 << endl;
}

double Total(double subtotal, double sh_fees, int n_stocked)
{
	double t, n_stocked1;
	n_stocked1 = static_cast<double>(n_stocked);
	t = subtotal + (sh_fees * n_stocked1);
	cout << "Total of The Order Ready to be Shipped is: $" << t << endl;
	return t;
}