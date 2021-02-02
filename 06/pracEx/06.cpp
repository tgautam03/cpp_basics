/*
Author:         Tushar Gautam
Date:           2nd Feb 2021
Description:    Program removes extra spaces from the file
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

// Function that reads and edits the file
void readEdit(std::ifstream& inStream, std::ofstream& outStream);

int main()
{
    std::ifstream inStream;
    std::ofstream outStream;

    readEdit(inStream, outStream);

    return 0;

}

void readEdit(std::ifstream& inStream, std::ofstream& outStream)
{
    inStream.open("05.dat");
    CHECK(inStream);
    outStream.open("06Edited.dat");
    CHECK(outStream);
    
    char now;

    inStream.get(now);
    while (!inStream.eof())
    {
        if (now == ' ')
        {
            outStream.put(now);

            char next;
            inStream.get(next);
            while (next == ' ')
            {
                inStream.get(next);
            }
            outStream.put(next);
        }
        else
        {
            outStream.put(now);
        }
        inStream.get(now);
    }

    inStream.close();
    outStream.close();
}