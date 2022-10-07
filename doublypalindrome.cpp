#include <iostream>
using namespace std;

class node
{
public:
    node *next;
    char data;
    node *prev;
};

void print(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        cout << p->data;
        p = p->next;
    }
}
node *push(node *head, char s)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = s;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        newnode->prev = NULL;
    }
    else
    {
        node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = newnode;
        newnode->prev = p;
    }

    return head;
}
bool isrevit(node *left)
{
    node *right = left;
    while (right->next != NULL)
    {
        right = right->next;
    }
    while (left != right)
    {
        if (right->data != left->data)
        {
            return false;
        }
            left = left->next;
            right = right->prev;
    }
    return true;
}
int main()
{
    node *head = NULL;
    char str[] = "level";
    int n = sizeof(str) / sizeof(char);

    for (int i = 0; i < n; i++)
    {
        head = push(head, str[i]);
    }
    print(head);
    if(isrevit(head))
        cout<<"palindrome";
    else
    cout<<"not pali";

    return 0;
}