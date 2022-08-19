#include<iostream>
#include<string>
using namespace std;
int main()
{
	string p_colour1, p_colour2, s_colour;
	cout << "Enter 1st Primary Colour(Red, Blue, Yellow): ";
	getline(cin, p_colour1);
	cout << "Enter 2nd Primary Colour(Other than " << p_colour1 << "): ";
	getline(cin, p_colour2);
	if (p_colour1 == "red" || p_colour1 == "Red") 
	{
		if (p_colour2 == "blue" || p_colour2 == "Blue") 
		{
			cout << p_colour1 << " and " << p_colour2 << " will make Purple Colour." << endl;
		}
		else if (p_colour2 == "yellow" || p_colour2 == "Yellow")
		{
			cout << p_colour1 << " and " << p_colour2 << " will make Orange Colour." << endl;
		}
	}
		
	else if (p_colour1 == "yellow" || p_colour1 == "Yellow")
	{
		if (p_colour2 == "red" || "Red") 
		{
			cout << p_colour1 << " and " << p_colour2 << " will make Orange Colour." << endl;
		}
		else if (p_colour2 == "blue" || "Blue")
		{
			cout << p_colour1 << " and " << p_colour2 << " will make Green Colour." << endl;
		}
	}
	
	else if (p_colour1 == "blue" || p_colour1 == "Blue")
	{
		if (p_colour2 == "red" || p_colour2 == "Red") 
		{
			cout << p_colour1 << " and " << p_colour2 << " will make Purple Colour." << endl;
		}
		else if (p_colour2 == "yellow" || p_colour2 == "Yellow")
		{
			cout << p_colour1 << " and " << p_colour2 << " will make Green Colour." << endl;
		}
	}
		
	else
	{
		cout << "Error!! Run the Program Again and Enter Valid Primary Colours!!" << endl;
	}
   return 0;
}