/*
Author:         Tushar Gautam
Date:           13th Feb 2021
Description:    Define a class for Money 
                with friend functions
*/

#include <iomanip>
#include <iostream>
#include <fstream>

class Money
{
public:
    // Default constructor
    Money();
    // Other constructor
    Money(int dollars, int cents = 0);

    // Friend function to add
    friend Money add(const Money& amt1, const Money& amt2);
    // Friend function to check equal
    friend bool equal(const Money& amt1, const Money& amt2);

    // Member function to set new value
    void set(int dollars, int cents = 0);
    // Member function to get values
    long get() const;
    // Member function to display output
    void output(std::ostream& out = std::cout) const;

private:
    long allCents;
};

int main()
{
    Money yourAmt, myAmt(1000), ourAmt;
    std::cout << "I have: \n";
    myAmt.output();

    yourAmt.set(543, 43);
    std::cout << "You have: \n";
    yourAmt.output();

    ourAmt = add(yourAmt, myAmt);
    std::cout << "We have total of: \n";
    ourAmt.output(); 
}

Money::Money(): allCents(0)
{}

Money::Money(int dollars, int cents)
{
    allCents = dollars*100 + cents;
}

Money add(const Money& amt1, const Money&amt2)
{
    Money tmp;
    tmp.allCents = amt1.allCents + amt2.allCents;
    
    return tmp;
}

bool equal(const Money& amt1, const Money& amt2)
{
    if (amt1.allCents == amt2.allCents)
        return true;
    else
        return false; 
}

void Money::set(int dollars, int cents)
{
    allCents = 100*dollars + cents;
}

long Money::get() const
{
    return allCents;
}

void Money::output(std::ostream& out) const
{
    out << "Dollars: " << static_cast<int>(allCents/100) << std::endl;
    out << "Cents: " << allCents - static_cast<int>(allCents/100)*100 << std::endl;
}