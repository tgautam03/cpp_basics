/*
Author:         Tushar Gautam
Date:           13th Feb 2021
Description:    Define a class with member functions
*/

#include <iostream>

class DayOfYear
{
public:
    void input();
    void output();
    int month;
    int day;
};

int main()
{
    DayOfYear birthday, lastDay;

    birthday.input();
    std::cout << "The birthday: ";
    birthday.output();

    lastDay.input();
    std::cout << "The lastDay: ";
    lastDay.output();
}

void DayOfYear::input()
{
    std::cout << "Enter the month: ";
    std::cin >> month;

    std::cout << "Enter the date: ";
    std::cin >> day;
}


void DayOfYear::output()
{
    std::cout << "It's " << day << " " << month << std::endl; 
}