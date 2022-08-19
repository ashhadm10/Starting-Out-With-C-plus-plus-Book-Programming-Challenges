#include <iostream>
using namespace std;

int main()
{
	int one_acre = 43560, given = 391876;
	double acres;
	acres = given/one_acre;
	cout << "Number of Acres in tract of land with " << given << " sq. ft are: " << acres << " acres." << endl;
	return 0;
}