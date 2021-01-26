/*
Author:         Tushar Gautam
Date:           18th Jan 2021
Description:    Write an over loaded max function 
                that takes either 2 or 3 paramters 
                and returns the largest of them.

                Inputs:
                1) 2 or 3 numbers

                Outputs:
                1) Which is largest
*/

#include <iostream>

// Function to find maximum of 2 or 3 numbers
double max(double n1_par, double n2_par);
double max(double n1_par, double n2_par, double n3_par);


int main()
{
    using namespace std;

    int num;
    double num1, num2, num3;

    cout << "How many inputs do you have? \n";
    cin >> num;

    if (num == 2)
    {
        cout << "Enter 2 numbers: ";
        cin >> num1 >> num2;

        double largest = max(num1, num2);

        cout << "largest number is : " << largest << endl;
    }

    else if (num == 3)
    {
        cout << "Enter 3 numbers: ";
        cin >> num1 >> num2 >> num3;

        double largest = max(num1, num2, num3);

        cout << "largest number is : " << largest << endl;
    }

    else
        cout << "Function max only supports 2 or 3 inputs yet!! \n";

    return 0;
}

double max(double n1, double n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}

double max(double n1, double n2, double n3)
{
    using namespace std;

    if ((n1 > n2) && (n1 > n3))
        return n1;
    else if ((n2 > n1) && (n2 > n3))
        return n2;
    else if ((n3 > n1) && (n3 > n2))
        return n3;
    else
        cout << "No clear larger \n";
        return 0;
}
