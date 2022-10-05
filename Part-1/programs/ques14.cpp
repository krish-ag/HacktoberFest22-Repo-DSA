// Main function of the C++ program.

#include <iostream>
using namespace std;
struct Patron {
  char name[50];
  char address[100];
  int uniqueId;
  int numBooksChkdOut;
  int claimdBookAccNum;
};

int main() {
  Patron currPatron;
  cin >> currPatron.name;
  if (currPatron.name [0] == 'S') {
     
      cout << "Patron name : ";
      cout << currPatron.name << endl;
  }
}

/*
Sample test case 1 :
Supratik 
Patron name : Supratik

Sample test case 2 :
Deepak
*/