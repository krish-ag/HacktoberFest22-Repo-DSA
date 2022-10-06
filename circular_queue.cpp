#include <bits/stdc++.h>
using namespace std;
int A[100];
int front = -1;
int rear = -1;

// Function to check if queue is empty or not
bool isempty()
{
    if (front == -1 && rear == -1)
        return true;
    else
        return false;
}

// function to enter elements in queue
void enqueue(int value)
{
    // queue is full
    if ((rear + 1) % == front)
        cout << "Queue is full \n";
    else
    {
        // first element inserted
        if (front == -1)
            front = 0;
        // insert element at rear
        rear = (rear + 1) % 100;
        A[rear] = value;
    }
}

// function to delete/remove element from queue
void dequeue()
{
    if (isempty())
        cout << "Queue is empty\n";
    else
        // only one element
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % 100;
}

// function to show the element at front
void peek()
{
    if (isempty())
        cout << "Queue is empty\n";
    else
        cout << "element at front is:" << A[front];
}

// function to display queue
void display()
{
    if (isempty())
        cout << "Queue is empty\n";
    else
    {
        int i;
        if (front <= rear)
        {
            for (i = front; i <= rear; i++)
                cout << A[i] << " ";
        }
        else
        {
            i = front;
            while (i < 100)
            {
                cout << A[i] << " ";
                i++;
            }
            i = 0;
            while (i <= rear)
            {
                cout << A[i] << " ";
                i++;
            }
        }
    }
}

// Main Function
int main()
{
    int choice, value;
    cout << "\n1.enqueue\n 2.dequeue\n 3.peek \n4.display\n 5.exit\n";
    do
    {
        cout << "Enter the choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter Value:\n";
            cin >> value;
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "EXITED\n";
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 5);

    return 0;
}