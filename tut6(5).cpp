#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double fallingDistance(double);

int main()
{
	double distance, time;
	cout << setprecision(2) << fixed << showpoint;
	for (int time = 1; time <= 10; time++)
	{
		distance = fallingDistance(time);
		cout << "Distance Traveled By the Object in " << time << "s is: " << distance << " meters." << endl;
	}
	return 0;
}

double fallingDistance(double sec)
{
	double dist;
	dist = (4.9 * pow(sec, 2));
	return dist;
}