/*
Author:         Tushar Gautam
Date:           27th January 2021
Description:    Duel

                Inputs:

                Output:
                
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

const double AARON_ACC = 1./3;
const double BOB_ACC = 1./2;
const double CHARLIE_ACC = 1.;

// Function to simulate shoot
void shoot(bool& targetAlive_par, double accuracy_par);

// Function to simulate duel
void startDuel(bool& aaronAlive, int& aaronWins, bool& bobAlive, int& bobWins, bool& charlieAlive, int& charlieWins);

int main()
{
    int aaronWins = 0, bobWins = 0, charlieWins = 0;
    // Current time as seed for random number generator
    srand(time(0));

    for (int i = 0; i<1000; i++)
    {
        bool aaronAlive = 1, bobAlive = 1, charlieAlive = 1;

        startDuel(aaronAlive, aaronWins, bobAlive, bobWins, charlieAlive, charlieWins);
    }

    std::cout << "Probability of Aaron winning: " << aaronWins/1000. << std::endl;
    std::cout << "Probability of Bob winning: " << bobWins/1000. << std::endl;
    std::cout << "Probability of Charlie winning: " << charlieWins/1000. << std::endl;
    return 0;
}

void shoot(bool& targetAlive, double accuracy)
{
    double num = (rand() % 101) / 100.;

    if (num < accuracy)
        targetAlive = false;
}

void startDuel(bool& aaronAlive, int& aaronWins, bool& bobAlive, int& bobWins, bool& charlieAlive, int& charlieWins)
{
    int count = 0;

    while(true)
    {

        if (aaronAlive == true)
        {
            // Aaron shoots
            if (charlieAlive == true)
            {
                if (count == 0)
                    shoot(charlieAlive, 0);
                else
                    shoot(charlieAlive, AARON_ACC);
            }
            else
                if (count == 0)
                    shoot(bobAlive, 0);
                else
                    shoot(bobAlive, AARON_ACC);
            }

        if (bobAlive == true)
        {
            // Bob shoots
            if (charlieAlive == true)
                shoot(charlieAlive, BOB_ACC);
            else
                shoot(aaronAlive, BOB_ACC);
        }
        
        if (charlieAlive == true)
        {
            // Charlie Shoots
            if (bobAlive == true)
                shoot(bobAlive, CHARLIE_ACC);
            else
                shoot(aaronAlive, CHARLIE_ACC);
        }
    
        count++;

        if (aaronAlive && !bobAlive && !charlieAlive)
        {
            aaronWins++;
            std::cout << "Aaron won after " << count << " duels. \n"; 
            break;
        }

        else if (bobAlive && !aaronAlive && !charlieAlive)
        {
            bobWins++;
            std::cout << "Bob won after " << count << " duels. \n"; 
            break;
        }

        else if (!bobAlive && !aaronAlive && charlieAlive)
        {
            charlieWins++;
            std::cout << "Charlie won after " << count << " duels. \n";
            break;
        }

        else
            continue;
    }
}