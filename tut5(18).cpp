#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string years;
	ofstream outputFile;
	ifstream inputFile;
	cout << "PRAIREVILLE POPULATION GROWTH" << endl;
	cout << "(each * represents 1,000 people)" << endl;
	inputFile.open("C:/Users/MASTER/OneDrive/Desktop/People.txt");
	if (inputFile.fail())
	{
		cout << "Opening 'People.txt' File operation Failed!!!";
	}
	else
	{
	    getline(inputFile, years);
	    cout << years << endl;
	    getline(inputFile, years);
	    cout << years << endl;
	    getline(inputFile, years);
	    cout << years << endl;
	    getline(inputFile, years);
	    cout << years << endl;
	    getline(inputFile, years);
	    cout << years << endl;
	    getline(inputFile, years);
	    cout << years << endl;
	    inputFile.close();
	}
	return 0;
}