// Author: Tushar Gautam
// Date: 7th jan 2021
// Description: Babylonian algorithm to compute the
// 		square root of a number n

#include <iostream>
using namespace std;

int main()
{
	double num = 0, guess_prev = 0, guess_next = 0;
	double change = 0;

	cout << "Enter the number: ";
	cin >> num;

	int iter = 0;
	guess_next = num/2;

	do
	{
		guess_prev = guess_next;
		double r = num/guess_prev;
		guess_next = (guess_prev + r) / 2;
		iter++;

		change = (guess_prev - guess_next)/guess_next;

		cout << "change: " << change << endl;

	} while(change>0.01);
	
	cout << "Square root of number " << num <<
		" is " << guess_next << endl;
	cout << "and it took " << iter << " iterations." 
		<< endl;
	return 0;
}
