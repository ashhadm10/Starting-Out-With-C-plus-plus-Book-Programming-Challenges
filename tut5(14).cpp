#include<iostream>
#include<string>
#include<cwctype>
using namespace std;
int main()
{
	int no_students;
	string name, first, last;
	cout << "Enter No. of Students in the Class: ";
	cin >> no_students;
	while (no_students < 1 || no_students > 25)
	{
		cout << "Error!! No. Students Can't be less than 1 or greater than 25!!" << endl;
		cout << "Enter No. of Students in the Class Again(between '1' and '25'): ";
	    cin >> no_students;
	}
	cout << "Enter the name of Student 1: ";
	cin >> name;
	first = last = name;
	if (name < first)
		{
			first = name;
		}
	if (name > last)
		{
			last = name;
		}
	for (int i = 1; i < no_students; i++)
	{
		cout << "Enter the name of Student " << i + 1 << ": ";
		cin >> name;
		if (name < first)
		{
			first = name;
		}
	    if (name > last)
		{
			last = name;
		}
	}
	cout << "Student at the Front of the Line is: " << first << endl;
	cout << "Student at the Last of the Line is: " << last << endl;
	return 0;
}
