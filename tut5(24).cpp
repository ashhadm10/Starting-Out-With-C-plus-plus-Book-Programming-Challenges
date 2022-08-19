#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	double num, sum = 0, total = 0, average;
	ifstream inputFile;
	inputFile.open("C:/Users/MASTER/OneDrive/Desktop/Random.txt");
	if (inputFile.fail())
	{
		cout << "File Doesn't Open Properly. Error!!" << endl;
	}
	else {
	    while (inputFile >> num)
	    {
		    sum += num;
		    cout << num << endl;
		    total++;
	    }
	    average = sum / total;
	    cout << "Total Numbers in 'Random.txt' File: " << total << endl;
	    cout << "Sum: " << sum << endl;
	    cout << "Average: " << average << endl;
	}
	inputFile.close();
	return 0;
}