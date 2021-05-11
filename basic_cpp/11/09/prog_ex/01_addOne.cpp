/*
Author:         Tushar Gautam
Date:           24th Jan 2021
Description:    Add one to a variable referenced
                via pointers
*/

#include <iostream>

void addOne(int *ptrNum_par);

int main()
{
    using namespace std;
    
    // Initializing an Integer Variable
    int v;
    // Initializing a pointer variable that can point to Integer variable
    int *p;

    // Storing the address of v in pointer variable p
    p = &v;

    // Giving variable v a value via pointer
    *p = 30;

    addOne(p);

    cout << v << endl;
    cout << *p << endl;
}

void addOne(int *ptrNum)
{
    *ptrNum += 1;
}