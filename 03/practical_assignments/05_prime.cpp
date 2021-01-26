/*
Author:         Tushar Gautam
Date:           16th Jan 2021
Description:    Find and print all prime numbers between 
                3 and 100
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Prime numbers between 3 and 100 are: \n";
    for (int i = 3; i <= 100; i++)
    {
        bool is_prime = true;
        for (int n = 2; n < i; n++)
        {
            if (i%n == 0)
            {
                is_prime = false;
                break; 
            }
        }
        if (is_prime == true)
            cout << i << endl;
    }
    
}