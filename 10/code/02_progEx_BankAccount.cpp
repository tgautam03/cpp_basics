/*
Author:         Tushar Gautam
Date:           13th Feb 2021
Description:    Define a class for BankAccount
                which lets us withdraw or deposit
                anytime.
*/

#include <iostream>
#include <fstream>

// Macro to check if file opened properly
#define CHECK(stream)                           \
{                                               \
    if (stream.fail())                          \
    {                                           \
        std::cout << "Stream failed!! \n" <<    \
        "At line: " << __LINE__ << std::endl << \
        "In file: " << __FILE__ << std::endl;   \
        std::exit(1);                           \
    }                                           \
} 


class BankAccount
{
public:
    // Function to set the balance
    void set(float rate, int rupees, int paise = 0);
    // Function to update the balance 
    void update();
    // Function to return the balance
    double getBalance();
    // Function to return the rate of interest
    float getRate();
    // Function to output results to a file if specified
    void output(std::ostream& out = std::cout);

private:
    double balance;
    float interest;
    // Function to convert percentage to fraction
    float fraction(float interest);
};

// Function returns the difference of two account balances
double difference(BankAccount acc1, BankAccount acc2);

// Function to update account with 2 years interest rate
void doubleUpdate(BankAccount& acc);

// Function that creates a new account with 
// same interest rate and 0 balance
BankAccount newAccount(BankAccount oldAccount);

int main()
{
    BankAccount acc1, acc2;
    acc1.set(3.5, 100);
    std::cout << std::endl;
    std::cout << "Initial Account Statement: \n";
    acc1.output();

    acc1.set(5, 100, 55);
    std::cout << std::endl;
    std::cout << "Updated account statement: \n";
    acc1.output();
    
    std::cout << std::endl;
    std::cout << "Also sending the updated statement to file...\n";
    std::ofstream out;
    out.open("updatedStatement.txt");
    CHECK(out);
    acc1.output(out);

    std::cout << std::endl;
    std::cout << "Acount 1 after update:\n";
    acc1.update();
    acc1.output();

    acc2 = acc1;
    std::cout << std::endl;
    std::cout << "Acount 2 after assignment:\n";
    acc2.output();

    std::cout << std::endl;
    std::cout << "Acount 3 creating...\n";
    BankAccount acc3 = newAccount(acc2);
    acc3.output();
    std::cout << std::endl;
    std::cout << "Adding Rs 1000 and acount 3 updating twice...\n";
    acc3.set(acc3.getRate()*100, 1000);
    doubleUpdate(acc3);
    std::cout << std::endl;
    std::cout << "Acount 3 after double update:\n";
    acc3.output();

    std::cout << std::endl;
    std::cout << "Difference b/w account 1 and account 3:\n";
    double diff = difference(acc1, acc3);
    std::cout << diff << std::endl;

    return 0;
}


float BankAccount::fraction(float interest)
{
    return interest/100;
}

void BankAccount::set(float rate, int rupees, int paise)
{
    balance = rupees + fraction(paise);
    interest = fraction(rate);
}

void BankAccount::update()
{
    balance += interest*balance;
}

double BankAccount::getBalance()
{
    return balance;
}

float BankAccount::getRate()
{
    return interest;
}

void BankAccount::output(std::ostream& out)
{
    out.setf(std::ios::fixed);
    out.setf(std::ios::showpoint);
    out.precision(2);
    out << "Account Balance: " << balance << " Rupees \n";
    out << "Interest Rate: " << interest*100 << " % \n";  
}

double difference(BankAccount acc1, BankAccount acc2)
{
    double bal1 = acc1.getBalance();
    double bal2 = acc2.getBalance();

    return (bal1 - bal2);
}

void doubleUpdate(BankAccount& acc)
{
    acc.update();
    acc.update();
}

BankAccount newAccount(BankAccount oldAccount)
{
    BankAccount acc;
    acc.set(oldAccount.getRate()*100, 0);

    return acc;
}