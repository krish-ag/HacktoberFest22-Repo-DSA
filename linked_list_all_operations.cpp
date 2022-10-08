// CREATING A SINGLY LINKED LIST AND DISPLAYING IT

#include <iostream>
using namespace std;

// class node
// {
//     public:
//     int data;
//     class node *next;
// };

// int main(void)
// {
//     class node *head,*nn,*temp;
//     head=NULL;
//     int n;
//     cout<<"enter the no. of elements to be inserted in ";
//     cin>>n;
//     while(n--)
//     {
//         nn= new node;
//         cout<<"enter data: ";
//         cin>>nn->data;
//         nn->next=NULL;
//         if(head==NULL)
//         {
//             head=nn;
//             temp=nn;
//         }
//         else
//         {
//             temp->next=nn;
//             temp=nn;
//         }
//     }
//       temp=head;
//       cout<<"the linked list is given below:-\n";
//       while(temp!=NULL)  
//       {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//       }
//     }

// INSERTING THE ELEMeNT at the last OF THE LINK LIST

// class node
// {
//     public:
//     int data;
//     class node *next;
// };

// int main(void)
// {
//     class node *head,*nn,*temp;
//     head=NULL;
//     int n;
//     cout<<"enter the no. of elements to be inserted in ";
//     cin>>n;
//     while(n--)
//     {
//         nn= new node;
//         cout<<"enter data: ";
//         cin>>nn->data;
//         nn->next=NULL;
//         if(head==NULL)
//         {
//             head=nn;
//             temp=nn;
//         }
//         else
//         {
//             temp->next=nn;
//             temp=nn;
//         }
//     }
//       temp=head;
//       cout<<"the linked list is given below:-\n";
//       while(temp!=NULL)  
//       {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//       }
//       nn=new node;
//       cout<<"\nenter the data u want to insert in the link list: ";
//       cin>>nn->data;
//       nn->next=NULL;
//       temp=head;
//       while(temp->next!=0)
//       {
//         temp=temp->next;
//       }
//       temp->next=nn;
//       temp=temp->next;
//       temp->next=NULL;
//       temp=head;
//       cout<<"the linked list after inserrting the element at last is given below: \n";
//       while(temp!=NULL)  
//       {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//       }
//     }

// INSERTION OF ELEMENT AT ANY POSITION
    
//  class node
// {
//     public:
//     int data;
//     class node *next;
// };

// int main(void)
// {
//     class node *head,*nn,*temp;
//     head=NULL;
//     int n;
//     cout<<"enter the no. of elements to be inserted in ";
//     cin>>n;
//     while(n--)
//     {
//         nn= new node;
//         cout<<"enter data: ";
//         cin>>nn->data;
//         nn->next=NULL;
//         if(head==NULL)
//         {
//             head=nn;
//             temp=nn;
//         }
//         else
//         {
//             temp->next=nn;
//             temp=nn;
//         }
//     }
//       temp=head;
//       cout<<"the linked list is given below:-\n";
//       while(temp!=NULL)  
//       {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//       }
//       int pos,i;
//       nn=new node;
//       cout<<"\nenter the position at which you want to insert the element: ";
//       cin>>pos;
//       if(pos-n<0)
//       cout<<"invalid position\n";
//       else
//       {
//          temp=head;
//          while(i<pos-2)
//       {
//         temp=temp->next;
//         i++;
//       }
//       cout<<"enter the element you want to insert: ";
//       cin>>nn->data;
//       nn->next=temp->next;
//       temp->next=nn;
//      }
//       temp=head;
//       cout<<"the linked list is given below: \n";
//       while(temp!=NULL)  
//       {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//       }
//      }

// INSERT AT THE BEGINNING OF THE LINK LIST

//  class node
// {
//     public:
//     int data;
//     class node *next;
// };

