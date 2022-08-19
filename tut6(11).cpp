#include<iostream>
using namespace std;

void getScore(int &);
void calcAverage(int, int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
	int testscore1, testscore2, testscore3, testscore4, testscore5, low;
	getScore(testscore1);
	getScore(testscore2);
	getScore(testscore3);
	getScore(testscore4);
	getScore(testscore5);
	low = findLowest(testscore1, testscore2, testscore3, testscore4, testscore5);
	calcAverage(testscore1, testscore2, testscore3, testscore4, testscore5, low);
	return 0;
}

void getScore(int &t_score)
{
	cout << "Enter Test Score: ";
	cin >> t_score;
	while (t_score < 0 || t_score > 100)
	{
		cout << "Error!! Test Score Can't be Less than 0 or greater than 100!!!" << endl;
		cout << "Enter Test Score Again: ";
	    cin >> t_score;
	}
}

void calcAverage(int score1, int score2, int score3, int score4, int score5, int l)
{
	int avg;
	if (score1 == l)
	{
		avg = (score2 + score3 + score4 + score5) / 4;
		cout << "Average of 4 Highest Scores, " << score2 << ", " << score3 << ", " << score4 << " and " << score5 << " is: " << avg << endl;
	}
	if (score2 == l)
	{
		avg = (score1 + score3 + score4 + score5) / 4;
		cout << "Average of 4 Highest Scores, " << score1 << ", " << score3 << ", " << score4 << " and " << score5 << " is: " << avg << endl;
	}
	if (score3 == l)
	{
		avg = (score2 + score1 + score4 + score5) / 4;
		cout << "Average of 4 Highest Scores, " << score2 << ", " << score1 << ", " << score4 << " and " << score5 << " is: " << avg << endl;
	}
	if (score4 == l)
	{
		avg = (score2 + score3 + score1 + score5) / 4;
		cout << "Average of 4 Highest Scores, " << score2 << ", " << score3 << ", " << score1 << " and " << score5 << " is: " << avg << endl;
	}
	if (score5 == l)
	{
		avg = (score2 + score3 + score4 + score1) / 4;
		cout << "Average of 4 Highest Scores, " << score2 << ", " << score3 << ", " << score4 << " and " << score1 << " is: " << avg << endl;
	}
}

int findLowest(int s1, int s2, int s3, int s4, int s5)
{
	int lowest;
	if (s1 < s2)
	{
		if (s1 < s3)
		{
			if (s1 < s4)
			{
				if (s1 < s5)
				{
					lowest = s1;
				}
			}
		}
	}
	if (s2 < s1)
	{
		if (s2 < s3)
		{
			if (s2 < s4)
			{
				if (s2 < s5)
				{
					lowest = s2;
				}
			}
		}
	}
	if (s3 < s1)
	{
		if (s3 < s2)
		{
			if (s3 < s4)
			{
				if (s3 < s5)
				{
					lowest = s3;
				}
			}
		}
	}
	if (s4 < s1)
	{
		if (s4 < s2)
		{
			if (s4 < s3)
			{
				if (s4 < s5)
				{
					lowest = s4;
				}
			}
		}
	}
	if (s5 < s1)
	{
		if (s5 < s2)
		{
			if (s5 < s3)
			{
				if (s5 < s4)
				{
					lowest = s5;
				}
			}
		}
	}
	return lowest;
}