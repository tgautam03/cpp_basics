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

#include <iostream>
#include <iomanip>

// Function to accept inputs
void inputs(int& hrs_par, int& mins_pars, int& wait_hrs_par, int& wait_mins_par);

// Function to convert 24 hour format to 12 hour format
void convert(int& hrs_par, char& suffix_par);

// Function to calculate time after wait
void calculate(int& day_par, int& hrs_par, int& mins_par, int& wait_hrs_par, int& wait_mins_par);

// Function to display output
void output(const int day_par, const int hrs_par, const int mins_par, const char suffix_par);

int main()
{
    using namespace std;

    char repeat;

    do
    {
        int hrs, mins, wait_hrs, wait_mins, day = 0;
        char suffix = 'A';

        inputs(hrs, mins, wait_hrs, wait_mins);

        calculate(day, hrs, mins, wait_hrs, wait_mins);

        convert(hrs, suffix);

        output(day, hrs, mins, suffix);

        cout << "Want to repeat? (y/n): ";
        cin >> repeat;

    }while(repeat == 'y');

    return 0;
}

void inputs(int& hrs, int& mins, int& wait_hrs, int& wait_mins)
{
    using namespace std;

    cout << "Enter the time in 24 hours format (hours followed by mins): ";
    cin >> hrs >> mins;

    cout << "Enter waiting time in hours and minutes: ";
    cin >> wait_hrs >> wait_mins;
}

void calculate(int& day, int& hrs, int& mins, int& wait_hrs, int& wait_mins)
{
    mins += wait_mins;
    if (mins >= 60)
    {
        mins -= 60;
        hrs += 1;
    }

    hrs += wait_hrs;
    if (hrs >= 24)
    {
        hrs -= 24;
        day += 1;
    }
}

void convert(int& hrs, char& suffix)
{
    if (hrs >= 12)
    {
        if (hrs > 12)
            hrs = hrs - 12;
        
        suffix = 'P';
    }
}

void output(const int day, const int hrs, const int mins, const char suffix)
{
    using namespace std;

    if (suffix == 'A')
        cout << "Day: " << day << " Time: " <<
        setfill('0') << setw(2) << hrs << ":" 
        << setfill('0') << setw(2) << mins << " AM \n";

    else if (suffix == 'P')
        cout << "Day: " << day << " Time: " <<
        setfill('0') << setw(2) << hrs << ":" 
        << setfill('0') << setw(2) << mins << " PM \n";

    else
        cout << "Invalid";
}