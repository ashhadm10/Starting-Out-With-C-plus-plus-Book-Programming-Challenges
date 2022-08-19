#include<iostream>
using namespace std;
int main()
{
	float1 mass, weight;
	cout << "Enter Mass: ";
	cin >> mass;
	weight = mass * 9.8;
	cout << "Weight of Object: " << weight << " Newton."<< endl;
	if(weight > 1000)
	{
		cout << "It is Tooo Heavy." << endl;
	}
	else if(weight < 10)
	{
		cout << "It is Tooo Light." << endl;
	}
	return 0;
}