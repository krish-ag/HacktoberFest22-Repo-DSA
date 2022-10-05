// Main function of the C++ program.

#include<iostream>
using namespace std;
void swapByPtr(int* ptrX, int* ptrY);
int main() {
  int m;
  int n;
  cout << "Give m and n : ";
  cin >> m >> n;
  swapByPtr(&m, &n);
  cout << "m : " << m << endl;
  cout << "n : " << n << endl;
  return 0;
}
void swapByPtr(int* ptrX, int* ptrY) {
  int temp;
  temp = *ptrX;
  *ptrX = *ptrY;
  *ptrY = temp;
  return;
}
/* Test Case 1
Give m and n : 4
5
m : 5
n : 4

Test Case 2
Give m and n : 7
8
m : 8
n : 7
*/