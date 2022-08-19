#include<iostream>
#include<fstream>
#include<string>
#include<cwctype>
using namespace std;
int main()
{
	string name, first, last;
	ifstream inputFile;
	inputFile.open("C:/Users/MASTER/OneDrive/Desktop/LineUp.txt");
	if (inputFile.fail())
	{
		cout << "ERROR!! Opening the File!!" << endl;
	}
	else
	{
	    while (inputFile >> name)
	    {
	        first = last = name;
	        if (name < first)
		        {
			        first = name;
		        }
	        if (name > last)
		        {
			        last = name;
		        }
	        for (int i = 1; i < 8; i++)
	        {
		        inputFile >> name;
		        if (name < first)
		        {
			        first = name;
		        }
	            if (name > last)
		        {
			        last = name;
		        }
 	        }
 	    }
 	    inputFile.close();
 	}
	cout << "Student at the Front of the Line is: " << first << endl;
	cout << "Student at the Last of the Line is: " << last << endl;
	return 0;
}
