/*
Author:         Tushar Gautam
Date:           13th Feb 2021
Description:    Define a class with 
                public and member functions.
*/

#include <iostream>

class DayOfYear
{
public:
    // Member method to accept inputs
    void input();
    // Member method to display outputs
    void output();

    // Member method to set new values
    void set(int newMonth, int newDay);
    // Member method to get month value
    int getMonth();
    // Member method to get day value
    int getDay();

private:
    int month;
    int day;
    // Member function to check valid inputs
    void check();
};

int main()
{
    DayOfYear birthDay, today;

    birthDay.input();
    std::cout << "Birthday is on ";
    birthDay.output();

    today.set(2, 13);

    if (today.getDay() == birthDay.getDay() && today.getMonth() == birthDay.getMonth())
        std::cout << "Happy Birthday \n";
    else
        std::cout << "Happy unBirthday \n";
    
    return 0;
}


void DayOfYear::check()
{
    switch(month)
    {
        case 1:
        {
            if (day < 0 || day > 31)
            {
                std::cout << "Invalid date for Jan \n";
                std::cout << "Illegal value encountered, Aborting.... \n";
                exit(1);
                break;
            }
        }
        break;

        case 2:
        {
            if (day < 0 || day > 29)
            {
                std::cout << "Invalid date for Feb \n";
                std::cout << "Illegal value encountered, Aborting.... \n";
                exit(1);
                break;
            }
        }
        break;

        case 3:
        {
            if (day < 0 || day > 31)
            {
                std::cout << "Invalid date for March \n";
                std::cout << "Illegal value encountered, Aborting.... \n";
                exit(1);
                break;
            }
        }
        break;

        case 4:
        {
            if (day < 0 || day > 30)
            {
                std::cout << "Invalid date for April \n";
                std::cout << "Illegal value encountered, Aborting.... \n";
                exit(1);
                break;
            }
        }
        break;

        case 5:
        {
            if (day < 0 || day > 31)
            {
                std::cout << "Invalid date for May \n";
                std::cout << "Illegal value encountered, Aborting.... \n";
                exit(1);
                break;
            }
        }
        break;

        case 6:
        {
            if (day < 0 || day > 30)
            {
                std::cout << "Invalid date for June \n";
                std::cout << "Illegal value encountered, Aborting.... \n";
                exit(1);
                break;
            }
        }
        break;

        case 7:
        {
            if (day < 0 || day > 31)
            {
                std::cout << "Invalid date for July \n";
                std::cout << "Illegal value encountered, Aborting.... \n";
                exit(1);
                break;
            }
        }
        break;

        case 8:
        {
            if (day < 0 || day > 31)
            {
                std::cout << "Invalid date for Aug \n";
                std::cout << "Illegal value encountered, Aborting.... \n";
                exit(1);
                break;
            }
        }
        break;

        case 9:
        {
            if (day < 0 || day > 30)
            {
                std::cout << "Invalid date for Sep \n";
                std::cout << "Illegal value encountered, Aborting.... \n";
                exit(1);
                break;
            }
        }
        break;

        case 10:
        {
            if (day < 0 || day > 31)
            {
                std::cout << "Invalid date for Oct \n";
                std::cout << "Illegal value encountered, Aborting.... \n";
                exit(1);
                break;
            }
        }
        break;

        case 11:
        {
            if (day < 0 || day > 30)
            {
                std::cout << "Invalid date for Nov \n";
                std::cout << "Illegal value encountered, Aborting.... \n";
                exit(1);
                break;
            }           
        }
        break;

        case 12:
        {
            if (day < 0 || day > 31)
            {
                std::cout << "Invalid date for Dec \n";
                std::cout << "Illegal value encountered, Aborting.... \n";
                exit(1);
                break;
            }
        }
        break;

        default:
        {
            std::cout << "Invalid month number \n";
            std::cout << "Illegal value encountered, Aborting.... \n";
            exit(1);
        }
    }

}


void DayOfYear::input()
{
    std::cout << "Enter month as a number: ";
    std::cin >> month;

    std::cout << "Enter date as a number: ";
    std::cin >> day;

    check();
}

void DayOfYear::output()
{
    std::cout << "Date: " << day << ", Month: " << month << std::endl; 
}

void DayOfYear::set(int newMonth, int newDay)
{
    month = newMonth;
    day = newDay;

    check();
}

int DayOfYear::getMonth()
{
    return month;
}

int DayOfYear::getDay()
{
    return day;
}