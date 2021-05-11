/*
Author:         Tushar Gautam
Date:           18th Jan 2021
Description:    Calculate gravitational force

                Inputs:
                1) Mass of two bodies
                2) Distance b/w them

                Outputs:
                1) Gravitational force
*/

#include <iostream>
#include <cmath>

// Function to accept inputs
void inputs(double& m1_par, double& m2_par, double& d_par);

// Function to calculate gravitational force
double force(double m1_par, double m2_par, double d_par);

// Defining gravitational constant
const double G = 6.673 * pow(10, -8);


int main()
{
    using namespace std;

    double m1, m2, d, f;

    inputs(m1, m2, d);

    f = force(m1, m2, d);

    cout << "Force: " << f << endl;

    return 0;

}


void inputs(double& m1, double& m2, double& d)
{
    using namespace std;

    cout << "Enter m1: ";
    cin >> m1;

    cout << "Enter m2: ";
    cin >> m2;

    cout << "Enter d: ";
    cin >> d;
}

double force(double m1, double m2, double d)
{
    return (G*m1*m2/pow(d,2));
}