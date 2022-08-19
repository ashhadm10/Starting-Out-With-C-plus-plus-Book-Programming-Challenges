#include<iostream>
using namespace std;

int main()
{
	const double YEN_PER_DOLLAR = 98.93;
	const double EUROS_PER_DOLLAR = 0.74;
	double dollars, yen, euros;
	cout << "Enter Amount in dollars($): ";
	cin >> dollars;
	yen = YEN_PER_DOLLAR * dollars;
	euros = EUROS_PER_DOLLAR * dollars;
	cout << dollars << "$ is equivalent to:" << endl;
	cout << "1. " << yen << " yen." << endl;
	cout << "2. " << euros << " euros." << endl;
	return 0;
}
	