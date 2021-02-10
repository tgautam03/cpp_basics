/* 
Author:         Tushar Gautam
Date:           9th Feb 2021
Description:    String sort
*/

#include <iostream>
#include <cstring>

int MAX_SIZE = 20;

// Function to input word
void input(char word[], int MAX_SIZE, int& sizeUsed);

// Function to swap two elements of array
void swap(char& e1, char&e2);

// Function to sort
void sort(char arr[], int listSize);

// Function to output word
void output(const char word[], int sizeUsed);

int main()
{
    int sizeUsed;
    char word[MAX_SIZE];
    input(word, MAX_SIZE, sizeUsed);
    sort(word, sizeUsed);
    std::cout << "Sorted word: ";
    output(word, sizeUsed);
}

void input(char word[], int MAX_SIZE, int& sizeUsed)
{
    std::cout << "Write the characters of the word (max 20) and end by hitting enter: ";
    char letter;
    int idx = 0;
    do
    {
        std::cin.get(letter);
        word[idx] = letter;
        idx++;
    } while (letter != '\n' && idx < MAX_SIZE+1);
    sizeUsed = idx;
}

void sort(char arr[], int listSize)
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

void swap(char& e1, char&e2)
{
    int temp = e1;
    e1 = e2;
    e2 = temp;
}

void output(const char word[], int sizeUsed)
{
    for (int i = 1; i < sizeUsed; i++)
        std::cout << word[i];
    std::cout << std::endl;
}