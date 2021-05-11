/*
Author:         Tushar Gautam
Date:           12th Feb 2021
Description:    Program to sort an array
*/

#include <iostream>

// Function to fill array
void fillArray(int arr[], int size);

// Function to output array
void output(int arr[], int size);

// Function to swap two integers
void swap(int& e1, int&e2);

// Function to sort
void sort(int arr[], int listSize);

// Defining type that points to Integer Array
typedef int* IntArrayPtr;

int main()
{
    int size;
    std::cout << "Size of array: ";
    std::cin >> size;

    IntArrayPtr ptr;
    ptr = new int[size];

    fillArray(ptr, size);
    sort(ptr, size);
    output(ptr, size);

    delete [] ptr;

    return 0;
}

void fillArray(int arr[], int size)
{
    std::cout << "Enter the elements: ";
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

void sort(int arr[], int listSize)
{
    for (int i = listSize-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }  
        }
    }
}

void swap(int& e1, int&e2)
{
    int temp = e1;
    e1 = e2;
    e2 = temp;
}

void output(int arr[], int size)
{
    std::cout << "Array: ";
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}