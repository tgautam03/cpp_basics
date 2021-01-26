/*
Author:         Tushar Gautam
Date:           19th Jan 2021
Description:    Compute different scenarios based on choice

                Inputs and Outputs:
                1) Want to convert lengths or weights?
                2) If weights -> 2a) kg+gm to lbs+ounces
                                 2b) lbs+ounces to kg+gm
                3) If lengths -> 3a) m+cm to ft+in
                                 2b) ft+in to m+cm
*/

#include <iostream>
#include <math.h>

// Function: m+cm -> ft+in
void meter_to_feet(double& inp1_par, double& inp2_par, double& out1_par, double& out2_par);

// Function: ft+in -> m+cm
void feet_to_meter(double& inp1_par, double& inp2_par, double& out1_par, double& out2_par);

// Function: kg+gm -> lbs+ounces
void kg_to_lbs(double& inp1_par, double& inp2_par, double& out1_par, double& out2_par);

// Function: lbs+ounces -> kg+gm
void lbs_to_kg(double& inp1_par, double& inp2_par, double& out1_par, double& out2_par);

int main()
{
    using namespace std;
    int choice1, choice2;
    double inp1, inp2, out1, out2;

    cout << "For lenghts, type 1 \n";
    cout << "For weights, type 2 \n";
    cout << "Your choice: ";
    cin >> choice1;

    if (choice1 == 1)
    {
        cout << "For m+cm -> ft+in, type 1 \n";
        cout << "For ft+in -> m+cm, type 2 \n";
        cout << "Your choice: ";
        cin >> choice2;

        if (choice2 == 1)
        {
            // Convert m+cm -> ft+in
            meter_to_feet(inp1, inp2, out1, out2);

        }

        else if (choice2 == 2)
        {
            // Convert ft+in -> m+cm
            feet_to_meter(inp1, inp2, out1, out2);
        }

        else
            cout << "Invalid choice \n";
        
    }

    else if (choice1 == 2)
    {
        cout << "For kg+gm -> lbs+ounces, type 1 \n";
        cout << "For lbs+ounces -> kg+gm, type 2 \n";
        cout << "Your choice: ";
        cin >> choice2;

        if (choice2 == 1)
        {
            // Convert kg+gm -> lbs+ounces
            kg_to_lbs(inp1, inp2, out1, out2);
        }

        else if (choice2 == 2)
        {
            // Convert lbs+ounces -> kg+gm
            lbs_to_kg(inp1, inp2, out1, out2);
        }

        else
            cout << "Invalid choice \n";
        
    } 

    else
        cout << "Invalid choice \n";

    return 0;
}

void meter_to_feet(double& inp1, double& inp2, double& out1, double& out2)
{
    using namespace std;

    cout << "Enter meters followed by cm: ";
    cin >> inp1 >> inp2;

    double cm = inp1*100 + inp2;

    double inches = 0.39370 * cm;

    out1 = inches / 12;

    out2 = inches - floor(out1)*12 ;

    cout << inp1 << " meters and " << inp2 << " cm converts to ";
    cout << floor(out1) << " feets and " << out2 << " inches \n"; 
}

void feet_to_meter(double& inp1, double& inp2, double& out1, double& out2)
{
    using namespace std;

    cout << "Enter feet followed by inches: ";
    cin >> inp1 >> inp2;

    double inches = inp1*12 + inp2;

    double cm = 2.54 * inches;

    out1 = cm / 100;

    out2 = cm - floor(out1)*100 ;

    cout << inp1 << " feet and " << inp2 << " inches converts to ";
    cout << floor(out1) << " meters and " << out2 << " cm \n"; 
}

void kg_to_lbs(double& inp1, double& inp2, double& out1, double& out2)
{
    using namespace std;

    cout << "Enter kg followed by gms: ";
    cin >> inp1 >> inp2;

    double gms = inp1*1000 + inp2;

    double ounces = 0.035274 * gms;

    out1 = ounces / 16;

    out2 = ounces - floor(out1) * 16 ;

    cout << inp1 << " kg and " << inp2 << " gms converts to ";
    cout << floor(out1) << " lbs and " << out2 << " ounces \n"; 
}

void lbs_to_kg(double& inp1, double& inp2, double& out1, double& out2)
{
    using namespace std;

    cout << "Enter lbs followed by ounces: ";
    cin >> inp1 >> inp2;

    double ounces = inp1*16 + inp2;

    double gms = 28.349 * ounces;

    out1 = gms / 1000;

    out2 = gms - floor(out1)*1000;

    cout << inp1 << " lbs and " << inp2 << " ounces converts to ";
    cout << floor(out1) << " kg and " << out2 << " gms \n"; 
}