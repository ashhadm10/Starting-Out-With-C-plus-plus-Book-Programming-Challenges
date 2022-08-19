#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	unsigned int a, b;
	const int MIN_NUM = 1, MAX_NUM = 10;
	unsigned int seed = time(0);
	srand(seed);
	a = (rand() % (MAX_NUM - MIN_NUM +1) - MIN_NUM);
	cout << "RANDOM NUMBER GUESSER" << endl;
	cout << "Computer has Generated a Random Number. Try to Guess it!!!" << endl;
	cout << "Enter your Guessed Number(between 1 and 10): ";
	cin >> b;
	while (b < 1 || b > 10)
	{
		cout << "Error!! You have Entered a Number Out of Range of Random Number!!" << endl;
		cout << "Guess Number Again(between 1 and 10): ";
		cin >> b;
	}
	while (b != a)
	{
		cout << "Too ";
		if (b < a) 
		{
			cout << "Low" << endl;
		} 
		else
		{
			cout << "High" << endl;
		} 
		cout << "Try Again!!" << endl;
		cout << "Guess Number Again(between 1 and 10): ";
		cin >> b;
	}
	cout << "Random Number = " << a << endl;
	cout << "Guessed Number = " << b << endl;
	cout << "Congratulations!! You Guessed the Random Number Correctly!!" << endl;
	return 0;
}
	