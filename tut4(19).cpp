#include<iostream>
using namespace std;
int main()
{
	double wavelength;
	cout << "Enter Wavelength of Electro-Magnetic Wave(in meters): ";
	cin >> wavelength;
	if (wavelength > 0.01)
	{
		cout << "This Electro-Magnetic Wave is a Radio Wave!!" << endl;
	}
	else if (wavelength <= 0.01 && wavelength >= 0.001)
	{
		cout << "This Electro-Magnetic Wave is a Micro Wave!!" << endl;
	}
	else if (wavelength < 0.001 && wavelength >= 0.0000007)
	{
		cout << "This Electro-Magnetic Wave is a Infrared Radiation!!" << endl;
	}
	else if (wavelength < 0.0000007 && wavelength >= 0.0000004)
	{
	    cout << "This Electro-Magnetic Wave is a Visible Light!!" << endl;
	}
	else if (wavelength < 0.0000004 && wavelength >= 0.00000001)
	{
		cout << "This Electro-Magnetic Wave is a Ultraviolent Radiation!!" << endl;
	}
	else if (wavelength < 0.00000001 && wavelength >= 0.00000000001)
	{
		cout << "This Electro-Magnetic Wave is a X-Ray!!" << endl;
	}
	else if (wavelength < 0.00000000001)
	{
		cout << "This Electro-Magnetic Wave is a Gamma Radiation!!" << endl;
	}
	else 
	{
		cout << "Enter a Valid Wavelength!!" << endl;
	}
	return 0;
}