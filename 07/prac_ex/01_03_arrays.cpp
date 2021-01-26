/*
Author:         Tushar Gautam
Date:           23rd Jan 2021
Description:    -> Find if the input array has
                2 at its last or first entry.
                -> Count number of 2s in the array
                -> Swap 1st and last elements

                Inputs:
                1) Array of ints
                2) Length of array

                Outputs:
                1) True/False
                2) number of 2s
                3) swapped array
*/

#include <iostream>

bool firstLast2(int array_par[], int length_par);
// Function return true or false

int num2s(int array_par[], int length_par);
// Function counts the number of 2s in the array

void swapFrontBack(int array_par[], int length_par);
// Function swaps 1st and last element of the array

void print(int array_par[], int length_par);
// Function prints the array

int main()
{
    using namespace std;

    int count;

    int l1 = 6;
    int arr1[l1] = {2, 4, 5, 6, 8, 2};
    
    int l2 = 8;
    int arr2[l2] = {123, 4, 5, 6, 8, 6, 5, 3};

    int l3 = 10;
    int arr3[l3] = {2, 4, 5, 6, 8, 12, 4, 56, 32, 456};
    
    int l4 = 9;
    int arr4[l4] = {42, 4, 5, 6, 8, 5, 6, 7, 2};

    bool ans1 = firstLast2(arr1, l1);
    count = num2s(arr1, l1);
    swapFrontBack(arr1, l1);
    cout << "For array 1: \n";
    cout << "Is there any 2s: " << ans1 << endl;
    cout << "Count of 2s if any: " << count << endl;
    cout << "swapped array: ";
    print(arr1, l1);
    cout << endl;


    bool ans2 = firstLast2(arr2, l2);
    count = num2s(arr2, l2);
    swapFrontBack(arr2, l2);
    cout << "For array 2: \n";
    cout << "Is there any 2s: " << ans2 << endl;
    cout << "Count of 2s if any: " << count << endl;
    cout << "swapped array: ";
    print(arr2, l2);
    cout << endl;
    
    bool ans3 = firstLast2(arr3, l3);
    count = num2s(arr3, l3);
    swapFrontBack(arr3, l3);
    cout << "For array 3: \n";
    cout << "Is there any 2s: " << ans3 << endl;
    cout << "Count of 2s if any: " << count << endl;
    cout << "swapped array: ";
    print(arr3, l3);
    cout << endl;
    
    bool ans4 = firstLast2(arr4, l4);
    count = num2s(arr4, l4);
    swapFrontBack(arr4, l4);
    cout << "For array 4: \n";
    cout << "Is there any 2s: " << ans4 << endl;
    cout << "Count of 2s if any: " << count << endl;
    cout << "swapped array: ";
    print(arr4, l4);
    cout << endl;

    return 0;
}

bool firstLast2(int array[], int length)
{
    if ((array[0] == 2) || (array[length-1] == 2))
        return true;
    else    
        return false;
}

int num2s(int array[], int length)
{
    int count = 0;

    for(int i = 0; i < length; i++)
    {
        if (array[i] == 2)
            count++;
    }

    return count;
}

void swapFrontBack(int array[], int length)
{
    using namespace std;

    if (length == 0)
    {
        cout << "Array is empty \n";
    }

    int temp;

    temp = array[length-1];
    array[length-1] = array[0];
    array[0] = temp;
}

void print(int array[], int length)
{
    using namespace std;

    for(int i = 0; i < length; i++)
        cout << array[i] << " ";
    cout << endl;
}