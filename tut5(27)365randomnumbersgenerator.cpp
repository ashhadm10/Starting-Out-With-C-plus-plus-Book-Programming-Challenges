#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	unsigned int seed = 0, a, b;
	srand(seed);
	ofstream outputFile;
	outputFile.open("C:/Users/MASTER/OneDrive/Desktop/steps.txt");
	for (int i = 1; i <= 365; i++)
	{
		outputFile << (rand() % (8000 - 1000 + 1) + 1000) << endl;
	}
	outputFile.close();
	return 0;
}