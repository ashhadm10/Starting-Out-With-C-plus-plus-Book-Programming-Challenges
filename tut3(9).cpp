#include<iostream>
using namespace std;

int main()
{
	double no_cookies, servings_consumed, calories_consumed;
	const double bag_cookies = 30;
	const double servings = 10;
	const double calories = 300;
	cout << "Enter Number of Cookies you Ate: ";
	cin >> no_cookies;
	servings_consumed = (servings / bag_cookies) * no_cookies;
	calories_consumed = servings_consumed * calories;
	cout << "You Consumed " << calories_consumed << " Calories!!!" << endl;
	return 0;
}