#include <iostream>

using namespace std;

class node
{
public:
    node *next;
    int data;
};

node* head=NULL;
void printlist(node *ptr)
{
    while (ptr != NULL)
    {
        cout <<ptr->data<<" ";
        ptr = ptr->next;
    }
}

node *push(node *head, int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL)
        head = newnode;
    else
    {
        node *p = head;
        while (p->next != NULL)
            p = p->next;
        p->next = newnode;
    }
    return head;
}

node* deleteatindex(node* head,int index)
{
    node* p=head;
    node *q=head->next;

    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);

    return head;
}
void searchanddelete(node* head)
{
    int datav,count=0;
    cout<<"Enter data to search :";
    cin>>datav;

    node* p=head;
    while(p!=NULL)
    {
        if(p->data==datav)
        {
            cout<<"found at :"<<count<<" ";
            head=deleteatindex(head,count);
        }
        p=p->next;
        count++;
    }
    cout<<endl;
    printlist(head);
}
int main()
{
    int n, data;
    cout << "Enter number of elements :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element :";
        cin >> data;
        head = push(head, data);
    }

    printlist(head);
    cout<<endl;
    searchanddelete(head);
    cout<<endl;

    return 0;
}