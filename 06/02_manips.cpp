/*
Author:         Tushar Gautam
Date:           31st Jan 2021
Description:    Trying several manipulators
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

int main()
{
    std::cout << "======================" << std::endl;
    std::cout << "Example 1" << std::endl;
    std::cout << "======================" << std::endl;
    std::cout << "*";
    std::cout.width(5);
    std::cout << 123 << "*" << 123 << "*" << std::endl;
    std::cout << "*" << std::setw(5) << 123 << 
    "*" << 123 << "*" << std::endl;

    std::cout << "======================" << std::endl;
    std::cout << "Example 2" << std::endl;
    std::cout << "======================" << std::endl;
    std::cout << "*" << std::setw(5) << 123;
    std::cout.setf(std::ios::left);
    std::cout << "*" << std::setw(5) << 123;
    std::cout.setf(std::ios::right);
    std::cout << "*" << std::setw(5) << 123 << "*" << std::endl;
    


}