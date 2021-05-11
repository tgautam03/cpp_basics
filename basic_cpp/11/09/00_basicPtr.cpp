/*
Author:         Tushar Gautam
Date:           12th Feb 2021
Description:    Program to demonstrate basic 
                pointers and dynamic variable
*/

#include <iostream>

int main()
{
    int *p1, *p2;

    p1 = new int;
    std::cout << "Enter an integer for dynamic variable: ";
    std::cin >> *p1;
    p2 = p1;
    std::cout << "*p1 == " << *p1 << std::endl;
    std::cout << "*p2 == " << *p2 << std::endl;

    std::cout << "Enter another integer: ";
    std::cin >> *p2;
    std::cout << "*p1 == " << *p1 << std::endl;
    std::cout << "*p2 == " << *p2 << std::endl;

    p1 = new int;
    std::cout << "Enter an integer for a new dynamic variable: ";
    std::cin >> *p1;
    std::cout << "*p1 == " << *p1 << std::endl;
    std::cout << "*p2 == " << *p2 << std::endl;

    return 0;
}