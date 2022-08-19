#include <iostream>
using namespace std;

int main()
{
	double avg_temp_newyork = 85, avg_temp_denver = 88, avg_temp_phoenix = 106;
	avg_temp_newyork += (avg_temp_newyork * 0.02);
	avg_temp_denver += (avg_temp_denver * 0.02);
	avg_temp_phoenix += (avg_temp_phoenix * 0.02);
	cout << "New Average July High temperature for New York is: " << avg_temp_newyork << " degrees Farhenheit." << endl;
	cout << "New Average July High temperature for Denver is: " << avg_temp_denver << " degrees Farhenheit." << endl;
	cout << "New Average July High temperature for Phoenix is: " << avg_temp_phoenix << " degrees Farhenheit." << endl;
	return 0;
}