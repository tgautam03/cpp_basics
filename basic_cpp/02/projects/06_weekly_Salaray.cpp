// Author: 	Tushar Gautam
// Date: 	15th Jan 2021
// Description:	Program calculated the gross pay and all the deductables
//
// 		Inputs:
// 		1) Number of hours worked in a week
// 		2) Number of dependents
//
// 		Outputs:
// 		1) Gross pay
// 		2) Each withholding amount
// 		3) Net take-home pay
//

#include <iostream>
using namespace std;

int main()
{
	const double first_40hr = 16.78, after_40hr = 1.5*first_40hr;

	int hrs = 0, dependents = 0, health_insurance = 0;

	double gross_pay = 0;

	char repeat = 'n';

	do
	{
		cout << "Enter the hours worked: ";
		cin >> hrs;

		if (hrs>40)
		{
			gross_pay = first_40hr*40 + after_40hr*(hrs-40);
		}
		else
		{
			gross_pay = first_40hr*hrs;
		}

		double sst = 0.06*gross_pay;
		double fit = 0.15*gross_pay;
		int uf = 10;

		cout << "Enter the number of dependents: ";
		cin >> dependents;

		if (dependents >= 3)
		{
			health_insurance = 35;
		}

		cout << "Gross pay: " << gross_pay << endl;
		cout << "Net take-home pay: " << gross_pay - (sst+fit+uf+health_insurance)
			<< endl;
		
		cout << "Want to repeat?: (y/n)";
		cin >> repeat;
	}while(repeat=='y');

	return 0;
}
