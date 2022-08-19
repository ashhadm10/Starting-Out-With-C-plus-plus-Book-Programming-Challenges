#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	const double child_ticket_price = 6.00;
	const double adult_ticket_price = 10.00;
	double gross_profit, net_profit, amount_distributor;
	string movie_name;
	int adult_tickets, child_tickets;
	cout << "Enter Name of Movie: ";
	getline(cin, movie_name);
	cout << "Enter No. of Adult Ticket's Sold: ";
	cin >> adult_tickets;
	cout << "Enter No. of Child Ticket's Sold: ";
	cin >> child_tickets;
	gross_profit = ((adult_tickets * adult_ticket_price) + (child_tickets * child_ticket_price));
	net_profit = gross_profit * 0.2;
	amount_distributor = gross_profit - net_profit;
	cout <<  fixed << setprecision(2);
	cout << left << "Movie Name:                                " << setw(0) << '"' << movie_name << '"' << left << endl;
	cout << left << "Adult Tickets Sold:                           " << setw(3) << right << adult_tickets << endl;
	cout << left << "Child Tickets Sold:                           " << setw(3) << right << child_tickets << endl;
	cout << left << "Gross Box Office Profit:                     " << "$" << setw(6) << right<< gross_profit << endl;
	cout << left << "Net Box Office Profit:                       " << "$" << setw(6) << right << net_profit << endl;
	cout << left << "Amount Paid to Distributor:                  " << "$" << setw(6) << right << amount_distributor << endl;
	return 0;
}
	
	
	