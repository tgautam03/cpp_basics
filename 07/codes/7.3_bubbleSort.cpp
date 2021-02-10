/* 
Author:         Tushar Gautam
Date:           9th Feb 2021
Description:    Bubble sort
*/

#include <iostream>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int ARR_SIZE = 20;

// Function to declare array
void arrDec(int arr[], int ARR_SIZE, int listSize, int maxInt);

// Function to swap two elements of array
void swap(int& e1, int&e2);

// Function to sort
void sort(int arr[], int listSize);

// Function to output array
void output(const int arr[], int listSize);

int main()
{
    srand(time(0));

    int arr[ARR_SIZE], listSize, maxInt;
    std::cout << "Enter the number of elements you want in array (max 20): ";
    std::cin >> listSize;

    std::cout << "Enter the max number you want in array: ";
    std::cin >> maxInt;

    arrDec(arr, ARR_SIZE, listSize, maxInt);
    std::cout << "Initialized Array: ";
    output(arr, listSize);

    sort(arr, listSize);
    std::cout << "Sorted Array: ";
    output(arr, listSize);
}

void arrDec(int arr[], int ARR_SIZE, int listSize, int maxInt)
{
    if (listSize > ARR_SIZE)
    {
        std::cout << "Max size allowed for array is " 
        << ARR_SIZE << std::endl;
        return;
    }

    for (int i = 0; i < listSize; i++)
        arr[i] = (rand() % maxInt);
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

void output(const int arr[], int listSize)
{
    for (int i = 0; i < listSize; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}