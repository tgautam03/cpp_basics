/*
Author:         Tushar Gautam
Date:           2nd Feb 2021
Description:    Program searches a file for
                numbers and then write:
                1) The largest and smallest
                2) The average
*/

#include <iostream>
#include <fstream>

// Macro to check if file opened properly
#define CHECK(stream)                           \
{                                               \
    if (stream.fail())                          \
    {                                           \
        std::cout << "Stream failed!! \n" <<    \
        "At line: " << __LINE__ << std::endl << \
        "In file: " << __FILE__ << std::endl;   \
        std::exit(1);                           \
    }                                           \
}   

// Function to find the largest and smallest in a file
void largeSmall(std::ifstream& inStreamInt);

// Function to calculate average
void average(std::ifstream& inStreamDouble);

int main()
{
    std::ifstream inStreamInt, inStreamDouble;
    std::ofstream outStreamInt, outStreamDouble;

    inStreamInt.open("01.dat");
    CHECK(inStreamInt);
    
    largeSmall(inStreamInt);
    inStreamInt.close();
    
    inStreamDouble.open("02.dat");
    CHECK(inStreamDouble);

    average(inStreamDouble);
    inStreamDouble.close();

    return 0;
}

void largeSmall(std::ifstream& inStreamInt)
{
    int largest = 0, smallest = 0;

    int next;
    while (inStreamInt >> next)
    {
        if (next > largest)
            largest = next;
        else if (next < smallest)
            smallest = next;
    }
    std::cout << "Largest: " << largest << std::endl;
    std::cout << "smallest: " << smallest << std::endl;
}

void average(std::ifstream& inStreamDouble)
{
    double avg;
    int count = 0;
    double next, sum = 0;
    while (inStreamDouble >> next)
    {
        sum += next;
        count++;
    }
    avg = sum/count;
    
    std::cout << "Average: " << avg << std::endl;
}