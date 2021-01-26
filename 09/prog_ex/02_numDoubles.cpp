/*
Author:         Tushar Gautam
Date:           24th Jan 2021
Description:    Add integers in dynamic array

                Inputs:
                1) Array size
                2) Each indexed value

                Outputs:
                1) Array 
*/

#include <iostream>

int main()
{
    using namespace std;

    int numDoubles;
    cout << "Enter the length of array: ";
    cin >> numDoubles;

    double *p;
    p = new double[numDoubles];

    cout << "Enter the values \n";

    for(int i = 0; i < numDoubles; i++)
    {
        cin >> p[i];
    }

    cout << "The array is : \n";
    for(int i = 0; i < numDoubles; i++)
        cout << p[i] << " ";
    cout << endl;

    delete [] p;

    return 0;
}