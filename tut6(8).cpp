#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void coinToss();

int main()
{
	int no_times;
	cout << "How many Times the Coin should be Tossed?: ";
	cin >> no_times;
	for (int i = 1; i <= no_times; i++)
	{
		coinToss();
	}
	return 0;
}

void coinToss()
{
	unsigned int a;
	const int MINIMUM_VALUE = 1, MAXIMUM_VALUE = 2;
	a = (rand() % (MAXIMUM_VALUE - MINIMUM_VALUE + 1) + MINIMUM_VALUE);
	if (a == MINIMUM_VALUE)
	{
		cout << "HEADS!!" << endl;
	}
	else 	
	{
		cout << "TAILS!!" << endl;
	}
}