#include<iostream>
using namespace std;
int main()
{
	double num, total = 0;
	cout << "Ente Any Number (other than -ve) and i will show u the sum upto that Number: ";
	cin >> num;
	while (num < 0)
	{
		cout << "Enter Valid Number!! (+ve Numbers Only)!!" << endl;
		cout << "Ente Any Number (other than -ve) and i will show u the sum upto that Number: ";
	    cin >> num;
	}
	for (int i = 1 ; i <= num; i++)
	{
		total += i;
	}
	cout << "The Sum of Numbers upto " << num << " is: " << total << endl;
	return 0;
}