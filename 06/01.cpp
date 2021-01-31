/*
Author:         Tushar Gautam
Date:           31st Jan 2021
Description:    Reads numbers from a .dat file
*/

#include <fstream>  // For using if/ofstream
#include <iostream> // For using cout
#include <cstdlib>  // For using exit()

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
}                                               \

int main()
{
    std::ifstream in_stream;
    std::ofstream out_stream;

    char user_inp, fileName[20];
    std::cout << "Want to input file name to read data from? (y/n)";
    std::cin >> user_inp;
    if(user_inp == 'y')
    {
        std::cout << "Enter file name: ";
        std::cin >> fileName;

        in_stream.open(fileName);
        CHECK(in_stream);
    }
    else
    {
        in_stream.open("01_input.dat");
        CHECK(in_stream);
    }

    out_stream.open("01_output.dat", std::ios::app);
    CHECK(out_stream);

    int num1, num2, num3;
    in_stream >> num1 >> num2 >> num3;
    out_stream << "The sum of first 3 numbers: " 
    << (num1+num2+num3) << std::endl;

    in_stream.close();
    out_stream.close();

    return 0;

}