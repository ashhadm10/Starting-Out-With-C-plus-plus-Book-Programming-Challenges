#include<iostream>
using namespace std;

int main()
{
	double fahrenheit;
	for (double i = 0; i <= 20; i++)
	{
	    fahrenheit = ((1.8 * i) + 32.00);
	    cout << i << " celsius is equivalent to " << fahrenheit << " fahrenheit." << endl;
	}
	return 0;
}