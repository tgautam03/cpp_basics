/*
Author:         Tushar Gautam
Date:           2nd Feb 2021
Description:    Program gives and take
                advice on program writing
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

// Function that reads advice from a file
void readAdvice(std::ifstream& inStream);

// Function that writes advice to a file
void writeAdvice(std::ofstream& outStream);

int main()
{
    std::ifstream inStream;
    std::ofstream outStream;

    readAdvice(inStream);

    std::cout << "Now it's your time to write an advice (Enter double enter to end your advice): \n";

    writeAdvice(outStream);

    return 0;

}

void readAdvice(std::ifstream& inStream)
{
    inStream.open("05.dat");
    CHECK(inStream);
    char next;

    inStream.get(next);
    while (!inStream.eof())
    {
        std::cout << next;;
        inStream.get(next);
    }

    inStream.close();
}

void writeAdvice(std::ofstream& outStream)
{
    outStream.open("05.dat");
    CHECK(outStream);
    char next;

    while (true)
    {
        std::cin.get(next);
        if (next == '\n')
        {
            outStream.put(next);

            char now;
            std::cin.get(now);
            if (now == '\n')
            {
                break;
            }
                
            else
            {
                outStream.put(now);
                continue;
            }
                
        }
        else
            outStream.put(next);
        
    }
    outStream.close();

}
