// Author:	Tushar Gautam
// Date:	16th Jan 2021
// Description:	Evaluating several boolean statements

#include <iostream>
using namespace std;

int main()
{
	int count = 0, limit = 10, x = 5, y = 2;

	if ((count == 0) && (limit < 20))
	 cout << "expr1 is true" << endl;
 	
	if (count == 0 && limit < 20)
	 cout << "expr2 is true" << endl;

	if ((limit > 20) || (count < 5))
	 cout << "expr3 is true" << endl;

	if (!(count == 12))
	 cout << "expr4 is true" << endl;
	
	if ((count == 1) && (x < y))
	 cout << "expr5 is true" << endl;

	if ((count < 10) || (x < y))
	 cout << "expr6 is true" << endl;
	
	if (!( ((count < 10) || (x<y)) && (count >= 0) ))
	 cout << "expr7 is true" << endl;
	
	if ((limit < 20) || ((limit/count) > 7))
	 cout << "expr8 is true" << endl;
	
	if (((limit/count) > 7) && (limit < 0))
	 cout << "expr9 is true" << endl;
	
	if ((limit < 0) && ((limit/count) > 7))
	 cout << "expr10 is true" << endl;
	
	if ((5 && 7) + (!6))
	 cout << "expr11 is true" << endl;

	return 0;
}
