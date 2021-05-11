/*
Author:         Tushar Gautam
Date:           16th Jan 2021
Description:    Program calculates whether the 
                sphere will sink or not

                Inputs:
                1) Weight(in lbs) and radius(in ft) of the sphere

                Outputs:
                2) Bool value telling sinking: true/false
*/

#include <iostream>
using namespace std;

int main()
{
    const double SG_WATER = 62.4, PI = 3.14;

    double weight, radius;

    cout << "Enter the weight of the sphere (in lbs): ";
    cin >> weight;

    cout << "Enter the radius of the sphere (in ft): ";
    cin >> radius;

    double vol = 4/3*PI*radius*radius*radius;

    double bouyand_force = vol*SG_WATER;

    if (bouyand_force < weight)
        cout << "It'll sink \n";
    else
        cout << "It'll float \n";

    return 0;
}