/*
Author:         Tushar Gautam
Date:           1st Feb 2021
Description:    Program asks user to confirm 
                if input is correct
*/

#include <iostream>

// Function discards all inputs remaining in current line
void newLine();

// Function to accept input number
void getInt(int& n);

int main()
{
    int n;
    getInt(n);
    std::cout << "Final number: " << n << std::endl;
}

void newLine()
{
    char symbol;
    do
    {
        std::cin.get(symbol);
    } while (symbol != '\n');
    
}

void getInt(int& n)
{
    char ans;
    do
    {
        std::cout << "Enter number: ";
        std::cin >> n;

        std::cout << "You entered " << n
        << ". Is that correct? (yes/no): ";
        std::cin >> ans;
        newLine();
    }while(ans != 'y' || ans != 'Y');
}