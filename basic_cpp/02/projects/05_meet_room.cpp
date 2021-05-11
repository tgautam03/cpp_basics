// Author:	Tushar Gautam
// Date: 	15th Jan 2021
// Description:	Program determines whether a meeting room is in 
// 		violation of the fire law regulations regarding 
// 		the max room capacity
//
// 		Inputs:
// 		1) Max room capacity
// 		2) Num of people in meeting
//
// 		Outputs:
// 		1) If legal, then how many more can be accomodated
// 		2) If illegeal, then how many should leave

#include <iostream>
using namespace std;

int main()
{
	int max_people = 0, num_people = 0;

	char repeat = 'n';

	do
	{
		cout << "Enter the max number of people allowed in the room: ";
		cin >> max_people;

		cout << "Enter the current number of people in the room: ";
		cin >> num_people;

		if (num_people <= max_people)
		{
			cout << "Everything's alright and you can have " << max_people - num_people 
				<< " more people." << endl;
		}
		else
		{
			cout << "Please remove " << num_people - max_people
				<< " people to continue." << endl;
		}

		cout << "If you want to repeat please enter 'y', otherwise enter 'n' " << endl;
		cin >> repeat;

	}while(repeat == 'y');

	return 0;
}
