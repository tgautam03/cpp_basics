/*
Author:         Tushar Gautam
Date:           2nd Feb 2021
Description:    Take inputs from two files
                merge them and merged file 
                should be in ascending order
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

// Function to merge two files
void readMerge(std::ifstream& inStream1, std::ifstream& inStream2, std::ofstream& outStream);

int main()
{
    std::ifstream inStream1, inStream2;
    std::ofstream outStream;

    readMerge(inStream1, inStream2, outStream);
}

void readMerge(std::ifstream& inStream1, std::ifstream& inStream2, std::ofstream& outStream)
{
    inStream1.open("07a.dat");
    CHECK(inStream1);

    inStream2.open("07b.dat");
    CHECK(inStream2);

    outStream.open("07out.dat");
    CHECK(outStream);

    int f1, f2;

    while((! inStream1.eof()) || (! inStream2.eof()))
    {
        inStream1 >> f1;
        inStream2 >> f2;
        std::cout << "f1: " << f1 << std::endl;
        std::cout << "f2: " << f2 << std::endl;
        if (f1 < f2)
            {
                outStream << f1 << std::endl;
                // inStream2.putback(f2);
            }
        else if (f2 < f1)
        {
            outStream << f2 << std::endl;
            // inStream1.putback(f1);
        }
        else
        {
            outStream << f1 << std::endl;
            outStream << f2 << std::endl;
        }
    }
    
    inStream1.close();
    inStream2.close();
    outStream.close();
    
}