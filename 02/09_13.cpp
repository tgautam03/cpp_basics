#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a whole number: ";
	int the_number=0;
	cin >> the_number;

	cout << "Now please enter another number: ";
	double trouble=0;
	cin >> trouble;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "The number you just entered is " << trouble << endl;

	cout << "Please enter two numbers \n";
	int a,b,sum;
	cin >> a >> b;
	sum = a+b;
	cout << "Sum of the two numbers you entered is " << sum << endl;

	return 0;
}
