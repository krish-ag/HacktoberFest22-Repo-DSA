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


int countt = 0;
int leafnodes(Node* p){
    if(p==nullptr){
        return 0;
    }
    int x = leafnodes(p->lchild);
    int y = leafnodes(p->rchild);

    if(x==0 && y ==0){
        return countt++;
    }
    else return countt;

    
}

// int countt2 = 0;
int degree1(Node* p){
    if(p==nullptr){
        return 0;
    }
    if((p->lchild!=nullptr && p->rchild == nullptr) || (p->rchild!=nullptr &&  p->lchild == nullptr)){
    return degree1(p->lchild) + degree1(p->rchild) + 1;
    }
    else return degree1(p->lchild) + degree1(p->rchild);
}

int degree2(Node* p){
    if(p==nullptr){
        return 0;
    }
    if(p->lchild !=nullptr && p->rchild !=nullptr){
        return degree2(p->lchild) + degree2(p->rchild)+1;
    }
    else return degree2(p->lchild) + degree2(p->rchild);
}

int main(){

    createtree();
    int count = leafnodes(base);
    cout<<"Total number of leaf nodes are: "<<count<<endl;

    count = degree1(base);
    cout<<"Total nodes of degree 1: "<< count<< endl;

    count = degree2(base);
    cout<<"Total nodes of degree 2: "<< count<<endl;
    return 0;
}
