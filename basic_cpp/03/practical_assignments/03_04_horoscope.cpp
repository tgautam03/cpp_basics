/*
Author:         Tushar Gautam
Date:           16th Jan 2021
Description:    Program outputs horoscope sign 
                based on the birth date

                Inputs:
                1) Date of Birth

                Outputs:
                1) Horoscope sign
*/

#include <iostream>
using namespace std;

int main()
{
    int date, month;
    char done = ' ';

    do
    {
        cout << "Enter date of bith : ";
        cin >> date;

        cout << "Enter month of birth (1 to 12): ";
        cin >> month;
        switch (month)
    {
        case(1):
            if (date < 18)
                cout << "Capricorn \n";
            else if (date >= 18 && date < 20)
                cout << "Capricorn, but you're on cusp of Aquarius \n";
            else if (date < 32)
                cout << "Aquarius\n";
            else    
                cout << "Invalid date\n";
            break;

        case(2):
            if (date < 17)
                cout << "Aquarius \n";
            else if (date >= 17 && date < 19)
                cout << "Aquarius, but you're on cusp of Pisces \n";
            else if (date < 30)
                cout << "Pisces\n";
            else    
                cout << "Invalid date\n";
            break;

        case(3):
            if (date < 19)
                cout << "pisces \n";
            else if (date >= 19 && date < 21)
                cout << "Pisces, but you're on cusp of Aries \n";
            else if (date < 32)
                cout << "Aries\n";
            else    
                cout << "Invalid date\n";
            break;

        case(4):
            if (date < 18)
                cout << "Aries \n";
            else if (date >= 18 && date < 20)
                cout << "Aries, but you're on cusp of Taurus \n";
            else if (date < 31)
                cout << "Taurus\n";
            else    
                cout << "Invalid date\n";
            break;

        case(5):
            if (date < 19)
                cout << "Taurus \n";
            else if (date >= 19 && date < 21)
                cout << "Taurus, but you're on cusp of Gemini \n";
            else if (date < 32)
                cout << "Gemini\n";
            else    
                cout << "Invalid date\n";
            break;

        case(6):
            if (date < 20)
                cout << "Gemini \n";
            else if (date >= 20 && date < 22)
                cout << "Gemini, but you're on cusp of Cancer \n";
            else if (date < 31)
                cout << "Cancer\n";
            else    
                cout << "Invalid date\n";
            break;

        case(7):
            if (date < 21)
                cout << "Cancer \n";
            else if (date >= 21 && date < 23)
                cout << "Cancer, but you're on cusp of Leo \n";
            else if (date < 32)
                cout << "Leo\n";
            else    
                cout << "Invalid date\n";
            break;

        case(8):
            if (date < 21)
                cout << "Leo \n";
            else if (date >= 21 && date < 23)
                cout << "Leo, but you're on cusp of Virgo \n";
            else if (date < 32)
                cout << "Virgo\n";
            else    
                cout << "Invalid date\n";
            break;

        case(9):
            if (date < 21)
                cout << "Virgo \n";
            else if (date >= 21 && date < 23)
                cout << "Virgo, but you're on cusp of Libra \n";
            else if (date < 31)
                cout << "Libra\n";
            else    
                cout << "Invalid date\n";
            break;

        case(10):
            if (date < 21)
                cout << "Libra \n";
            else if (date >= 21 && date < 23)
                cout << "Libra, but you're on cusp of Scorpio \n";
            else if (date < 32)
                cout << "Scorpio\n";
            else    
                cout << "Invalid date\n";
            break;

        case(11):
            if (date < 20)
                cout << "Scorpio \n";
            else if (date >= 20 && date < 22)
                cout << "Scorpio, but you're on cusp of Sagittarius \n";
            else if (date < 31)
                cout << "Sagittarius\n";
            else    
                cout << "Invalid date\n";
            break;

        case(12):
            if (date < 20)
                cout << "Saggittarius \n";
            else if (date >= 20 && date < 22)
                cout << "Saggittarius, but you're on cusp of Capricorn \n";
            else if (date < 32)
                cout << "Capricorn\n";
            else    
                cout << "Invalid date\n";
            break;

        default:
            cout << "Invalid month \n";
    }
    cout << "Are you done? (y/n): ";
    cin >> done;
    }while (done == 'n');
    
    return 0;
}