#include <iostream>
using namespace std;

int main()
{
	int total_surveyed = 16500;
	int one_or_more, citrus_flavoured;
	one_or_more = total_surveyed * 0.15;
	citrus_flavoured = one_or_more * 0.58;
	cout << "Approx. No. of Customers who Purchase one or more Energy Drinks per Week: " << one_or_more << endl;
	cout << "Approx. No. of Customers who prefer Citrus-Flavoured Energy Drinks: " << citrus_flavoured << endl;
	return 0;
}