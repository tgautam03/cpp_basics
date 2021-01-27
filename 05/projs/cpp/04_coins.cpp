/*
Author:         Tushar Gautam
Date:           27th January 2021
Description:    Tells what coins to give 
                out for any amount of change
                from 1 cent to 99 cents.

                Inputs:
                1) Amount in cents

                Output:
                2) How many each type
*/

#include <iostream>

// Function to calculate the number of coins requires
void calculate(int& quarters_par, int& dimes_par, int& pennies_par, const int amt_par);

int main()
{
    using namespace std;

    int quarters = 0, dimes = 0, pennies = 0, amt;

    cout << "Enter the amount in cents (should be less than 100): ";
    cin >> amt;

    calculate(quarters, dimes, pennies, amt);

    cout << amt << " cents can be given as \n";
    cout << quarters << " quarter(s) " << dimes << " dime(s) "
    << pennies << " penny(pennies) \n";
}

void calculate(int& quarters, int& dimes, int& pennies, const int amt)
{
    quarters = amt / 25;
    int remainder = amt % 25;

    dimes = remainder / 10;
    
    pennies = remainder % 10;
}