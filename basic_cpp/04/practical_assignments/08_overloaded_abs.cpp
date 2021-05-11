/*
Author:         Tushar Gautam
Date:           18th Jan 2021
Description:    Write an over loaded absolute function 
                that takes int, float, double and long
                paramters and returns absolute values
                of them.

                Inputs:
                1) number

                Outputs:
                1) Ansolute value
*/

#include <iostream>

int cystom_abs(int num_par);
double cystom_abs(double num_par);
float cystom_abs(float num_par);
long cystom_abs(long num_par);

int main()
{
    using namespace std;

    int n1;
    float n2;
    double n3;
    long n4;
    char t = ' ';
    cout << "Which datatype is your number? \n";
    cin >> t;

    switch(t)
    {
        case('i'):
            {
                cout << "Enter the number: ";
                cin >> n1;
                
                int abs_n = cystom_abs(n1);

                cout << "Absolute val: " << abs_n << endl;
                break;
            }

        case('l'):
            {
                cout << "Enter the number: ";
                cin >> n4;
                
                long abs_n = cystom_abs(n4);

                cout << "Absolute val: " << abs_n << endl;
                break;
            }

        case('f'):
            {
                cout << "Enter the number: ";
                cin >> n2;
                
                float abs_n = cystom_abs(n2);

                cout << "Absolute val: " << abs_n << endl;
                break;
            }

        case('d'):
            {
                cout << "Enter the number: ";
                cin >> n3;
                
                double abs_n = cystom_abs(n3);

                cout << "Absolute val: " << abs_n << endl;
                break;
            }
            default:
                cout << "Invalid data type used \n";
                break;
    }
    
    return 0;

}

int cystom_abs(int num)
{
    using namespace std;
    if (num < 0)
        return (num * -1);
    else
        return num;
}

double cystom_abs(double num)
{
    using namespace std;
    if (num < static_cast<double>(0))
        return (num * static_cast<double>(-1));
    else
        return num;
}

long cystom_abs(long num)
{
    if (num < static_cast<long>(0))
        return (num * static_cast<long>(-1));

    else
        return num;
}

float cystom_abs(float num)
{
    if (num < static_cast<float>(0))
        return (num * static_cast<float>(-1));
    else
        return num;
}