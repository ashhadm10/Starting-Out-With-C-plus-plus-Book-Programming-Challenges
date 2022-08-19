#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a Number within the Range of 1 to 10: ";
	cin >> num;
	switch(num)
	{
	case 1:
		{
			cout << "Roman Numeral Version of " << num << " is 'I'." << endl;
			break; 
		}
	case 2:
		{
			cout << "Roman Numeral Version of " << num << " is 'II'." << endl; 
			break; 
		}
	case 3:
		{
			cout << "Roman Numeral Version of " << num << " is 'III'." << endl; 
			break; 
		}
	case 4:
		{
			cout << "Roman Numeral Version of " << num << " is 'IV'." << endl; 
			break; 
		}
	case 5:
		{
			cout << "Roman Numeral Version of " << num << " is 'V'." << endl; 
			break; 
		}
	case 6:
		{
			cout << "Roman Numeral Version of " << num << " is 'VI'." << endl; 
			break; 
		}
	case 7:
		{
			cout << "Roman Numeral Version of " << num << " is 'VII'." << endl; 
			break; 
		}
	case 8:
		{
			cout << "Roman Numeral Version of " << num << " is 'VIII'." << endl; 
			break; 
		}
	case 9:
		{
			cout << "Roman Numeral Version of " << num << " is 'IX'." << endl; 
			break; 
		}
	case 10:
		{
			cout << "Roman Numeral Version of " << num << " is 'X'." << endl; 
			break; 
		}
	default:
		{
			cout << "Run the Program Again and Enter Valid Number!!" << endl;
		}
	}
	return 0;
}