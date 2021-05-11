// Author:      Tushar Gautam
// Date:        16th Jan 2021
// Descripiton: Switch statment syntax demonstration

#include <iostream>
using namespace std;

int main()
{
    char grade = ' ';
    cout << "Please enter your grade: ";
    cin >> grade;

    switch(grade)
    {
        case 'A':
            cout << "Excellent \n";
            break;
        
        case 'B':
            cout << "Very Good \n";
            break;

        case 'C':
            cout << "Work hard \n";
            break;

        case 'D':
        case 'F':
            cout << "You'll have to reappear \n";
            break;
        
        default:
            cout <<"Enter a valid grade \n";
    }

    return 0;
}