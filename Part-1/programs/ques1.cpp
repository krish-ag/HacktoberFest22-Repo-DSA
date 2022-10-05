#include<iostream>
using namespace std;
int main()
{
int a; float b; char c;
int * ptrA; float * ptrB; char * ptrC;
ptrA = &a; cout << "Address of a is: " << ptrA;
ptrB = &b; cout << "Address of b is: " << ptrB;
ptrC = &c; cout << "Address of c is: " << ptrC;
return 0;
}

/*
Sample output :
Address of a is: 0x7ffd2012c610
Address of b is: 0x7ffd2012c614
Address of c is: 

// Can you figure out the reason behind the peculiar behaviour of address to a char? 
// Wait for a few more lectures!
*/