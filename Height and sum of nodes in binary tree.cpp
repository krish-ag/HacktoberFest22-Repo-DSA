#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* lchild;
    Node* rchild;
}; Node* base;

class Queue{
    public:
    int front;
    int rear;
    int size;
    Node** arr;

    bool isEmpty();
    bool isFull();
    void enqueue(Node* p);
    Node* dequeue();
    Queue(int size);
    
};



Queue::Queue(int size){
    front = -1;
    rear = -1;
    this->size = size;
    arr = new Node* [size];
}

bool Queue :: isEmpty(){
    if(front==rear){
        return true;
    }
    return false;
}

bool Queue :: isFull(){
    if(rear==size-1){
        return true;
    }
    return false;
}

void Queue :: enqueue(Node* p){
    if(isFull()){
        cout<<"Queue Overflow"<<endl;
    }
    else{
    rear++;
    arr[rear]=p;
    }
}

Node* Queue :: dequeue(){
    Node* x = nullptr;
    if(isEmpty()){
        cout<<"Queue underflow"<<endl;
    }
    else{
    front++;
    x = arr[front];
    }
    return x;
}


void createtree(){
base = new Node;
    Node* t;
    Node* p;
    Queue q(10);

    int value;
    cout<<"Enter the value of base node: "<<endl;
    cin>>value;
    base->data = value;
    base->lchild = nullptr;
    base->rchild = nullptr;
    
    q.enqueue(base);
    while(!q.isEmpty()){
        p = q.dequeue();
        cout<<"Enter the value of Left child "<<p->data<<":  ";
        cin>>value;
        if(value != -1){
            t = new Node;
            t->data = value;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.enqueue(t);
        }

        cout<<"Enter the value of right child "<<p->data<<":  ";
        cin>>value;
        if(value!=-1){
            t = new Node;
            t->data = value;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.enqueue(t);
        }
    }
    
}


int countt=0;
int countnodes(Node* p){
    if(p==nullptr){
        return 0;
    }
    else{
    countt++;
    countnodes(p->lchild);
    countnodes(p->rchild);
    }
    return countt;

}

int countnodes2(Node* p){
    if(p==nullptr){
        return 0;
    }
    return countnodes2(p->lchild)+countnodes2(p->rchild)+1;
}

int countdoublechildnodes(Node* p){
    if(p==nullptr){
        return 0;
    }

    if(p->lchild && p->rchild){
        return countdoublechildnodes(p->lchild) + countdoublechildnodes(p->rchild)+1;
    }
    else return countdoublechildnodes(p->lchild) + countdoublechildnodes(p->rchild);
}

int sumofallnodes(Node * p){
    if(p==nullptr){
        return 0;
    }
    return sumofallnodes(p->lchild) + sumofallnodes(p->rchild) + p->data;
}


int heightcheck(Node* p){
    if(p==nullptr){
        return 0;
    }
    int x = heightcheck(p->lchild);
    int y = heightcheck(p->rchild);

    if(x>y){
        return x+1;
    }
    else return y+1;
}


int main(){

    createtree();
    int x = countnodes(base);

    cout<<"Number of nodes in the tree are: "<< x<<endl;

    int y = countnodes2(base);
    cout<<"Using method 2 number of nodes: "<< y<< endl;

    int z= countdoublechildnodes(base);
    cout<<"Number of nodes with double nodes are: "<< z << endl;

    int k = sumofallnodes(base);
    cout<<"Sum of all elements of the tree is: "<< k << endl;

    int j = heightcheck(base);
    cout<<"Height of the tree is: "<<j<<endl;

    
    return 0;
}
