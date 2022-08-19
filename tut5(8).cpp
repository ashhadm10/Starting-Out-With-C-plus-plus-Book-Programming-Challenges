#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
	int option;
	string null;
	int seed = time(0);
	int answer, answer1, f_num, s_num;
	srand(seed);
	do
	{
	    cout << "----------------------*MATH TUTOR*----------------------" << endl;
	    cout << "1. Addition" << endl;
	    cout << "2. Subtraction" << endl;
	    cout << "3. Multiplication" << endl;
	    cout << "4. Division" << endl;
	    cout << "5. Quit" << endl << endl;
	    cout << "Select Any Option from Above Menu: ";
	    cin >> option;
		while (option > 5 || option < 0)
		{
			cout << "This Option Doesn't Exist on Menu!!. Enter Valid Option!!" << endl;
			cout << "----------------------*MATH TUTOR*----------------------" << endl;
	        cout << "1. Addition" << endl;
	        cout << "2. Subtraction" << endl;
	        cout << "3. Multiplication" << endl;
	        cout << "4. Division" << endl;
	        cout << "5. Quit" << endl << endl;
	        cout << "Select Any Option from Above Menu: ";
	        cin >> option;
		}
		if (option == 5)
	    {
	    	break;
		}
	    switch (option)
	    {
	    	case 1:
	    		f_num = (rand() % (1000 - 1 +1) + 1);
	            s_num = (rand() % (1000 - 1 +1) + 1);
	            cout << "Solve the Following Question:" << endl;
	            cout << f_num << " + " << s_num << " = ";
	            answer = f_num + s_num;
	            cin >> answer1;
	            while (answer1 == answer)
	            {
		            cout << "\nCongratulations! Your Answer was Correct." << endl;
		            break;
	            }
	            while (answer1 != answer)
	            {
		            cout << "\nInvalid Answer!!. Enter Correct Answer!!" << endl;
		            cout << f_num << " + " << s_num << " = ";
	                answer = f_num + s_num;
	                cin >> answer1;
	            }
	            break;
	            
	        case 2:
	        	f_num = (rand() % (1000 - 1 +1) + 1);
	            s_num = (rand() % (1000 - 1 +1) + 1);
	            cout << "Solve the Following Question:" << endl;
	            cout << f_num << " - " << s_num << " = ";
	            answer = f_num - s_num;
	            cin >> answer1;
	            while (answer1 == answer)
	            {
		            cout << "\nCongratulations! Your Answer was Correct." << endl;
		            break;
	            }
	            while (answer1 != answer)
	            {
		            cout << "\nInvalid Answer!!. Enter Correct Answer!!" << endl;
		            cout << f_num << " - " << s_num << " = ";
	                answer = f_num - s_num;
	                cin >> answer1;
	            }
	            break;
	            
	        case 3:
	        	f_num = (rand() % (1000 - 1 +1) + 1);
	            s_num = (rand() % (1000 - 1 +1) + 1);
	            cout << "Solve the Following Question:" << endl;
	            cout << f_num << " x " << s_num << " = ";
	            answer = f_num * s_num;
	            cin >> answer1;
	            while (answer1 == answer)
	            {
		            cout << "\nCongratulations! Your Answer was Correct." << endl;
		            break;
	            }
	            while (answer1 != answer)
	            {
		            cout << "\nInvalid Answer!!. Enter Correct Answer!!" << endl;
		            cout << f_num << " x " << s_num << " = ";
	                answer = f_num * s_num;
	                cin >> answer1;
	            }
	            break;
	            
	        case 4:
	        	f_num = ((rand() % (1000 - 1 +1) + 1) * 5);
	            s_num = 5;
	            cout << "Solve the Following Question upto the 0 decimal places:" << endl;
	            cout << f_num << " / " << s_num << " = ";
	            answer = f_num / s_num;
	            cin >> answer1;
	            while (answer1 == answer)
	            {
		            cout << "\nCongratulations! Your Answer was Correct." << endl;
		            break;
	            }
	            while (answer1 != answer)
	            {
		            cout << "\nInvalid Answer!!. Enter Correct Answer!!" << endl;
		            cout << f_num << " / " << s_num << " = ";
	                answer = f_num / s_num;
	                cin >> answer1;
	            }
				break;	    		
		}
	} while (option == 1 || option == 2 || option == 3 || option == 4);
	
	return 0;
}