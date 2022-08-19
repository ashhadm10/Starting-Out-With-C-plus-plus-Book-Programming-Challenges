#include<iostream>
#include<iomanip>
using namespace std;

void getJudgeData(double &);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);
void calcScore(double, double, double, double, double, double, double);

int main()
{
	double judge_score1, judge_score2, judge_score3, judge_score4, judge_score5, l, h;
	getJudgeData(judge_score1);
	getJudgeData(judge_score2);
	getJudgeData(judge_score3);
	getJudgeData(judge_score4);
	getJudgeData(judge_score5);
	l = findLowest(judge_score1, judge_score2, judge_score3, judge_score4, judge_score5);
	h = findHighest(judge_score1, judge_score2, judge_score3, judge_score4, judge_score5);
	calcScore(judge_score1, judge_score2, judge_score3, judge_score4, judge_score5, h, l);
	return 0;
}

void getJudgeData(double &score)
{
	cout << "Enter Score of Judge: ";
	cin >> score;
	while (score < 0 || score > 10)
	{
		cout << "Score Can't Be Less than 0 or Greater than 10!!" << endl;
		cout << "Enter Score of Judge Again: ";
	    cin >> score;		
	}
}

void calcScore(double s, double ss, double sss, double ssss, double sssss, double high, double low)
{
	double avg;
	if (high == s && low == ss)
	{
	    avg = (sss + ssss + sssss) / 3;
		cout << "Average of " << sss << ", " << ssss << " and " << sssss << " Scores is: " << avg << endl;	
	}
	if (high == s && low == sss)
	{
		avg = (ss + ssss + sssss) / 3;
		cout << "Average of " << ss << ", " << ssss << " and " << sssss << " Scores is: " << avg << endl;	
	}
	if (high == s && low == ssss)
	{
		avg = (sss + sss + sssss) / 3;
		cout << "Average of " << sss << ", " << sss << " and " << sssss << " Scores is: " << avg << endl;	
	}
	if (high == s && low == sssss)
	{
		avg = (sss + ssss + ssss) / 3;
		cout << "Average of " << sss << ", " << ssss << " and " << ssss << " Scores is: " << avg << endl;	
	}
	if (high == ss && low == sssss)
	{
	    avg = (sss + ssss + s) / 3;
		cout << "Average of " << sss << ", " << ssss << " and " << sssss << " Scores is: " << avg << endl;	
	}
	if (high == ss && low == s)
	{
		avg = (sss + ssss + sssss) / 3;
		cout << "Average of " << sss << ", " << ssss << " and " << sssss << " Scores is: " << avg << endl;	
	}
	if (high == ss && low == sss)
	{
		avg = (s + ssss + sssss) / 3;
		cout << "Average of " << s << ", " << ssss << " and " << sssss << " Scores is: " << avg << endl;	
	}
	if (high == ss && low == ssss)
	{
		avg = (s + sss + sssss) / 3;
		cout << "Average of " << s << ", " << sss << " and " << sssss << " Scores is: " << avg << endl;	
	}
	if (high == sss && low == s)
	{
	    avg = (ss + ssss + sssss) / 3;
		cout << "Average of " << ss << ", " << ssss << " and " << sssss << " Scores is: " << avg << endl;	
	}
	if (high == sss && low == ss)
	{
		avg = (s + ssss + sssss) / 3;
		cout << "Average of " << s << ", " << ssss << " and " << sssss << " Scores is: " << avg << endl;	
	}
	if (high == sss && low == ssss)
	{
		avg = (s + ss + sssss) / 3;
		cout << "Average of " << s << ", " << ss << " and " << sssss << " Scores is: " << avg << endl;	
	}
	if (high == sss && low == sssss)
	{
		avg = (s + ss + ssss) / 3;
		cout << "Average of " << s << ", " << ss << " and " << ssss << " Scores is: " << avg << endl;	
	}
	if (high == ssss && low == s)
	{
	    avg = (ss + sss + sssss) / 3;
		cout << "Average of " << ss << ", " << sss << " and " << sssss << " Scores is: " << avg << endl;	
	}
	if (high == ssss && low == ss)
	{
		avg = (s + sss + sssss) / 3;
		cout << "Average of " << s << ", " << sss << " and " << sssss << " Scores is: " << avg << endl;	
	}
	if (high == ssss && low == sss)
	{
		avg = (s + ss + sssss) / 3;
		cout << "Average of " << s << ", " << ss << " and " << sssss << " Scores is: " << avg << endl;	
	}
	if (high == ssss && low == sssss)
	{
		avg = (s + ss + sss) / 3;
		cout << "Average of " << s << ", " << ss << " and " << sss << " Scores is: " << avg << endl;	
	}
	if (high == sssss && low == s)
	{
	    avg = (ss + sss + ssss) / 3;
		cout << "Average of " << ss << ", " << sss << " and " << ssss << " Scores is: " << avg << endl;	
	}
	if (high == sssss && low == ss)
	{
		avg = (s + sss + ssss) / 3;
		cout << "Average of " << s << ", " << sss << " and " << ssss << " Scores is: " << avg << endl;	
	}
	if (high == sssss && low == sss)
	{
		avg = (s + ss + ssss) / 3;
		cout << "Average of " << s << ", " << ss << " and " << ssss << " Scores is: " << avg << endl;	
	}
	if (high == sssss && low == ssss)
	{
		avg = (s + ss + sss) / 3;
		cout << "Average of " << s << ", " << ss << " and " << sss << " Scores is: " << avg << endl;	
	}
}

double findLowest(double score1, double score2, double score3, double score4, double score5)
{
	double lowest;
	if (score1 < score2)
	{
		if (score1 < score3)
		{
			if (score1 < score4)
			{
				if (score1 < score5)
				{
					lowest = score1;
				}
			}
		}
	}
	if (score2 < score1)
	{
		if (score2 < score3)
		{
			if (score2 < score4)
			{
				if (score2 < score5)
				{
					lowest = score2;
				}
			}
		}
	}
	if (score3 < score1)
	{
		if (score3 < score2)
		{
			if (score3 < score4)
			{
				if (score3 < score5)
				{
					lowest = score3;
				}
			}
		}
	}
	if (score4 < score1)
	{
		if (score4 < score2)
		{
			if (score4 < score3)
			{
				if (score4 < score5)
				{
					lowest = score4;
				}
			}
		}
	}
	if (score5 < score1)
	{
		if (score5 < score2)
		{
			if (score5 < score3)
			{
				if (score5 < score4)
				{
					lowest = score5;
				}
			}
		}
	}
	return lowest;
}

double findHighest(double score11, double score22, double score33, double score44, double score55)
{
	double highest;
	if (score11 > score22)
	{
		if (score11 > score33)
		{
			if (score11 > score44)
			{
				if (score11 > score55)
				{
					highest = score11;
				}
			}
		}
	}
	if (score22 > score11)
	{
		if (score22 > score33)
		{
			if (score22 > score44)
			{
				if (score22 > score55)
				{
					highest = score22;
				}
			}
		}
	}
	if (score33 > score11)
	{
		if (score33 > score22)
		{
			if (score33 > score44)
			{
				if (score33 > score55)
				{
					highest = score33;
				}
			}
		}
	}
	if (score44 > score11)
	{
		if (score44 > score22)
		{
			if (score44 > score33)
			{
				if (score44 > score55)
				{
					highest = score44;
				}
			}
		}
	}
	if (score55 > score11)
	{
		if (score55 > score22)
		{
			if (score55 > score33)
			{
				if (score55 > score44)
				{
					highest = score55;
				}
			}
		}
	}
	return highest;
}
