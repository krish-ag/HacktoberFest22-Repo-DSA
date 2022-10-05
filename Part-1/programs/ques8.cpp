// Main function of the C++ program.

#include<iostream>
using namespace std;

int* myFunc(int* ptrB);
int main() {
  int *a, b;
  cout << "Give b : ";
  cin >> b;
  a = myFunc(&b);
  cout << "a is : " << *a << endl;
  return 0;
}
 int *myFunc(int *ptrB) {
  int a;
  a = (*ptrB) * (*ptrB);
  *ptrB = a;
  return (ptrB);
}


/*
Sample test case 1 : 
Give b : 7 
a is : 49
Sample test case 2 : 
Give b : 13 
a is : 169
*/