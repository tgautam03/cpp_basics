/* 
Author:      Tushar Gautam
Date:        16th Jan 2021
Description: Program finds the temperature that's
             same for both Celcius and Fahrenheit
*/

#include <iostream>
using namespace std;

int main()
{
    double celcius = 100, fahrenheit = (9*celcius/5) + 32;

    int iter = 0;

    while (celcius != fahrenheit)
    {
        celcius -= 0.5;
        fahrenheit =  (9*celcius/5) + 32;
        iter++;
    }
    
    cout << "Temp at which celcius == fahrenheit is " 
    << celcius << endl;

    cout << "It took " << iter << " iterations to do so!! \n";

    return 0;
}