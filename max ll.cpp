#include <iostream>
using namespace std;
 
class Node{
public:
    int data;
    Node* next;
};
int max(Node *p)
{
    int m=INT_MIN;
    while(p!=nullptr)
    {
        if(p->data>m)
           m=p->data;

        p=p->next;
    }
    return(m);
}
int rec_max(Node *p)
{
    int x =0;
    if(p==0)
      return INT_MIN;
    x = max(p->next);
    return x>p->data?x:p->data;
}
 
int main() {
 
    int A[] = {3, 5, 7, 10, 15,5};
    Node* head = new Node;
 
    Node* temp;
    Node* last;
 
    head->data = A[0];
    head->next = nullptr;
    last = head;
 
    // Create a Linked List
    for (int i=1; i<sizeof(A)/sizeof(A[0]); i++){
 
        // Create a temporary Node
        temp = new Node;
 
        // Populate temporary Node
        temp->data = A[i];
        temp->next = nullptr;
 
        // last's next is pointing to temp
        last->next = temp;
        last = temp;
    }
 
    // Display Linked List
    Node* p = head;
 
    while (p != nullptr){
        cout << p->data << " -> " <<flush;
        p = p->next;
    }
    cout<<"\nmax element of LL :"<<max(head);
    cout<<"\nmax element of LL :"<<rec_max(head);
 
    return 0;
}
