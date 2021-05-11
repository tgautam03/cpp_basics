/*
Author:         Tushar Gautam
Date:           31st Jan 2021
Description:    Takes input from a file and 
                outputs to another file in
                a clean format
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

// Function to generate clean outputs
void makeClean(std::ifstream& messyFile, 
                std::ofstream& cleanFile, int numDecimal,
                int fieldWidth);

int main()
{
    std::ifstream inStream;
    std::ofstream outStream;

    inStream.open("rawData.dat");
    outStream.open("cleanData.dat");

    makeClean(inStream, outStream, 4, 15);

    inStream.close();
    outStream.close();

    return 0;
}

void makeClean(std::ifstream& messyFile, 
                std::ofstream& cleanFile, int numDecimal,
                int fieldWidth)
{
    cleanFile.setf(std::ios::fixed);
    cleanFile.setf(std::ios::showpoint);
    cleanFile.setf(std::ios::showpos);
    cleanFile.setf(std::ios::right);
    cleanFile.precision(numDecimal);

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.setf(std::ios::showpos);
    std::cout.setf(std::ios::right);
    std::cout.precision(numDecimal);

    double next;
    while(messyFile >> next)
    {
        std::cout << std::setw(fieldWidth) << next << std::endl;
        cleanFile << std::setw(fieldWidth) << next << std::endl;
    }
}