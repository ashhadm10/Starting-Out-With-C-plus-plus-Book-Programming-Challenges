#include<iostream>
#include<iomanip>
using namespace std;

int population(int, double, double, int, int, int);

int main()
{
	int previouspopulation, newpopulation, arrivals, departure;
	double birth_rate, death_rate, numYears;
	cout << "THIS PROGRAM WILL TELL YOU NEW POPULATION!!" << endl;
	cout << "Enter the Starting Size of the Population: ";
	cin >> previouspopulation;
	while (previouspopulation < 2)
	{
		cout << "Error!! Starting Size of population can't be less than 2!!" << endl;
		cout << "Enter the Starting Size of the Population Again: ";
		cin >> previouspopulation;
	}
	cout << "Enter Annual Birth Rate: %";
	cin >> birth_rate;
	while (birth_rate < 0)
	{
		cout << "Error!! Birth rate Can't be -ve!!" << endl;
		cout << "Enter Annual Birth Rate Again: %";
	    cin >> birth_rate;
	}
	cout << "Enter Annual Death Rate: %";
	cin >> death_rate;
	while (death_rate < 0)
	{
		cout << "Error!! Birth rate Can't be -ve!!" << endl;
		cout << "Enter Annual Death Rate Again: %";
	    cin >> death_rate;
	}
	cout << "Enter No. of Years to Display the Result For: ";
	cin >> numYears;
	while (numYears < 0)
	{
		cout << "Error!! No. of Years Can't be less than 1!!" << endl;
		cout << "Enter No. of Years to Display the Result For Again: ";
	    cin >> numYears;
	}
	cout << "Enter the No. of Individuals who Typically move to the Area Each Year: ";
	cin >> arrivals;
	while (arrivals < 0)
	{
		cout << "Error!! The No. of Arrivals Can't be -ve!!" << endl;
		cout << "Enter the No. of Individuals who Typically move to the Area Each Year Again: ";
	    cin >> arrivals;
	}
	cout << "Enter the No. of Individuals who Typically leave the Area Each Year: ";
	cin >> departure;
	while (departure < 0)
	{
		cout << "Error!! The No. of Departures Can't be -ve!!" << endl;
		cout << "Enter the No. of Individuals who Typically leave the Area Each Year Again: ";
	    cin >> departure;
	}
	newpopulation = population(previouspopulation, birth_rate, death_rate, numYears, arrivals, departure);
	cout << "The Size of the Population of " << previouspopulation << " in " << numYears << " years will be of " << newpopulation * numYears << "." << endl;
	return 0;
}

int population(int p_population, double b_rate, double d_rate, int n_years, int a, int d)
{
	b_rate *= 0.01;
	d_rate *= 0.01; 
    int n_population = p_population + (b_rate * p_population) - (d_rate * p_population) + a - d;
	return n_population;	
}




