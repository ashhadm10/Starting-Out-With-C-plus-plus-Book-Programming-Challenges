#include<iostream>
using namespace std;
int main()
{
	int selection;
	double distance, time;
	const double speed_sound_air = 1100, speed_sound_water = 4900, speed_sound_steel = 16400;
	cout << "------------------------------------------------" << endl;
	cout << "  Medium                  Speed                 " << endl;
	cout << "------------------------------------------------" << endl;
	cout << "1. Air                   1,100 feet per second  " << endl;
	cout << "2. Water                 4,900 feet per second  " << endl;
	cout << "3. Steel                 16,400 feet per second " << endl;
	cout << "------------------------------------------------" << endl << endl;
	cout << "Choose the Medium: ";
	cin >> selection;
	cout << "Enter Distance Covered by Sound Waves in selected Medium(in feet): ";
	cin >> distance;
	if (distance < 0)
	{
		cout << "Invalid Distance!!" << endl;
	}
	else
	{
	switch(selection)
	{
		case 1:
			time = (1 / speed_sound_air) * distance;
			cout << "Sound Waves will cover " << distance << " feet in " << time << " second(s)." << endl;
		    break;
		
		case 2:
			time = (1 / speed_sound_water) * distance;
			cout << "Sound Waves will cover " << distance << " feet in " << time << " second(s)." << endl;
		    break;
		    
		case 3:
			time = (1 / speed_sound_steel) * distance;
			cout << "Sound Waves will cover " << distance << " feet in " << time << " second(s)." << endl;
		    break;
		    
		default:
			cout << "This Option Doesn't Exist. Run the Program Again and Choose Valid Option!!" << endl;
	}
    }
    return 0;
}
	