#include<iostream>
using namespace std;
int main()
{
	const double CALORIES_BURNED_PER_MINUTE = 3.6;
	double calories_burned_5_min = 5 * CALORIES_BURNED_PER_MINUTE;
	int min = 5;
	for (int i = 1; i <= 6; i++)
	{
		cout << "Calories Burned after " << min << " minutes are: " << calories_burned_5_min << " calories" << endl;
		min += 5;
		calories_burned_5_min += 18;
	}
	return 0;
}