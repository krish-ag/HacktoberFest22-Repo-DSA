// Main function of the C++ program.

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a; float x; char itemcode[8];
// The input data line contains
//  123456fanbelt150.50
scanf ("%6d%7s%f", &a, itemcode, &x);
printf("%6d\t%7s\t%6.2f\n", a,itemcode , x);
}


/*
Sample run 1:
123456fanbelt150.50 
123456 fanbelt 150.50

Sample run 2:
123456 
fanbelt 
150.50 
123456 fanbelt 150.50
*/