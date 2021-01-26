// Author:      Tushar Gautam
// Date:        16th Jan 2021
// Description: Rock-papers-scissors
//
//              Inputs:
//              1) Two inputs from user
//              
//              Outputs:
//              1) Determines who wins

#include <iostream>
using namespace std;

int main()
{
    char p1 = ' ', p2 = ' ', done = 'n';

    while (done == 'n')
    {
        cout << "Player 1: ";
        cin >> p1;

        cout << "Player 2: ";
        cin >> p2;

        if (p1 == 'r' || p1 == 'R')
        {
            switch(p2)
            {
                case 'r':
                case 'R':
                    cout << "Nobody wins \n";
                break;

                case 'p':
                case 'P':
                    cout << "P2 wins \n";
                break;

                case 's':
                case 'S':
                    cout << "P1 wins \n";
                break;

                default:
                    cout << "Invalid move by P2 \n";
            }
        }

        else if (p1 == 'p' || p1 == 'P')
        {
            switch(p2)
            {
                case 'r':
                case 'R':
                    cout << "P1 wins \n";
                break;

                case 'p':
                case 'P':
                    cout << "Nobody wins \n";
                break;

                case 's':
                case 'S':
                    cout << "P2 wins \n";
                break;

                default:
                    cout << "Invalid move by P2 \n";
            }
        }

        else if (p1 == 's' || p1 == 'S')
        {
            switch(p2)
            {
                case 'r':
                case 'R':
                    cout << "P2 wins \n";
                break;

                case 'p':
                case 'P':
                    cout << "P1 wins \n";
                break;

                case 's':
                case 'S':
                    cout << "Nobody wins \n";
                break;

                default:
                    cout << "Invalid move by P2 \n";
            }
        }

        else
        {
            cout << "Invalid move by P1 \n";
        }

        cout << "Are you done? (y/n): ";
        cin >> done;
    }

    return 0;
}
