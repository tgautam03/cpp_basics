/* 
Author:         Tushar Gautam
Date:           9th Feb 2021
Description:    2D Grading
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

const int NUM_STUDENTS = 4, NUM_QUIZES = 3;

// Function to declare arrays
void arrDec(int arr[][NUM_QUIZES], int numRows = NUM_STUDENTS, 
            int numCols = NUM_QUIZES, int maxInt = 10);

// Function to view a 2D array
void view(const int arr[][NUM_QUIZES], int NUM_STUDENTS = NUM_STUDENTS);

// Function to calculate student average
void calcStAvg(const int arr[][NUM_QUIZES], double studentAvg[], 
                int NUM_STUDENTS = NUM_STUDENTS);

// Function to calculate quiz average
void calcQzAvg(const int arr[][NUM_QUIZES], double quizAvg[], 
                int NUM_STUDENTS = NUM_STUDENTS);


// Function to display output
void output(const int arr[][NUM_QUIZES], const double quizAvg[], 
            const double studentAvg[]);

int main()
{
    srand(time(0));

    int arr[NUM_STUDENTS][NUM_QUIZES];
    double studentAvg[NUM_STUDENTS], quizAvg[NUM_QUIZES];

    arrDec(arr);
    calcStAvg(arr, studentAvg);
    calcQzAvg(arr, quizAvg);

    output(arr, quizAvg, studentAvg);
    return 0;
}

void arrDec(int arr[][NUM_QUIZES], int numRows, int numCols, int maxInt)
{
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < NUM_QUIZES; j++)
        {
            arr[i][j] = (rand() % maxInt);
        }      
    }
}

void calcStAvg(const int arr[][NUM_QUIZES], double studentAvg[], int NUM_STUDENTS)
{
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        double count = 0;
        for (int j = 0; j < NUM_QUIZES; j++)
        {
            count += arr[i][j];
        }
        studentAvg[i] = count / static_cast<double>(NUM_QUIZES);
    }
}

void calcQzAvg(const int arr[][NUM_QUIZES], double quizAvg[], int NUM_STUDENTS)
{
    for (int i = 0; i < NUM_QUIZES; i++)
    {
        double count = 0;
        for (int j = 0; j < NUM_STUDENTS; j++)
        {
            count += arr[j][i];
        }
        quizAvg[i] = count / static_cast<double>(NUM_STUDENTS);
    }
}

void output(const int arr[][NUM_QUIZES], const double quizAvg[], const double studentAvg[])
{
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::right);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(1);
    
    std::cout << std::setw(10) << "Student" 
            << std::setw(5) << " Ave" 
            <<std::setw(15) << "Quizes" << std::endl;
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        std::cout << std::setw(10) << i+1 
                << std::setw(5) << studentAvg[i];
        for (int j = 0; j < NUM_QUIZES; j++)
        {
            std::cout << std::setw(5) << arr[i][j];
        }
        std::cout << std::endl;
    }    
    std::cout << "Quiz Averages: ";
    for (int k = 0; k < NUM_QUIZES; k++)
    {
        std::cout << std::setw(5) << quizAvg[k];
    }
    std::cout << std::endl;
}

void view(const int arr[][NUM_QUIZES], int NUM_STUDENTS)
{
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        for (int j = 0; j < NUM_QUIZES; j++)
        {
            std::cout << std::setw(5) << arr[i][j];
        }
        std::cout << std::endl;
    }
    
}