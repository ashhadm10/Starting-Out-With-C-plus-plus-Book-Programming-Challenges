#include<iostream>
#include<iomanip>
using namespace std;

double celsius(double);

int main()
{
	double cel, fahrenheit;
	for (fahrenheit = 0; fahrenheit <= 20; fahrenheit++)
	{
		cel = celsius(fahrenheit);
		cout << setprecision(2) << fixed << showpoint;
		cout << fahrenheit << " fahrenheit = " << cel << " celsius." << endl;
	}
	return 0;
}

double celsius(double f)
{
	double c;
	c = (0.55555555 * (f - 32));
	return c;
}