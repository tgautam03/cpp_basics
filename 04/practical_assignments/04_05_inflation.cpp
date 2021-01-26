/*
Author:         Tushar Gautam
Date:           19th Jan 2021
Description:    Calculate inflation rate

                Inputs:
                1) Price today and one year ago

                Outputs:
                1) Inflation rate
                2) Price in 1 and 2 years time
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

// Function to accept the inputs
void inputs(double& price_now_par, double& price_past_par);

// Function to calculate inflation rate
double inflation_rate(double price_now_par, double price_past_par);

// Function to calculate future price
double future_price(double price_now, double rate, double time);

int main()
{
    using namespace std;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    double price_now, price_past, price_future;
    int time;
    
    // Getting and storing inputs
    inputs(price_now, price_past);

    // Return inflation rate
    double rate = inflation_rate(price_now, price_past);
    cout << "Inflation rate is " << rate << " %" << endl;

    cout << "Enter the years in future you want to see the price: ";
    cin >> time;

    // Return future price
    price_future = future_price(price_now, rate, time);

    cout << "After " << time << " years, the price of ";
    cout << "this same item will be: " << price_future << endl;

    return 0;
}

void inputs(double& price_now, double& price_past)
{
    using namespace std;

    cout << "Enter the present price: ";
    cin >> price_now;

    cout << "Enter the last year's price: ";
    cin >> price_past;
}

double inflation_rate(double price_now, double price_past)
{
    return ((price_now - price_past)/price_past * 100);
}

double future_price(double price_now, double rate, double time)
{
    double price_future = 0;

    for(int i = 0; i < time; i++)
    {
        price_future = (rate / 100 * price_now) + price_now;
        price_now = price_future;
    }
    return price_future;
}