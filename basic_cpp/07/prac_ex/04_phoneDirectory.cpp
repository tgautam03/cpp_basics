/*
Author:         Tushar Gautam
Date:           23rd Jan 2021
Description:    -> Find phone number corresponding to
                the name

                Inputs:
                1) 1D Array of names
                2) 1D Array of phone numbers

                Outputs:
                1) The number 
*/

#include <iostream>
#include <cstring>

// Function to look up string
std::string lookupName(std::string name, std::string names[], 
                        std::string numbers[], int size);

int main()
{
    std::string names[] = {"Michael Myers",
                    "Ash Williams",
                    "Jack Torrance",
                    "Freddy Krueger"};
    std::string phoneNumbers[] = {"333-8000","333-2323",
                            "333-6150","339-7970"};
    
    std::string targetName, targetPhone;
    char c;
    do
    {
        std::cout << "Enter a name to find the "
            << "corresponding phone number."
            << std::endl;
        std::getline(std::cin, targetName);
        targetPhone = lookupName(targetName,
        names, phoneNumbers,4);
        
        if (targetPhone.length() > 0)
            std::cout << "The number is: " << targetPhone << std::endl;
        else
            std::cout << "Name not found. " << std::endl;
        
        std::cout << "Look up another name? (y/n)"
            << std::endl;
        std::cin >> c;
        std::cin.ignore();
    } while (c == 'y');
    return 0;
}

std::string lookupName(std::string name, std::string names[], std::string numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (names[i] == name)
        {
            return numbers[i];
        }
    }
    return " Not in directory";
}