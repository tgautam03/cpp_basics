/*
Author:         Tushar Gautam
Date:           27th January 2021
Description:    Convert 24 hour notation to 
                12 hour notation.

                Inputs:
                1) Two integers : Hours and minutes

                Output:
                2) Time in AM or PM
*/

#include <stdio.h>

// Function to accept inputs
void inputs(int* hrs_par, int* mins_pars);

// Function to convert 24 hour format to 12 hour format
void convert(int* hrs_par, char* suffix_par);

// Function to display output
void output(const int hrs_par, const int mins_par, const char suffix_par);

int main()
{
    char repeat;

    do
    {
        int hrs, mins;
        char suffix = 'A';

        inputs(&hrs, &mins);

        convert(&hrs, &suffix);

        output(hrs, mins, suffix);

        printf("Want to repeat? (y/n): ");
        cin >> repeat;

    }while(repeat == 'y');

    return 0;
}

void inputs(int* hrs, int* mins)
{
    printf("Enter the time in 24 hours format (hours followed by mins): ");
    scanf("%d %d", hrs, mins);
}

void convert(int* hrs, char* suffix)
{
    if (&hrs >= 12)
    {
        if (hrs > 12)
            hrs = hrs - 12;
        
        suffix = 'P';
    }
}

void output(const int hrs, const int mins, const char suffix)
{
    using namespace std;

    if (suffix == 'A')
        cout << hrs << ":" << mins << " AM \n";

    else if (suffix == 'P')
        cout << setfill('0') << setw(2) << hrs << ":" 
        << setfill('0') << setw(2) << mins << " PM \n";

    else
        cout << "Invalid";
}