// int main(void)
// {
//     class node *head,*nn,*temp;
//     head=NULL;
//     int n;
//     cout<<"enter the no. of elements to be inserted in ";
//     cin>>n;
//     while(n--)
//     {
//         nn= new node;
//         cout<<"enter data: ";
//         cin>>nn->data;
//         nn->next=NULL;
//         if(head==NULL)
//         {
//             head=nn;
//             temp=nn;
//         }
//         else
//         {
//             temp->next=nn;
//             temp=nn;
//         }
//     }
//       temp=head;
//       cout<<"the linked list is given below:-\n";
//       while(temp!=NULL)  
//       {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//       }
//       nn=new node;
//          temp=head;
//       cout<<"\nenter the element you want to insert: ";
//       cin>>nn->data;
//       nn->next=temp;
//       temp=nn;
//       cout<<"the linked list after insertion is given below: \n";
//       while(temp!=NULL)  
//       {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//       }
//      }

// DELETING AN ELEMENT FROM BEGGINING

//  class node
// {
//     public:
//     int data;
//     class node *next;
// };

// int main(void)
// {
//     class node *head,*nn,*temp;
//     head=NULL;
//     int n;
//     cout<<"enter the no. of elements to be inserted in ";
//     cin>>n;
//     while(n--)
//     {
//         nn= new node;
//         cout<<"enter data: ";
//         cin>>nn->data;
//         nn->next=NULL;
//         if(head==NULL)
//         {
//             head=nn;
//             temp=nn;
//         }
//         else
//         {
//             temp->next=nn;
//             temp=nn;
//         }
//     }
//       temp=head;
//       cout<<"the linked list is given below:-\n";
//       while(temp!=NULL)  
//       {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//       }
//          temp=head;
//         temp=temp->next;
//       cout<<"\nthe linked list after deletion from begining is given below: \n";
//       while(temp!=NULL)  
//       {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//       }
//      }

// DELETING THE ELEMENT FROM LAST

//  class node
// {
//     public:
//     int data;
//     class node *next;
// };

// int main(void)
// {
//     class node *head,*nn,*temp;
//     head=NULL;
//     int n;
//     cout<<"enter the no. of elements to be inserted in ";
//     cin>>n;
//     while(n--)
//     {
//         nn= new node;
//         cout<<"enter data: ";
//         cin>>nn->data;
//         nn->next=NULL;
//         if(head==NULL)
//         {
//             head=nn;
//             temp=nn;
//         }
//         else
//         {
//             temp->next=nn;
//             temp=nn;
//         }
//     }
//       temp=head;
//       cout<<"the linked list is given below:-\n";
//       while(temp!=NULL)  
//       {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//       }
//          temp=head;
//       cout<<"\nthe linked list after deletion from lat is given below: \n";
//       while(temp->next!=NULL)  
//       {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//       }
//      }

// DELETING THE ELEMENT FROM ANY POSITION

//  class node
// {
//     public:
//     int data;
//     class node *next;
// };

// int main(void)
// {
//     class node *head,*nn,*temp;
//     head=NULL;
//     int n;
//     cout<<"enter the no. of elements to be inserted in ";
//     cin>>n;
//     while(n--)
//     {
//         nn= new node;
//         cout<<"enter data: ";
//         cin>>nn->data;
//         nn->next=NULL;
//         if(head==NULL)
//         {
//             head=nn;
//             temp=nn;
//         }
//         else
//         {
//             temp->next=nn;
//             temp=nn;
//         }
//     }
//       temp=head;
//       cout<<"the linked list is given below:-\n";
//       while(temp!=NULL)  
//       {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//       }
//       int pos,i;
//       cout<<"\nenter the position from which element need to be deleted: ";
//       cin>>pos;
//          temp=head;
//          while(i<pos-2)
//          {
//             temp=temp->next;
//             i++;
//          }
//          temp->next=temp->next->next;
//          temp=head;
//       cout<<"the linked list after deletion from the given position is given below: \n";
//       while(temp!=NULL)  
//       {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//       }
//      }
