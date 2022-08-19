#include<iostream>
using namespace std;
int main()
{
	int no_books;
	cout << "Enter No. of Books Purchased: ";
	cin >> no_books;
	if (no_books == 0)
	{
		cout << "You have Earned 0 Points!!" << endl;
	}
	else if (no_books == 1)
	{
		cout << "You have Earned 5 Points!!" << endl;
	}
	else if (no_books == 2)
	{
		cout << "You have Earned 15 Points!!" << endl;
	}
	else if (no_books == 3)
	{
	    cout << "You have Earned 30 Points!!" << endl;	
	}
	else if (no_books >= 4)
	{
		cout << "You have Earned 60 Points!!" << endl;
	}
	else
	{
		cout << "Enter Valid Number!!" << endl;
	}
	return 0;
}