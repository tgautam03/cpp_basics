/*
Author:         Tushar Gautam
Date:           27th January 2021
Description:    Calculates windchill factor

                Inputs:
                1) Wind spped (m/s)
                2) Temperature in celcius

                Output:
                2) Windchill
*/

#include <iostream>
#include <cmath>

void inputs(double& t_par, double& v_par); 

int main()
{
    using namespace std;

    double t, v;

    inputs(t, v);
    
    if (t > 10)
    {
        cout << "Temperature can't be greater than 10 \n";
        return 0;
    }

    double W = 13.12 + 0.6215*t - 11.37*pow(v, 0.16) + 0.3965*t*pow(v, 0.16);

    cout << "Windchill index: " << W << endl;

    return 0;
}


void inputs(double& t, double& v)
{
    using namespace std;

    cout << "Enter temperature in celcius: ";
    cin >> t;

    cout << "Enter wind speed (m/s): ";
    cin >> v;
}