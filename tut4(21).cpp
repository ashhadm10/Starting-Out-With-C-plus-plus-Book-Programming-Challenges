#include<iostream>
using namespace std;
int main()
{
	int selection;
	double distance, time;
	const double speed_sound_carbondioxide = 258.0, speed_sound_air = 4900, speed_sound_helium = 972.0, speed_sound_hydrogen = 1270.0;
	cout << "-----------------------------------------------------" << endl;
	cout << "  Medium                  Speed (Meters per Second)  " << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "1. Carbon dioxide         258.0                      " << endl;
	cout << "2. Air                    331.5                      " << endl;
	cout << "3. Helium                 972.0                      " << endl;
	cout << "4. Hydrogen               1,270.0                    " << endl;
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "Choose the Medium: ";
	cin >> selection;
    if (selection < 1 || selection > 4)
    {
		cout << "This Option Doesn't Exist. Run the Program Again and Choose Valid Option!!" << endl;
		return 0;
	}
	else
	{
	cout << "Enter Time taken by Sound Waves in selected Medium to travel from Source to it's Destination'(0 to 30): ";
	cin >> time;
	if (time < 0 || time > 30)
	{
		cout << "Error!! Enter Time in Mentioned Range!!" << endl;
	}
	else
	{
	switch(selection)
	{
		case 1:
			distance = (speed_sound_carbondioxide) * time;
			cout << "Source of sound is " << distance << " meters away from it's Destination, in 'CO2' Gas." << endl;
		    break;
		
		case 2:
			distance = (speed_sound_air) * time;
			cout << "Source of sound is " << distance << " meters away from it's Destination, in 'Air'." << endl;
		    break;
		    
		case 3:
			distance = (speed_sound_helium) * time;
			cout << "Source of sound is " << distance << " meters away from it's Destination, in 'He' Gas." << endl;
		    break;
		    
		case 4:
			distance = (speed_sound_hydrogen) * time;
			cout << "Source of sound is " << distance << " meters away from it's Destination, in 'H2' Gas." << endl;
		    break;
	}
    }
    }
    return 0;
}