/*
Author:         Tushar Gautam
Date:           1st Feb 2021
Description:    Program copying content from
                one file and pasts it to
                another with C replaced by C++
*/

#include <iostream>
#include <fstream>

// Function discards all inputs remaining in current line
void newLine(std::istream& inStream = std::cin);

// Function to input file name
void input(char fileName[]);

// Function to copy and replace word
void copyReplace(char fileName[]);

int main()
{
    char fileName[20];

    input(fileName);

    std::cout << "Copy and replacing....\n";

    copyReplace(fileName);

    std::cout << "Done \n";

    return 0;
}

void newLine(std::istream& inStream)
{
    char symbol;
    do
    {
        inStream.get(symbol);
    } while (symbol != '\n');
    
}

void input(char fileName[])
{
    char ans;

    do
    {
        std::cout << "Enter file name: ";
        std::cin >> fileName;
        std::cout << "Is " << fileName << " correct? (yes/no): ";
        std::cin >> ans;
        newLine();
    } while (ans == 'n' || ans == 'N');
}

void copyReplace(char fileName[])
{
    std::ifstream inStream;
    std::ofstream outStream;

    inStream.open(fileName);
    outStream.open("cplusad.dat");

    char next;
    inStream.get(next);
    while (! inStream.eof())
    {
        if (next == 'C')
            outStream<< "C++";
        else
            outStream << next;

        inStream.get(next);
    }
    
}