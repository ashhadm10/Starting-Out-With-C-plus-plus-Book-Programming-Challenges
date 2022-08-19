#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string name, description;
	cout << "PERSONAL WEBPAGE GENERATOR" << endl;
	cout << "-----------------------------" << endl;
	cout << "This Program will generate a Web Page Based on the given Information!!" << endl;
	cout << "Enter your Name: ";
	getline(cin, name);
	cout << "Describe Yourself: ";
	getline(cin, description);
	ofstream outputFile;
	outputFile.open("C:/Users/MASTER/OneDrive/Desktop/Muhammad Ashhad/personal.html");
	if (outputFile.fail())
	{
		cout << "ERROR!! The File Doesn't Opened Properly!!" << endl;
	}
	else
	{
		cout << endl << endl << endl << endl << endl;
		outputFile << "\t\t\t\t" << name << endl << endl << endl;
		outputFile << "\t\t" << description;
		outputFile.close();
	} 
	return 0;
}