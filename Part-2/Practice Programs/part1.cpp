// Main function of the C++ program.

#include <iostream>
using namespace std;
struct Book
{
    char title[50];
    char authors[500];
    double price;
    int accNum ;
    bool checkOutStatus;
    int claimantId;
};

struct Patron
{
    char name[50];
    char address[100];
    int uniqueId;
    int numBooksChkdOut;
    int claimdBookAccNum;
};
void checkOutBook(Patron &currPatron, Book &currBook)
{
    if (currPatron.numBooksChkdOut < 3)
    {
        if (currBook.checkOutStatus== true)
        {
            cout << "Sorry!  Book " << currBook.title;
            cout << "(Accession # " << currBook.accNum << ") ";
            cout << " already checked out!" << endl;
            return;
        }
        else
        {
            if ((currBook.claimantId != -1) &&(currBook.claimantId != currPatron.uniqueId))
            {
                cout << "Sorry! There is already a pending claim on book ";
                cout << currBook.title << " (Acc # " << currBook.accNum << ") ";
                cout <<  "by a different patron." << endl;
                return;
            }
            else
            {
                currBook.checkOutStatus = true;
                currPatron.numBooksChkdOut++;
                if (currBook.claimantId ==currPatron.uniqueId)
                {
                    currPatron.claimdBookAccNum = -1;
                    currBook.claimantId = -1;
                    return;
                }
            }
        }
    }
    else
    {
        cout << "Sorry! Three books have already been checked";
        cout << " out by " << currPatron.name << endl;
        return;
    }

}
//... Other code ...
int main()
{
    int i,j;
    Book libraryShelf [1000];
    Patron libraryPatrons[200];
    // checkOutBook(libraryPatrons[i],libraryShelf[j]);
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
    // checkOutBook(currPatron, currBook);
    
}


//Add your own code to add patrons/books and checking out books
//Some preliminary code has been provided to get started
