/* 
Author:         Tushar Gautam
Date:           9th Feb 2021
Description:    Sequential search in an array
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int ARR_SIZE = 20;

// Function to declare array
void arrDec(int arr[], int ARR_SIZE, int listSize, int maxInt);

// Function to search array
int arrSearch(const int arr[], int listSize, int num);

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

    int num;
    std::cout << "Enter the number you want to search: ";
    std::cin >> num;

    int idx = arrSearch(arr, listSize, num);

    std::cout << "Array: ";
    output(arr, listSize);
    return 0;
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

int arrSearch(const int arr[], int listSize, int num)
{
    for (int i = 0; i < listSize; i++)
    {
        if (arr[i] == num)
        {
            std::cout << "Number present at index: " << i;
            return i;
        }
    }
    std::cout << "Number not present \n";
}

void output(const int arr[], int listSize)
{
    for (int i = 0; i < listSize; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}