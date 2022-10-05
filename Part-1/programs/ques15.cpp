// Main function of the C++ program.

#include <iostream>
#include <cstring>
using namespace std;
struct Patron {
  char name[50];
  char address[100];
  int uniqueId;
  int numBooksChkdOut;
  int claimdBookAccNum;
};


int main()
{
    Patron  currPatron;
    Patron prevPatron = {"Shashi Dev","IIT Bombay, India",2345,0,-1};
    cout <<"PreviousPatron :"<< prevPatron.name << "," << prevPatron.address << " , "<<prevPatron.uniqueId << "," <<prevPatron.numBooksChkdOut<< ","<< prevPatron.claimdBookAccNum<<endl;
    currPatron = prevPatron ;
    cout <<"Current Pattron : "<< currPatron.name << "," << currPatron.address << " , "<<currPatron.uniqueId << "," <<currPatron.numBooksChkdOut<< ","<< currPatron.claimdBookAccNum<<endl;
}


/*
Expected output : 
PreviousPatron :Shashi Dev,IIT Bombay, India , 2345,0,-1 
Current Pattron : Shashi Dev,IIT Bombay, India , 2345,0,-1
*/