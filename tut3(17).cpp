#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
	string null;
	unsigned int seed = time(0);
	unsigned int answer, f_num, s_num;
	srand(seed);
	f_num = rand();
	s_num = rand();
	cout << "----------------------*MATH TUTOR*----------------------" << endl;
	cout << "Solve the Following Question:" << endl;
	cout << " " << f_num << endl;
	cout << "+" << s_num << endl;
	answer = f_num + s_num;
	cout << "--------" << endl;
	getline(cin, null);
	cout << " " << answer << endl;
	return 0;
}