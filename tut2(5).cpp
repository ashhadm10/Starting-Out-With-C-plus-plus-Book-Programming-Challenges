#include <iostream>
using namespace std;

int main()
{
	double num1 = 28, 
	       num2 = 32,
	       num3 = 37,
	       num4 = 24,
	       num5 = 33,
	       sum,
	       average;
	
	sum = num1 + num2 + num3 + num4 + num5;
	average = sum/5;
	 
	cout << "Average of " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << " and " << num5 << " is: " << average << endl;
	return 0;
}
	