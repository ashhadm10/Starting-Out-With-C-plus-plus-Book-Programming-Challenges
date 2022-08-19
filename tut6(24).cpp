#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int displayMenuAndGetChoice();
int computerChoice();
int equalChoice(int, int);
void winner(int, int);

int main()
{
	string again_choice;
	int selected_choice, selected_choice1, computer_choice;
	selected_choice = displayMenuAndGetChoice();
	computer_choice = computerChoice();
	while ((selected_choice == computer_choice) || (again_choice == "y") || (again_choice == "Y"))
	{
	    selected_choice1 = equalChoice(selected_choice, computer_choice);
	    winner(selected_choice1, computer_choice);
	    cout << endl;
	    cout << "Do You Want to Play This game Again?(Enter 'Y' for 'Yes' or 'N' for 'No'): ";
	    cin >> again_choice;
	    while (!((again_choice == "y") || (again_choice == "Y") || (again_choice == "n") || (again_choice == "N")))
	    {
	    	cout << "Enter Valid Answer!!" << endl;
	    	cout << "Do You Want to Play This game Again?(Enter 'Y' for 'Yes' or 'N' for 'No'): ";
	    	cin >> again_choice;
		}
	    if ((again_choice == "n") || (again_choice == "N"))
	    {
		    exit(0);
	    }
	}
	winner(selected_choice, computer_choice);
	cout << endl;
	cout << "Do You Want to Play This game Again?(Enter 'Y' for 'Yes' or 'N' for 'No'): ";
	cin >> again_choice;
	while (!((again_choice == "y") || (again_choice == "Y") || (again_choice == "n") || (again_choice == "N")))
	{
    	cout << "Enter Valid Answer!!" << endl;
    	cout << "Do You Want to Play This game Again?(Enter 'Y' for 'Yes' or 'N' for 'No'): ";
    	cin >> again_choice;
	}
	while ((again_choice == "y") || (again_choice == "Y"))
	{
		selected_choice = displayMenuAndGetChoice();
	    computer_choice = computerChoice();
    	if (selected_choice == computer_choice)
	    {
	        selected_choice1 = equalChoice(selected_choice, computer_choice);
	        winner(selected_choice1, computer_choice);
	        exit(0);
	    }
	    winner(selected_choice, computer_choice);
	    cout << endl;
	    cout << "Do You Wantcto Play This game Again?(Enter 'Y' for 'Yes' or 'N' for 'No'): ";
	    cin >> again_choice;
	}
	if ((again_choice == "n") || (again_choice == "N"))
	{
		exit(0);
	}
	return 0;
}

int displayMenuAndGetChoice()
{
	int choice;
	cout << "*--------ROCK, PAPER AND SCISSORS GAME*--------" << endl;
	cout << "Following is the Set of Things you can Select: " << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your Selected Choice Against Computer: ";
    cin >> choice;
    while (choice < 1 || choice > 4)
    {
    	cout << "ERROR!! Choice Can't be Less than 1 or Greater than 0!!" << endl;
    	cout << "Enter your Selected Choice Against Computer Again: ";
        cin >> choice;
	}
	if (choice == 4)
	{
		exit(0);
	}
	return choice;
}

int computerChoice()
{
	unsigned int seed = time(0);
	srand(seed);
	(rand() % (3 - 1 + 1) + 1);
	return (rand() % (3 - 1 + 1) + 1);
}

int equalChoice(int s_c, int c_c)
{
	int chooses;
	while (s_c == c_c)
	{
		if (s_c == 1)
		{
			cout << "\t\tComputer Also Choosed ROCK!!" << endl;
			cout << "\t\tMatch Tied!!" << endl << endl;
			s_c = displayMenuAndGetChoice();
			if (!(s_c == c_c))
			    chooses = s_c;
		}
		if (s_c == 2)
		{
			cout << "\t\tComputer Also Choosed PAPER!!" << endl;
			cout << "\t\tMatch Tied!!" << endl << endl;
			s_c = displayMenuAndGetChoice();
			if (!(s_c == c_c))
			    chooses = s_c;
		}
		if (s_c == 3)
		{
			cout << "\t\tComputer Also Choosed SCISSORS!!" << endl;
			cout << "\t\tMatch Tied!!" << endl << endl;
			s_c = displayMenuAndGetChoice();
			if (!(s_c == c_c))
			    chooses = s_c;
		}
	}
	return chooses;
}

void winner(int select, int computer)
{
	if (select == 1 && computer == 2)
	{
		cout << "\t\tComputer Choosed PAPER and You Choosed ROCK." << endl;
		cout << "\t\tComputer Win!!" << endl;
	}
	else if (select == 1 && computer == 3)
	{
		cout << "\t\tComputer Choosed SCISSORS and You Choosed ROCK." << endl;
		cout << "\t\tYou Win!!" << endl;
	}
	else if (select == 2 && computer == 1)
	{
		cout << "\t\tComputer Choosed ROCK and You Choosed PAPER." << endl;
		cout << "\t\tYou Win!!" << endl;
	}
	else if (select == 2 && computer == 3)
	{
		cout << "\t\tComputer Choosed SCISSORS and You Choosed PAPER." << endl;
		cout << "\t\tComputer Win!!" << endl;
	}
	else if (select == 3 && computer == 1)
	{
		cout << "\t\tComputer Choosed ROCK and You Choosed SCISSORS." << endl;
		cout << "\t\tComputer Win!!" << endl;
	}
	else 
	{
		cout << "\t\tComputer Choosed PAPER and You Choosed SCISSORS." << endl;
		cout << "\t\tYou Win!!" << endl;
	}
}








