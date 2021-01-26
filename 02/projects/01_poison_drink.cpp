// Author: 	Tushar Gautam
// Date: 	11th Jan 2021
// Description:	Program telling how much soda pop can be
// 		consumed without dying
//
// 		Inputs: 1) Amount of Artificial Sweetner that kills mouse (in grams) -> Supplied
// 			2) Mass of the mouse (in grams) -> Supplied
// 			3) Mass of soda pop can (in grams) -> Supplied
// 			4) Weight of the person (in Kilograms) -> User Input
//

#include <iostream>
using namespace std;

int main()
{
	double amt_swtnr2kill_mouse = 5, mouse_mass = 35, person_mass = 0;
	int soda_can_mass = 350;

	const double amt_swtnr_soda = 0.001 * soda_can_mass;

	while(true)
	{
		cout << "Please enter the weight (in Kg) when you plan to stop dieting: ";
		cin >> person_mass;

		double amt_swtnr2kill_person = (amt_swtnr2kill_mouse / mouse_mass)*person_mass;

		int num_allow_cans = amt_swtnr2kill_person/amt_swtnr_soda;
		
		cout << "You can have " << num_allow_cans << " cans without dying." << endl;
	}

	return 0;

	
}
