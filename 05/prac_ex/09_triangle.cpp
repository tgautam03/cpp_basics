/*
Author:         Tushar Gautam
Date:           19th Jan 2021
Description:    Compute area of an arbitrary triangle

                Inputs:
                1) lengths of the sides

                Outputs:
                2) Area of the triangle
*/

#include <iostream>
#include <cmath>

void compute(double a_par, double b_par, double c_par, double& area_par, double& perimeter_par);

int main()
{
    using namespace std;

    double a, b, c, area, perimeter;

    // Accepting inputs
    cout << "Enter the lengths of sides: ";
    cin >> a >> b >> c;

    // Compute and return the area and parameter
    compute(a, b, c, area, perimeter);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
}

void compute(double a, double b, double c, double& area, double& perimeter)
{
    perimeter = a + b + c;

    double sp = perimeter /2;

    area = sqrt(sp*(sp - a)*(sp - b)*(sp - c));
}

