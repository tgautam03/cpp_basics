/*
Author:         Tushar Gautam
Date:           19th Jan 2021
Description:    Compute standard deviation of 4 values

                Inputs:
                1) 4 vals

                Outputs:
                2) standard deviation
*/

#include <iostream>
#include <cmath>

// Function to calculate average
double average(double n1_par, double n2_par, double n3_par, double n4_par);

// Function to calculate and return average and standard deviation
void avg_std(double a_par, double b_par, double c_par, double d_par, double& avg_par, double& stdev_par);

int main()
{
    using namespace std;

    double a, b, c, d, avg, stdev;
    char test = ' ';
    
    do
    {
        // Accepting vals
        cout << "Enter the 4 values: \n";
        cin >> a >> b >> c >> d;

        // Return average and standard deviation
        avg_std(a, b, c, d, avg, stdev);

        cout << "Average: " << avg << endl;
        cout << "Standard Deviation: " << stdev << endl;

        cout << "Wanna test again? (y/n): ";
        cin >> test;
    }while(test == 'y');

    return 0; 
}

void avg_std(double a, double b, double c, double d, double& avg, double& stdev)
{
    avg = average(a,b,c,d);

    stdev = sqrt(average(pow((a-avg), 2), pow((b-avg), 2), pow((c-avg), 2), pow((d-avg), 2)));

}

double average(double n1, double n2, double n3, double n4)
{
    return ((n1+n2+n3+n4)/4);
}

