/*
Author:         Tushar Gautam
Date:           27th January 2021
Description:    Tells which day it is based on the date

                Inputs:
                1) Date: dd:mm:yyyy

                Output:
                1) Day
*/

#include <iostream>

// Function accepts inputs
void inputs(int& dd, int& mm, int& yyyy);

// Function checks whether its leap year or not
bool isLeapYear(int year);

// Function extracts last two digits from a number
int lastTwo(int num);

// Function gets the centuary value
int getCenturyValue(int year);

// Function gets the year value
int getYearValue(int year);

// Function gets the month value
int getMonthValue(int month, int year);

// Function to print the output to the screen
void outputs(const int val);

// Function to calculate the day
int dayOfWeek(int month, int day, int year);

int main()
{
    int dd, mm, yyyy;

    // Get inputs
    inputs(dd, mm, yyyy);

    // Compute day from date
    int day = dayOfWeek(mm, dd, yyyy);

    outputs(day);

    return 0;
}

void inputs(int& dd, int& mm, int& yyyy)
{
    std::cout << "Enter the date (day followed by month(1-12) followed by year: ";
    std::cin >> dd >> mm >> yyyy;
}

bool isLeapYear(int year)
{
    if ((year % 400 == 0) || ((year % 4 == 0)&&(year % 100 != 0)))
        return true;
    else
        return false;
}

int getCenturyValue(int year)
{
    // Get first 2 digits
    int century = year / 100;

    return (3-(century%4))*2;
}

int getYearValue(int year)
{
    int l2Digits = lastTwo(year);

    int l2Digits_v2 = l2Digits / 4;

    return l2Digits + l2Digits_v2;
}

int lastTwo(int num)
{
    // Get the last digit
    int one = num % 10;

    // Remove last digit
    num /= 10;

    // Get 2nd last digit
    int ten = num % 10;

    return ten*10 + one;
}

int getMonthValue(int month, int year)
{
    int monthVal = -1;
    switch(month)
    {
        case 1:
            {
                if (isLeapYear(year) == true)
                    monthVal =  6;
                else
                    monthVal =  0;
            break;
            }

        case 2:
            {
                if (isLeapYear(year) == true)
                    monthVal =  2;
                else
                    monthVal =  3;
            break;
            }

        case 3:
            monthVal =  3;
            break;

        case 4:
            monthVal = 6;
            break;

        case 5:
            monthVal = 1;
            break;

        case 6:
            monthVal = 4;
            break;

        case 7:
            monthVal = 6;
            break;

        case 8:
            monthVal = 2;
            break;

        case 9:
            monthVal = 5;
            break;

        case 10:
            monthVal = 0;
            break;

        case 11:
            monthVal = 3;
            break;

        case 12:
            monthVal = 5;
            break;

        default:
            std::cout << "Invalid month number \n";
    }
    return monthVal;
}

void outputs(const int val)
{
    switch(val)
    {
        case 0:
            std::cout << "Sunday \n";
            break;

        case 1:
            std::cout << "Monday \n";
            break;

        case 2:
            std::cout << "Tuesday \n";
            break;

        case 3:
            std::cout << "Wednesday \n";
            break;

        case 4:
            std::cout << "Thursday \n";
            break;

        case 5:
            std::cout << "Friday \n";
            break;

        case 6:
            std::cout << "Saturday \n";
            break;

        default:
            std::cout << "Something wrong with your calculations \n";
    }
}

int dayOfWeek(int month, int day, int year)
{
    int sum = day + getMonthValue(month,year) + getYearValue(year) + getCenturyValue(year);
    
    return sum % 7;
}