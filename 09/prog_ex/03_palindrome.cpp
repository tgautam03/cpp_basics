/*
Author:         Tushar Gautam
Date:           24th Jan 2021
Description:    Check if the string is palindrome or not

                Inputs:
                1) string

                Outputs:
                1) true/false 
*/

#include <iostream>
#include <cstring>

bool isPalindrome(char* cstr_par);

int main()
{
    using namespace std;

    char s1[50] = "neveroddoreven";
    char s2[50] = "not a palind";
    cout << isPalindrome(s1) << endl;
    cout << isPalindrome(s2) << endl;
}

bool isPalindrome(char* cstr)
{
    char* front = cstr;
    char* back = cstr + strlen(cstr)-1;

    while (front < back)
    {
        if ((cstr + *front) != ((cstr + *back)))
            return false;
        
        front++;
        back--;
    }
    return true;
}