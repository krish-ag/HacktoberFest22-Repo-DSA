// Main function of the C++ program.

#include<iostream>
using namespace std;
int main()
{
    char c;
    char * ptrC;
    char ** ptrPtrC;
    ptrC = &c;
    ptrPtrC = &ptrC;
    cin >> c;
    cout << *(*ptrPtrC);
    return 0;
}

/*
Sample Test Case 1:
Input : a
Output : a
Sample Test Case 2:
Input : b
Output : b
*/