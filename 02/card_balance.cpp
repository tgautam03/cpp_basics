#include <iostream>
using namespace std;

int main()
{
	double balance = 50;
	int month = 0;

	while (balance <= 100)
	{
	balance += 0.02*balance;
	month++;
	}

	cout << "You can spend for " << month << " months" << endl;

	return 0;
}
