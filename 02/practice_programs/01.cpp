// Author: Tushar Gautam
// Last Modified: 7th Jan 2021
// Description: Program reads weight of a package in ounces
// 		and output the weight in metric tons and
// 		the number of boxes needed to hold 1 ton of
// 		cereal
 
#include <iostream>
using namespace std;

int main()
{
	double weight;

	while (true)
	{
		cout << "Please enter the weight in ounces: ";
		cin >> weight;
		cout << "Weight in metric tons is " << weight/35273.92
		     << endl;
	}
	return 0;
}
