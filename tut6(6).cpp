#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double kineticEnergy(double, double);

int main()
{
	double mass, velocity, kinetic_energy;
	cout << "This Program Finds Kinetic Energy of A Body!!" << endl;
	cout << "Enter Mass of Body(in kg(s)): ";
	cin >> mass;
	cout << "Enter the Velocity of the Body with which it is Moving(in meter per second): ";
	cin >> velocity;
	kinetic_energy = kineticEnergy(mass, velocity);
	cout << "The Kinetic Energy of The Body is " << kinetic_energy << " kg meter sq. per second sq." << endl;
	return 0;
}

double kineticEnergy(double m, double v)
{
	double ke;
	ke = (0.5 * m * pow(v, 2.0));
	return ke;
}