// Main function of the C++ program.

#include<iostream>
using namespace std;
int main() {
  int m, n, sum = 0;
  int* ptrInt;
  int* ptrSum;
  ptrSum = &sum;
  cout << "Give m and n : ";
  cin >> m >> n;
  ptrInt = &n;
  *ptrSum += *ptrInt;
  ptrInt = &m;
  *ptrSum += *ptrInt;
  cout << "Sum : " << sum << endl;
  return 0;
}

/*
Sample Test Case 1:
Give m and n : 3 4 
Sum : 7

Sample Test Case 2:
Give m and n : 13 41 
Sum : 54

*/