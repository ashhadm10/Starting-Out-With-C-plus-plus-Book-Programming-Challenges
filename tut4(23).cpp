#include<iostream>
using namespace std;
int main()
{
	int choice;
	double area_circle, area_rectangle, area_triangle, radius, length, width, base, height;
	const double PI = 3.14159;
	cout << "Geometry Calculator" << endl;
	cout << "\t1. Calculate the Area of a Circle" << endl;
	cout << "\t2. Calculate the Area of a Rectangle" << endl;
	cout << "\t3. Calculate the Area of a Triangle" << endl;
	cout << "\t4. Quit" << endl;
	cout << "\t Enter your Choice (1-4): ";
	cin >> choice;
	{
	switch (choice)
	{
		case 1:
			cout << "Enter Radius of Circle in (cms): ";
			cin >> radius;
			area_circle = PI * radius * radius;
			cout << "Area of Circle with Radius " << radius << " cms is: " << area_circle << " cm2" << endl;
			break;
		case 2:
			cout << "Enter Length of Rectangle in (cms): ";
			cin >> length;
			cout << "Enter Width of Rectangle in (cms): ";
			cin >> width;
			area_rectangle = length * width;
			cout << "Area of Rectangle: " << area_rectangle << " cm2" << endl;
			break;
		case 3:
			cout << "Enter Length of Base of Triangle(in (cms): ";
			cin >> base;
			cout << "Enter Length of Height of Triangle(in (cms): ";
			cin >> height;
			area_triangle = base * height;
			cout << "Area of Triangle: " << area_triangle << " cm2" << endl;
			break;
		default:
			cout << "Invalid Choice Number!!! Rerun the Program and Enter Valid Choice Number!!" << endl;
		}
	}

    return 0;
}