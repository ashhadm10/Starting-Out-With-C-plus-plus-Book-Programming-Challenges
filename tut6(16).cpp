#include<iostream>
#include<iomanip>
using namespace std;

int annualPopulation(int, double, double, int);

int main()
{
	int previouspopulation, newpopulation;
	double birth_rate, death_rate, noyears;
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
	cin >> noyears;
	while (noyears < 1)
	{
		cout << "Error!! No. of Years Can't be less than 1!!" << endl;
		cout << "Enter No. of Years to Display the Result For Again: ";
	    cin >> noyears;
	}
    newpopulation = annualPopulation(previouspopulation, birth_rate, death_rate, noyears);
    cout << "The Size of the Population of " << previouspopulation << " in " << noyears << " years will be of " << newpopulation * noyears << "." << endl;
	return 0;
}

int annualPopulation(int p_population, double b_rate, double d_rate, int n_years)
{
    b_rate *= 0.01;
	d_rate *= 0.01; 	
    int n_population = p_population + (b_rate * p_population) - (d_rate * p_population);
	return n_population;	
}




