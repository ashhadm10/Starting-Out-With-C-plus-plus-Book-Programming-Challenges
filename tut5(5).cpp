#include<iostream>
using namespace std;
int main()
{
	double charges0 = 2500;
	double charges1;
	for (int i = 1; i <= 6; i++)
	{
		charges1 = charges0 * 0.04;
		charges0 += (charges1);
		cout << "Projected Rate for year " << i << " is: $" << charges0 << endl;
		charges1 = 0;
	}
	return 0;
}