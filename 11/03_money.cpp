/*
Author:         Tushar Gautam
Date:           13th Feb 2021
Description:    Define a class for Money 
                with friend functions
*/

#include <iostream>
#include <fstream>

class Money
{
public:
    // Constructors
    Money();
    Money(int dollars, int cents = 0);
    Money(double dollars);

    // Friend function to overload inputs
    friend std::istream& operator >>(std::istream& in, Money& amt);
    // Friend function to overload outputs
    friend std::ostream& operator <<(std::ostream& out, const Money& amt);
    // Friend function to overload addition
    friend Money operator +(const Money& amt1, const Money& amt2);
    // Friend function to overload equating
    friend bool operator ==(const Money& amt1, const Money& amt2);

private:
    long allCents;
};

int main()
{
    Money myAcc(1000), yourAcc(500.5), ourAcc;
    std::cout << "My Account: \n" << myAcc;
    std::cout << "Your Account: \n" << yourAcc;

    std::cout << "Make a new account and transfer some money to it...\n";
    Money newAcc;
    std::cin >> newAcc;
    std::cout << "New Account: \n" << newAcc;

    ourAcc = myAcc + newAcc;
    std::cout << "Our account: \n" << ourAcc;
    return 0;

}

Money::Money(): allCents(0)
{}

Money::Money(int dollars, int cents)
{
    allCents = dollars*100 + cents;
}

Money::Money(double dollars): allCents(static_cast<long>(dollars*100))
{}

std::istream& operator >>(std::istream& in, Money& amt)
{
    double dollars;
    in >> dollars;
    amt.allCents = static_cast<long>(dollars*100);
    return in;
}

std::ostream& operator <<(std::ostream& out, const Money& amt)
{
    out << "Dollars: " << static_cast<int>(amt.allCents/100) << std::endl;
    out << "Cents: " << amt.allCents - static_cast<int>(amt.allCents/100)*100 << std::endl;
    out << "\n";
    return out;
}

Money operator +(const Money& amt1, const Money& amt2)
{
    Money tmp;
    tmp.allCents = amt1.allCents + amt2.allCents;
    return tmp;
}

bool operator ==(const Money& amt1, const Money& amt2)
{
    if (amt1.allCents == amt2.allCents)
        return true;
    else
        return false;
}