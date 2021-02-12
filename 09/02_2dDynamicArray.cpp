/*
Author:         Tushar Gautam
Date:           12th Feb 2021
Description:    Program to define 2D dynamic array
*/

#include <iostream>

// Function to fill array
void fillArray(int** arr, int rows, int cols);

// Function to output array
void output(int** arr, int rows, int cols);

typedef int* IntArrayPtr;

int main()
{
    int d1, d2;
    std::cout << "Enter dimension of the matrix: ";
    std::cin >> d1 >> d2;

    IntArrayPtr *dPtr;
    dPtr = new IntArrayPtr[d1];
    for (size_t i = 0; i < d1; i++)
    {
        dPtr[i] = new int[d2];
    }

    fillArray(dPtr, d1, d2);
    output(dPtr, d1, d2);
}

void fillArray(int** arr, int rows, int cols)
{
    std::cout << "Enter the elements: ";
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            std::cin >> arr[i][j];
        }
    }
}

void output(int** arr, int rows, int cols)
{
    std::cout << "Matrix: \n";
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
