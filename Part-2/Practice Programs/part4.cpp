// Main function of the C++ program.


#include <iostream>
#include <cstring>
using namespace std;

int main()
{  
    struct Driver { 
        char name[50];
        int id;
        
    };
    struct  LinkedTaxi {
        int id;
        Driver *drv ;
        LinkedTaxi *next;
        
    };
Driver d1 = {"Shekhar",23};
Driver d2 = {"Abdul",34};
LinkedTaxi t1, t2;
d1.id = 23;
d2.id = 34;
t1.id = 12;
t1.drv = &d1;
t1.next = NULL;
t2.id = 11;
t2.drv = &d2;
t2.next = &t1;
cout << (t2.next) -> drv -> name;
return 0;
}


/*
Expected output : 
Shekar
*/