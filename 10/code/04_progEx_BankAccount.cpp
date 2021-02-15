/*
Author:         Tushar Gautam
Date:           13th Feb 2021
Description:    Define a class for BankAccount
                which lets us withdraw or deposit
                anytime.
*/

#include <iostream>
#include <fstream>


class BankAccount
{
public:
    // Default Constructor
    BankAccount();
    // Constructor to accept 2 or 3 inputs
    BankAccount(float rate, int dollars, int cents = 0);

    // Function to set new values
    void set(float rate, int dollars, int cents = 0);
    // Function to update the balance after 1 year of interest
    void update();
    // Function to return balance
    double getBalance();
    // Function to return the interest rate
    double getRate();
    // Function to write output to screen or file
    void output(std::ostream& out = std::cout);

private:
    int dollar;
    int cents;
    float rate;
    // Converts percentage to fraction
    float fraction(float perc);
    // Converts fraction to percentage
    float percentage(float frac);
    // Check if member values are valid
    void CHECK();
};

int main()
{
    BankAccount sbi(2.7, 3000), hdfc(2.5, 1000, 64), amex;

    std::cout << "Initialized accounts \n";
    std::cout << "==========================";
    std::cout << " SBI: \n";
    sbi.output();
    std::cout << " ";
    std::cout << " HDFC: \n";
    hdfc.output();
    std::cout << " ";
    std::cout << " Amex: \n";
    hdfc.output();

    std::cout << "Updating SBI and sending statement to the file...\n";
    sbi.update();
    
    std::ofstream out;
    out.open("SBI_STATEMENT.txt");
    sbi.output(out);
    out.close(); 
}

BankAccount::BankAccount(): dollar(0), cents(0), rate(0)
{
    CHECK();
    // Default constructor
}

BankAccount::BankAccount(float r, int d, int c): dollar(d), cents(c), rate(fraction(r))
{
    CHECK();
}

void BankAccount::set(float r, int d, int c)
{
    rate = fraction(r);
    dollar = d;
    cents = c;

    CHECK();
}

void BankAccount::update()
{
    double balance = dollar + 100*cents;

    balance += rate*balance;

    dollar = static_cast<int>(balance);
    cents = balance - dollar;
}

double BankAccount::getBalance()
{
    return (dollar + 100*cents);
}

double BankAccount::getRate()
{
    return rate;
}

void BankAccount::output(std::ostream& out)
{
    out << "Balance: " << getBalance() << std::endl;
    out << "Rate: " << percentage(getRate()) << "%" << std::endl;
}

void BankAccount::CHECK()
{
    if (dollar < 0 || cents < 0 || rate < 0)
    {
        std::cout << "Invalid arguments \n";
        exit(1);
    }
}

float BankAccount::fraction(float perc)
{
    return perc/100;
}

float BankAccount::percentage(float frac)
{
    return frac*100;
}
