// Author:      Tushar Gautam  
// Date:        16th Jan 2021
// Description: Difference b/w ++num and num++

#include <iostream>
using namespace std;

int main()
{
    int num1 = 4, num2 = 4;

    double sum1 = 2*(num1++);
    double sum2 = 2*(++num2);

    cout << sum1 << endl;
    cout << sum2 << endl;

    return 0;
}