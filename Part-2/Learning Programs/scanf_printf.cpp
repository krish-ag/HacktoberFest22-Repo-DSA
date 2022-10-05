#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a; float x; char itemcode[8];
    // The input data line contains
    //  123456fanbelt150.50

    scanf("%6d%7s%f", &a, itemcode, &x);
    printf("%6d\t%7s\t%6.2f\n", a, itemcode, x);

    return 0;
}
