#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int num, steps, steps1 = 0, steps2 = 0, steps3 = 0, steps4 = 0, steps5 = 0, steps6 = 0;
	int steps7 = 0, steps8 = 0, steps9 = 0, steps10 = 0, steps11 = 0, steps12 = 0, avg;
	ifstream inputFile;
	inputFile.open("C:/Users/MASTER/OneDrive/Desktop/steps.txt");
	if (inputFile.fail())
	{
		cout << "ERROR!! File Doesn't Opened Correctly!!" << endl;
	}
	else
	{
		for (int i = 1; i <= 12; i++)
		{
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			{
				if (i == 1)
				{
				    for (int j = 1; j <= 31; j++)
				    {
					    inputFile >> num;
					    steps1 += num;
				    }
				    avg = steps1 / 31;
			        cout << "Average Steps Taken in January: " << avg << endl;
				    continue;
				}
				if (i == 3)
				{
					for (int j = 1; j <= 31; j++)
				    {
					    inputFile >> num;
					    steps2 += num;
				    }
				    avg = steps2 / 31;
			        cout << "Average Steps Taken in March: " << avg << endl;
				    continue;
				}
				if (i == 5)
				{
					for (int j = 1; j <= 31; j++)
				    {
					    inputFile >> num;
					    steps5 += num;
				    }
				    avg = steps5 / 31;
			        cout << "Average Steps Taken in May: " << avg << endl;
				    continue;
				}
				if (i == 7)
				{
					for (int j = 1; j <= 31; j++)
				    {
					    inputFile >> num;
					    steps7 += num;
				    }
				    avg = steps7 / 31;
			        cout << "Average Steps Taken in July: " << avg << endl;
				    continue;
				}
				if (i == 8)
				{
					for (int j = 1; j <= 31; j++)
				    {
					    inputFile >> num;
					    steps8 += num;
				    }
				    avg = steps8 / 31;
			        cout << "Average Steps Taken in August: " << avg << endl;
				    continue;
				}
				if (i == 10)
				{
					for (int j = 1; j <= 31; j++)
				    {
					    inputFile >> num;
					    steps10 += num;
				    }
				    avg = steps10 / 31;
			        cout << "Average Steps Taken in October: " << avg << endl;
				    continue;
				}
				if (i == 12)
				{
					for (int j = 1; j <= 31; j++)
				    {
					    inputFile >> num;
					    steps12 += num;
				    }
				    avg = steps12 / 31;
			        cout << "Average Steps Taken in December: " << avg << endl;
				    continue;
				}
			}
			if (i == 4 || i == 6 || i == 9 || i == 11)
			{
				if (i == 4)
				{
				    for (int j = 1; j <= 30; j++)
				    {
					    inputFile >> num;
					    steps4 += num;
				    }
				    avg = steps4 / 30;
			        cout << "Average Steps Taken in April: " << avg << endl;
				    continue;
				}
		        if (i == 6)
				{
				    for (int j = 1; j <= 30; j++)
				    {
					    inputFile >> num;
					    steps6 += num;
				    }
				    avg = steps6 / 30;
			        cout << "Average Steps Taken in June: " << avg << endl;
				    continue;
				}
				if (i == 9)
				{
				    for (int j = 1; j <= 30; j++)
				    {
					    inputFile >> num;
					    steps9 += num;
				    }
				    avg = steps9 / 31;
			        cout << "Average Steps Taken in September: " << avg << endl;
				    continue;
				}
			    if (i == 11)
				{
				    for (int j = 1; j <= 30; j++)
				    {
					    inputFile >> num;
					    steps11 += num;
				    }
				    avg = steps11 / 31;
			        cout << "Average Steps Taken in November: " << avg << endl;
				    continue;
				}
			}
			if (i == 2)
			{
				for (int j = 1; j <= 28; j++)
				{
				    inputFile >> num;
				    steps2 += num;
			    }
				avg = steps2 / 28;
			    cout << "Average Steps Taken in Februrary: " << avg << endl;
			    continue;
			}
		}
	}
	return 0;
}