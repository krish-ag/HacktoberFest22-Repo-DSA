// Main function of the C++ program.

#include<iostream>
using namespace std;
int main(){
int m, n;
int * ptrInt;
int ** ptrPtrInt;
ptrPtrInt = &ptrInt;
cout << "Give m and n: "; cin >> m >> n;
ptrInt = &n; cout << *(*ptrPtrInt) << endl;
ptrInt = &m; cout << *(*ptrPtrInt) << endl;
return 0;
}


/*
Sample Test Case 1:
Give m and n: 1 2
2
1

Sample Test Case 2:
Give m and n: 50 500
500
50
*/