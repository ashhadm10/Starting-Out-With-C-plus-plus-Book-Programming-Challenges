#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
	string null;
	unsigned int seed = time(0);
	unsigned int answer, answer1, f_num, s_num;
	srand(seed);
	f_num = rand();
	s_num = rand();
	cout << "----------------------*MATH TUTOR*----------------------" << endl;
	cout << "Solve the Following Question:" << endl;
	cout << " " << f_num << endl;
	cout << "+" << s_num << endl;
	answer = f_num + s_num;
	cout << "--------" << endl;
	cin >> answer1;
	if (answer1 == answer)
	{
		cout << "\nCongratulations! Your Answer was Correct." << endl;
	}
	else
	{
		cout << "\nInvalid Answer!!" << endl;
	}
	return 0;
}