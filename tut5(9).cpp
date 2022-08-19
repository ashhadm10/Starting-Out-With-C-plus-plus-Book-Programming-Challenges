#include<iostream>
using namespace std;
int main()
{
	int floors, no_rooms, no_rooms_occupied, total_rooms_unoccupied;
	float percentage_occupied = 0, total_rooms, total_rooms_occupied;
	cout << "Enter Total No. of Floors of Hotel: ";
	cin >> floors;
	while (floors < 1)
	{
		cout << "Error!! Floors Can't be Less Than 1!!" << endl;
		cout << "Enter Total No. of Floors of Hotel Again: ";
	    cin >> floors;
	}
	for (int i = 0; i <= floors; i++)
	{
		if (i == 13)
	        continue;
	    if (i == 0)
	    {
	        total_rooms = 0;
	        total_rooms_occupied = 0;
	        continue;
	    }
	    cout << "Enter No. of Room(s) on Floor " << i << ": ";
		cin >> no_rooms;
		while (no_rooms < 10)
		{
			cout << "Error!! Minimum of atleast 10 Rooms should be on each Floor!!" << endl;
			cout << "Enter No. of Room(s) on Floor " << i << " Again: ";
	    	cin >> no_rooms;
		}
		total_rooms += no_rooms;
		cout << "No. of Room(s) Occupied on Floor " << i << ": ";
		cin >> no_rooms_occupied;
		while (no_rooms_occupied > no_rooms)
		{
		    cout << "No. of Rooms Occupied Can't Be Greater than Total No. of Rooms!!" << endl;
		    cout << "Enter No. of Room(s) Occupied on Floor " << i << " Again: ";
		    cin >> no_rooms_occupied;
		}
		total_rooms_occupied += no_rooms_occupied;
	}	  
	total_rooms_unoccupied = total_rooms - total_rooms_occupied;
	percentage_occupied = ((total_rooms_occupied / total_rooms) * 100);	
	cout << "Total Rooms the Hotel Has: " << total_rooms << endl;
	cout << "Total Rooms which are Occupied: " << total_rooms_occupied << endl;
	cout << "Total Rooms which are UnOccupied: " << total_rooms_unoccupied << endl;
	cout << "Percentage of Rooms Occupied: " << percentage_occupied << "%" << endl;
	return 0;
}