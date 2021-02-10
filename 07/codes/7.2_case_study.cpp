/*
Author:         Tushar Gautam
Date:           23rd Jan 2021
Description:    There are four manufacturing plants, 
                show a bar graph displaying production
                for each plant

                Inputs:
                1) Production for each plant

                Outputs:
                1) Graph
*/

#include <iostream>
#include <cmath>

const int NUM_PLANTS = 4;

void input_data(int production_par[]);
// Accepts production values for each plant

void scale(int production_par[]);
// Scales the values in the array

void graph(const int production[]);
// Graphs the production

int main()
{
    int production[NUM_PLANTS];

    input_data(production);
    
    scale(production);

    graph(production);

    return 0;
}


void input_data(int production[])
{
    using namespace std;
    cout << "Get ready to enter the production of each plant \n";

    for (int i = 0; i < NUM_PLANTS; i++)
    {
        cout << endl;
        cout << "Enter production for plant: " << i+1 << endl;
        cout << "Enter number of units producted by each department: \n";
        cout << "When the list is over, enter a negative number \n";
        
        int input = 0, sum = 0;
        while(input >= 0)
        {
            sum += input;
            cin >> input;
        }

        production[i] = sum;
        cout << "Total: " << sum << endl;
    }
}

void scale(int production[])
{
    for(int i = 0; i < NUM_PLANTS; i++)
    {
        production[i] = round(static_cast<double>(production[i])/1000);        
    }
}

void graph(const int production[])
{
    using namespace std;

    cout << endl;
    cout << "Production graph: \n";

    for(int i = 0; i < NUM_PLANTS; i++)
    {
        cout << "Plant " << i+1 << " : ";
        
        for(int j = 0; j < production[i]; j++)
        {
            cout << "*";
        }
        cout << endl; 
    }
}

