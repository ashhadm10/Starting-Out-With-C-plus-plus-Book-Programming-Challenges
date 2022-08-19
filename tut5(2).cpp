#include<iostream>
using namespace std;
int main()
{
	char ascii_code;
	for (int i = 0; i <= 127; i++)
	{
		ascii_code = i;
		cout << ascii_code << " ";
		if (i % 16 == 0)
		{
			cout << endl;
		} 
	}
	return 0;
}