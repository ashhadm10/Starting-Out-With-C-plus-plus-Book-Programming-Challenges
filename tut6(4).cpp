#include<iostream>
#include<string>
using namespace std;

int getNumAccidents(string);
void findLowest(int, int, int, int, int, string, string, string, string, string);

int main()
{
	string city1, city2, city3, city4, city5;
	int no_accidents1, no_accidents2, no_accidents3, no_accidents4, no_accidents5;
	cout << "Enter the name of the 1st Region: ";
	cin >> city1;
	no_accidents1 = getNumAccidents(city1);
	cout << "Enter the name of the 2nd Region: ";
	cin >> city2;
	no_accidents2 = getNumAccidents(city2);
	cout << "Enter the name of the 3rd Region: ";
	cin >> city3;
	no_accidents3 = getNumAccidents(city3);
	cout << "Enter the name of the 4th Region: ";
	cin >> city4;
	no_accidents4 = getNumAccidents(city4);
	cout << "Enter the name of the 5th Region: ";
	cin >> city5;
	no_accidents5 = getNumAccidents(city5);
	findLowest(no_accidents1, no_accidents2, no_accidents3, no_accidents4, no_accidents5, city1, city2, city3, city4, city5);
	return 0;
}

int getNumAccidents(string name)
{
	int num_accidents;
	cout << "Enter No. of Automobile Accidents reported in " << name << " last year: ";
	cin >> num_accidents;
	while (num_accidents < 0)
	{
		cout << "Number of Accidents can't be less than 0!!!" << endl;
		cout << "Enter No. of Automobile Accidents reported in " << name << " last year Again: ";
	    cin >> num_accidents;
	}
	return num_accidents;
}

void findLowest(int num_accidents1, int num_accidents2, int num_accidents3, int num_accidents4, int num_accidents5, string name1, string name2, string name3, string name4, string name5)
{
	if (num_accidents1 < num_accidents2)
	{
		if (num_accidents1 < num_accidents3)
		{
		    if (num_accidents1 < num_accidents4)
		    {
		    	if (num_accidents1 < num_accidents5)
		    	{
		    		cout << name1 << " had the fewest reported auto-mobile accidents last year, about " << num_accidents1 << endl;
				}
			}
		}
	}
	if (num_accidents2 < num_accidents1)
	{
		if (num_accidents2 < num_accidents3)
		{
		    if (num_accidents2 < num_accidents4)
		    {
		    	if (num_accidents2 < num_accidents5)
		    	{
		    		cout << name2 << " had the fewest reported auto-mobile accidents last year, about " << num_accidents2 << endl;
				}
			}
		}
	}
	if (num_accidents3 < num_accidents1)
	{
		if (num_accidents3 < num_accidents2)
		{
		    if (num_accidents3 < num_accidents4)
		    {
		    	if (num_accidents3 < num_accidents5)
		    	{
		    		cout << name3 << " had the fewest reported auto-mobile accidents last year, about " << num_accidents3 << endl;
				}
			}
		}
	}
	if (num_accidents4 < num_accidents1)
	{
		if (num_accidents4 < num_accidents2)
		{
		    if (num_accidents4 < num_accidents3)
		    {
		    	if (num_accidents4 < num_accidents5)
		    	{
		    		cout << name4 << " had the fewest reported auto-mobile accidents last year, about " << num_accidents4 << endl;
				}
			}
		}
	}
	if (num_accidents5 < num_accidents5)
	{
		if (num_accidents5 < num_accidents2)
		{
		    if (num_accidents5 < num_accidents3)
		    {
		    	if (num_accidents5 < num_accidents4)
		    	{
		    		cout << name5 << " had the fewest reported auto-mobile accidents last year, about " << num_accidents5 << endl;
				}
			}
		}
	}
}