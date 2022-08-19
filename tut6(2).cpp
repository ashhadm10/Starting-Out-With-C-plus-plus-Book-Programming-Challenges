#include<iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);

int main()
{
    double l, w, a;
	l = getLength();
	w = getWidth();
	a = getArea(l, w);
	displayData(l, w, a);	
	return 0;
}

double getLength()
{
	static double length;
	cout << "Enter Length of the Rectangle: ";
	cin >> length;
	return length;
}

double getWidth()
{
	static double width;
	cout << "Enter Width of the Rectangle: ";
	cin >> width;
	return width;	
}

double getArea(double length, double width)
{
	return (length * width);
}

void displayData(double length, double width, double area)
{
	cout << "Length of Rectangle is: " << length << endl;
	cout << "Width of Rectangle is: " << width << endl;
	cout << "Area of Rectangle is: " << area << endl;
}