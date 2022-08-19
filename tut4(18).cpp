#include<iostream>
using namespace std;
int main()
{
	double total_calories, fat_grams, fat_calories, percentage_fatcalories, thirty_percent;
	cout << "Enter No. of Calories in the Food: ";
	cin >> total_calories;
	cout << "Enter No. of Fat Grams in the Food: ";
	cin >> fat_grams;
	fat_calories = fat_grams * 9;
	percentage_fatcalories = (fat_calories / total_calories) * 100;
	thirty_percent = total_calories * 0.3;
	if ((total_calories < 0) ||  (fat_grams < 0))
	{
		cout << "'Total Calories' or 'Fat Grams' cannot be less than 0. Rerun the Program and Enter Valid Values!!" << endl;
	}
	else
	{
		if (fat_calories < thirty_percent)
		{
			cout << "Calories From Fat are: " << fat_calories << endl;
			cout << "Percentage of Fat Calories: " << percentage_fatcalories << endl;
			cout << "Food is Low in Fat!!" << endl;
		}
		else 
		{
			cout << "Calories From Fat are: " << fat_calories << endl;
			cout << "Percentage of Fat Calories: " << percentage_fatcalories << endl;
		}
	}
	return 0;
}