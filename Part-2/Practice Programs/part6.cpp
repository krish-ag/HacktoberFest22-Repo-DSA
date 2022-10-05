// Main function of the C++ program.

#include <iostream>
using namespace std;
struct Driver {
    string name;
    int id;
};
struct LinkedTaxi {
    int id;
    Driver *drv; 
    LinkedTaxi *next;
};
struct Queue { 
    LinkedTaxi *front, *end; 
    int numTaxis;
};
int main() {
    Queue q;
    q.front = NULL;  
    q.end = NULL; 
    q.numTaxis = 0;
while(true) {
    cout << "Command : 'j' to join queue, 'd' to dispatch, 'x' to exit." << endl;
    char command;
    cin >> command;
    switch(command) {
        case 'j': //... Code to add a newly arrived taxi at end of queue ...
            Driver *newDrv;   
            newDrv = new Driver;
            if (newDrv== NULL) {
                cout<< "Memory allocation failure" << endl;
                return -1;
            }
            cout << "Give name of driver: "; 
            cin >> newDrv ->name;
            cout << "Give id of driver: ";  
            cin >> newDrv -> id;
            LinkedTaxi *newTaxi;
            newTaxi = new LinkedTaxi;
            if (newTaxi == NULL) {
                cout << "Memory allocation failure" << endl ;
                return -1;
            }
            newTaxi -> drv = newDrv;  
            newTaxi -> next = NULL;
            cout << "Give id of taxi: ";  
            cin >> newTaxi -> id;
            if ( q.end == NULL) { // Taxi queue empty
                q.front = newTaxi;
                q.end = newTaxi;
                q.numTaxis = 1;
            }
            else {(q.end) -> next = newTaxi;
                q.end = newTaxi;
                q.numTaxis ++;
            }      
            break;
        case 'd'://... Code to dispatch taxi at front of queue ...
            if (q.front== NULL) {
                cout << "Sorry! No taxis in queue at present!" << endl;
            }
            else { 
                LinkedTaxi *dispatchTaxi;
                dispatchTaxi = q.front ;
            if ( q.front == q.end ) { // Only one taxi in queue
                q.front = NULL; 
                q.end = NULL; 
                q.numTaxis = 0;
            }
            else {
                q.front = (q.front) ->next;  
                q.numTaxis --;
            }
            if (dispatchTaxi != NULL) {
                cout << "Dispatching taxi with id " << dispatchTaxi ->id << endl;
                if (dispatchTaxi -> drv != NULL) {
                    delete dispatchTaxi -> drv;
                }
                delete dispatchTaxi;
            }
            }
        break;
        case 'x': cout << "Thank you" << endl;
        return 0;
        default: cout << "Invalid command." << endl;
    }
    }
}


/*
Sample run :
Command : 'j' to join queue, 'd' to dispatch, 'x' to exit. 
j 
Give name of driver: Tony 
Give id of driver: 12345 
Give id of taxi: 98789 
Command : 'j' to join queue, 'd' to dispatch, 'x' to exit. 
j 
Give name of driver: Thomas 
Give id of driver: 54321 
Give id of taxi: 56765 
Command : 'j' to join queue, 'd' to dispatch, 'x' to exit. 
d 
Dispatching taxi with id 98789 
Command : 'j' to join queue, 'd' to dispatch, 'x' to exit. 
d 
Dispatching taxi with id 56765 
Command : 'j' to join queue, 'd' to dispatch, 'x' to exit. 
d 
Sorry! No taxis in queue at present! 
Command : 'j' to join queue, 'd' to dispatch, 'x' to exit. 
e Invalid command. 
Command : 'j' to join queue, 'd' to dispatch, 'x' to exit. 
x 
Thank you
*/
