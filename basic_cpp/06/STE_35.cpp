/*
Author:         Tushar Gautam
Date:           1st Feb 2021
Description:    Program reads a file and 
                prints to screen the exact
                contents.
*/

#include <iostream>
#include <fstream>

// Function discards all inputs remaining in current line
void newLine(std::istream& inStream = std::cin);

// Function to input file name
void fileInput(char fileName[]);

// Function to read contents of a file to screen
void read(std::ifstream& inStream);

int main()
{
    char fileName[20], correct;

    fileInput(fileName);

    std::ifstream inStream;
    inStream.open(fileName);

    read(inStream);

    return 0;
}

void newLine(std::istream& inStream)
{
    char next;
    do
    {
        inStream.get(next);   
    } while (next != '\n');
    
}

void fileInput(char fileName[])
{
    char ans = ' ';
    
    do
    {
        std::cout << "Enter the file name: ";
        std::cin >> fileName;
        std::cout << "Is " << fileName << " correct? (y/n): ";
        std::cin >> ans;
        newLine();
    } while (ans == 'n' || ans == 'n');
}


void read(std::ifstream& inStream)
{
    char next ;
    inStream.get(next);

    while(! inStream.eof())
    {
        std::cout.put(next);
        inStream.get(next);
    }
}