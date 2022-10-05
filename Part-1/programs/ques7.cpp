// Main function of the C++ program.

#include<iostream>
using namespace std;
void swapByPtr(int *ptrX, int *ptrY);
void swapByRef(int &X, int &Y);
int main() {
  int m;
  int n;
  cout << "Give m, n : ";
  cin >> m >> n;
  swapByPtr(&m, &n);
  swapByRef(m, n);
  cout << m << " " << n << endl;
  return 0;
}
void swapByPtr(int *ptrX, int *ptrY) {
  int temp;
  temp = *ptrX;
  *ptrX = *ptrY;
  *ptrY = temp;
  return;
}
void swapByRef(int &X, int &Y) {
  int temp;
  temp = X;
  X = Y;
  Y = temp;
  return;
}

/*
Sample test case 1 : 
Give m, n : 42 24 
42 24

Sample test case 2 : 
Give m, n : 3 97 
3 97

*/