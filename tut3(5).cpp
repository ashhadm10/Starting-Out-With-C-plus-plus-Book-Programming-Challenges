#include<iostream>
using namespace std;

int main()
{
	double males, females, total;
	double percentage_males, percentage_females;
	cout << "Enter No. of Male Students in Class: ";
	cin >> males;
	cout << "Enter No. of Female Students in Class: ";
	cin >> females;
	total = males + females;
	percentage_males = (males / total) * 100;
	percentage_females = (females / total) * 100;
	cout << "Percentage of Males in Class is: " << percentage_males << "%." << endl;
	cout << "Percentage of Females in Class is: " << percentage_females << "%." << endl;
	return 0;
}