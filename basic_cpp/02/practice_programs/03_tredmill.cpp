// Author: 	Tushar Gautam
// Date: 	11th Jan 2021
// Description:	Program converts miles per hour input 
// 		to pace in minutes+seconds per mile
//

#include <iostream>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

	double speed = 0, pace = 0, pace_secs = 0;
	int pace_mins = 0;
	cout << "Please enter the speed in Miles per hour: ";
	cin >> speed;

	pace = (1/speed)*60;
	pace_mins = static_cast<int>(pace);
	pace_secs = (pace - pace_mins)*60;

	cout << "Pace: " << pace_mins << " minutes"
	       << " and "<< pace_secs << " seconds." << endl;

	return 0;

}
