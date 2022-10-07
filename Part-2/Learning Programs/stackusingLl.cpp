#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next;
};

node* push(int data, node* top)
{
    node* ptr=(node*)malloc(sizeof(node));
    ptr->data=data;
    ptr->next=top;
    top=ptr;

    return(top);
}

void print(node* top)
{
    while(top!=NULL)
    {
        cout<<top->data<<" ";
        top=top->next;
    }
}

int isempty(node* top)
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(node* top)
{
    node* ptr=(node*)malloc(sizeof(node));
    if(ptr==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

node* pop(node* top)
{
    node*p=top;
    top=top->next;
    free(p);
    return top;
}
int main()
{
    node* top=NULL;
    
    int n,data;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter data";
        cin>>data;
        top=push(data,top);
    }

    cout<<endl;
    print(top);

    return 0;
}