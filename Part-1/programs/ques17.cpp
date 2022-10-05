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

struct Patron {
  char name[50];
  char address[100];
  int uniqueId;
  int numBooksChkdOut;
  int claimdBookAccNum;
};

void claimBook(Patron& currPatron, Book& currBook) {
    if ((currPatron.numBooksChkdOut == 3) ||  (currPatron.claimdBookAccNum != -1)) {
        cout << "Sorry !Patron " << currPatron.name;
        cout << " no longer allowed to claim any book." << endl;
        return;
    }
    if (currBook.checkOutStatus == false) {
        cout << "Book " << currBook.title;
        cout << " (Acc.# " << currBook.accNum << ") ";
        cout << " not yet checked out. No need for a claim." << endl;
        return;
    }
    if ((currBook.claimantId != -1) && (currBook.claimantId != currPatron.uniqueId)) {
        cout << "Sorry !Book already claimed by a patron." << endl;
        return;
    }
    currPatron.claimdBookAccNum = currBook.accNum;
    currBook.claimantId = currPatron.uniqueId;
    return;
}

int main(){
    
    int i,j;
    Book libraryShelf [1000];
    Patron libraryPatrons[200];
    Book currBook;
    Patron currPatron;
    cout<<"\nEnter book name : ";
    cin>> currBook.title;
    cout << "\nEnter Author of book : ";
    cin >> currBook.authors;
    cout << "\nEnter price of book: ";
    cin >> currBook.price;
    cout << "\nEnter account number of book: ";
    cin >> currBook.accNum;
    cin>>currPatron.numBooksChkdOut;
    // claimBook(currPatron, currBook);
    
    
}

//Add your own code to add patrons/books and claiming books
//Some preliminary code has been provided to get started