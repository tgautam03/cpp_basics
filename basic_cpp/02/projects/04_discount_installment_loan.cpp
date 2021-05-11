// Author:	Tushar Gautam
// Date:	14th Jan 2021
// Description:	Program calculates the face value required in order
// 		to receive the amount needed in case of a Discount
// 		Installment Loan
//
// 		Inputs:
// 		1) Amt customer needs to receive
// 		2) Interest Rate
// 		3) Duration of loan (in months)
//
// 		Outputs:
// 		1) Face value required
// 		2) Monthly Payment

#include <iostream>
using namespace std;

int main()
{
	double amt_req = 0, interest_rate = 0; 
	double duration = 0;

	while(true)
	{
		cout << "Amount required: ";
		cin >> amt_req;

		cout << "Interest rate: ";
		cin >> interest_rate;

		cout << "Duration of loan (in months): ";
		cin >> duration;

		double face_val = amt_req/(1-(interest_rate/100*duration/12));

		cout << "Face Value required: " << face_val << endl;
		cout << "Monthly loan payment: " << face_val/duration << endl;

	}


		

}
