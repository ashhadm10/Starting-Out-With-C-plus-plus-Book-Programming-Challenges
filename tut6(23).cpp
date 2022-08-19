#include<iostream>
#include<fstream>
using namespace std;

bool isPrime(int);

int main()
{
	ofstream outputFile;
	outputFile.open("tut6(23)a.txt");
	cout << "This Program Stores all the Prime Numbers Between 1 and 100 into a File!!" << endl;
	for (int i = 1; i <= 100; i++)
	{
		if (isPrime(i))
            outputFile << i << endl;
	}
	outputFile.close();
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