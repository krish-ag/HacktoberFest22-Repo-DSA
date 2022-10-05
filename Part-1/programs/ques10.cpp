// Main function of the C++ program.

#include <iostream>

using namespace std;
int main() {
  int numStudents;
  int* A;
  cin >> numStudents;
  A = new int[numStudents];
  if (A != NULL) {
    A[0] = 10;
    A[1] = 15;
  }
  //Add your own code to check if allocation happened correctly
  return 0;
}