#include <iostream>
using namespace std;

int main()
{
	char a;
	int b;
	float c;
	double d;
	cout << "Data Type 'char' uses: " << sizeof(a) << " bytes." << endl;
	cout << "Data Type 'int' uses: " << sizeof(b) << " bytes." << endl;
	cout << "Data Type 'string' uses: " << sizeof(c) << " bytes." << endl;
	cout << "Data Type 'double' uses: " << sizeof(d) << " bytes." << endl;
	return 0;
}