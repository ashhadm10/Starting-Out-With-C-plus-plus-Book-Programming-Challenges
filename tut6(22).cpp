#include<iostream>
using namespace std;

bool isPrime(int);

int main()
{
	int num1;
	cout << "Enter a Number and I will Tell you if it is PRIME or NOT!!" << endl;
	cout << "Enter a Number: ";
	cin >> num1;
	while (num1 < 0)
	{
		cout << "-ve Numbers are not Allowed!!" << endl;
		cout << "Enter a Number: ";
	    cin >> num1;
	}
	isPrime(num1);
	if (isPrime(num1))
	{
		cout << num1 << " is a Prime Number!!" << endl;
	}
	else
	{
		cout << num1 << " is NOT a Prime Number!!" << endl;
	}
	return 0;
}

bool isPrime(int n)
{
	int isPrime = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		isPrime++;
	}
		return isPrime == 2 ? 1 : 0;
}