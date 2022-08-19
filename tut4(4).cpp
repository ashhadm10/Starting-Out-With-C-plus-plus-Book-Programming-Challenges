#include<iostream>
using namespace std;
int main()
{
	double length1, width1, area1, length2, width2, area2;
	cout << "Enter Length of 1st Rectangle: ";
	cin >> length1;
	cout << "Enter Width of 1st Rectangle: ";
	cin >> width1;
	cout << "Enter Length of 2nd Rectangle: ";
	cin >> length2;
	cout << "Enter Width of 2nd Rectangle: ";
	cin >> width2;
	area1 = length1 * width1;
	area2 = length2 * width2;
	if(area1 == area2)
	{
		cout << "Area of Both Rectangles are Same." << endl;
	}
	else if(area1 > area2)
	{
		cout << "Area of 1st Rectangle is Greater." << endl;
	}
	else if(area1 < area2)
	{
		cout << "Area of 2nd Rectangle is Greater." << endl;
	}
	return 0;
}