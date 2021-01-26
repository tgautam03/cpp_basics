/*
Author:         Tushar Gautam
Date:           18th Jan 2021
Description:    Determine which pizza size is a 
                better buy.

                Inputs:
                1) Pizza diameter (in inches)
                2) Pizza price

                Outputs:
                1) Which is better to buy based on 
                cost per square inch
*/

#include <iostream>
#include <cmath>
using namespace std;

// Function that calculates price per square inch for a pizza
double psi(double diameter_par, double price_par);

int main()
{
    double small_dia, large_dia, small_price, large_price;

    cout << "Enter the diameter (in inches) of small pizza: ";
    cin >> small_dia;

    cout << "Enter the price of small pizza: ";
    cin >> small_price;

    cout << "Enter the diameter (in inches) of large pizza: ";
    cin >> large_dia;

    cout << "Enter the price of large pizza: ";
    cin >> large_price;

    double small_value = psi(small_dia, small_price);
    double large_value = psi(large_dia, large_price);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Price per square inch of small pizza is: " 
        << small_value << endl;
    cout << "Price per square inch of large pizza is: " 
        << large_value << endl;

    if (large_value < small_value)
        cout << "Large Pizza is a better buy \n";
    else
        cout << "Small Pizza is a better buy \n";
    
    return 0;
    
}


double psi(double dia, double price)
{
    double area;
    const double PI = 3.14;
    
    area = PI*pow((dia/2), 2);

    return (price/area);
}