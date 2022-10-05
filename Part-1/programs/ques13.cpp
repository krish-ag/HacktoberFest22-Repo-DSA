// Main function of the C++ program.

#include <iostream>
using namespace std;

struct Book {
  char title[50];
  char authors[500];
  double price;
  int accNum;
  bool checkOutStatus;
  int claimantId;
};

int main()
{
    Book myChoice;
    cin >> myChoice.price;
    myChoice.price += 20;
    cout << "Rs. " << myChoice.price;

}


/*
Sample test case 1:
25 
Rs. 45
Sample test case 2:
50 
Rs. 70
*/