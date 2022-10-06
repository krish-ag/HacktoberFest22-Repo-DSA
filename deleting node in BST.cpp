#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};
Node *root = nullptr;

class BST
{
public:
    void insert(int value);
    Node *rinsert(Node *p, int value);
    void traversal(Node *p);
    Node *search(Node *p, int value);
    void delette(Node *p, int value);
    Node *preinorder(Node *p);
};

void BST ::insert(int value)
{
    Node *temp;
    Node *r;
    Node *p;
    if (root == nullptr)
    {
        root = new Node;
        root->data = value;
        root->lchild = nullptr;
        root->rchild = nullptr;
        return;
    }
    else
    {
        temp = root;
        while (temp != nullptr)
        {
            r = temp;
            if (value < temp->data)
            {
                temp = temp->lchild;
            }
            else if (value > temp->data)
            {
                temp = temp->rchild;
            }
            else
            {
                cout << "Value is already present" << endl;
                return;
            }
        }

        // now temp is null;
        p = new Node;
        p->data = value;
        p->rchild = nullptr;
        p->lchild = nullptr;

        if (value < r->data)
        {
            r->lchild = p;
        }
        else
        {
            r->rchild = p;
        }
    }
}

Node *BST ::rinsert(Node *p, int value)
{
    Node *temp;
    if (p == nullptr)
    {
        temp = new Node;
        temp->data = value;
        temp->lchild = nullptr;
        temp->rchild = nullptr;
        // root = temp;
        return temp;
    }
    // temp = root;

    if (value < p->data)
    {
        p->lchild = rinsert(p->lchild, value);
    }
    else if (value > p->data)
    {
        p->rchild = rinsert(p->rchild, value);
    }
    return p;
}

Node *parent;
Node *BST ::search(Node *p, int value)
{
    while (p != nullptr)
    {

        if (value < p->data)
        {
            parent = p;
            p = p->lchild;
        }
        else if (value > p->data)
        {
            parent = p;
            p = p->rchild;
        }
        else
        {
            return p;
        }
    }
    return p;
}

void BST ::delette(Node *p, int value)
{
    Node *temp = p;
    temp = search(root, value);

    if (temp == nullptr)
    {
        return;
    }

    if (temp->lchild == nullptr && temp->rchild == nullptr)
    {
        if (parent->lchild == temp)
        {
            parent->lchild = nullptr;
        }
        else
        {
            parent->rchild = nullptr;
        }
    }

    else if (temp->lchild && temp->rchild)
    {
        Node *replace;

        replace = preinorder(temp->lchild);
        int val = replace->data;
        delette(p, replace->data);
        temp->data = val;
    }

    else
    {
        if (temp == parent->rchild)
        {
            if (temp->rchild == nullptr)
            {
                parent->rchild = temp->lchild;
            }
            else
            {
                parent->rchild = temp->rchild;
            }
        }
        else
        {
            if (temp->rchild == nullptr)
            {
                parent->lchild = temp->lchild;
            }
            else
            {
                parent->lchild = temp->rchild;
            }
        }
    }
}


Node *BST ::preinorder(Node *p)
{
    while (p->rchild != nullptr)
    {
        p = p->rchild;
    }
    return p;
}

void BST ::traversal(Node *p)
{
    if (p != nullptr)
    {
        traversal(p->lchild);
        cout << p->data << " ";
        traversal(p->rchild);
    }
}

int main()
{

    BST b;
    root = b.rinsert(root, 9);
    b.insert(10);
    b.insert(15);
    b.insert(13);
    b.insert(14);
    b.insert(12);
    b.rinsert(root, 20);
    b.insert(25);
    b.rinsert(root, 11);
    b.rinsert(root, 6);

    cout<<endl;

    // printing the inorder of binary search tree:
    cout<<"Original inroder of BST: "<<endl;
    b.traversal(root);
    cout<<endl;

    // deleting an element from the BST tree:

    b.delette(root, 13);
    cout<<endl;
    cout<<"Printing inorder of BST after deleting 13: "<<endl;
    b.traversal(root);
    cout<<endl;

    return 0;
}
