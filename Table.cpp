

#include <iostream>
using namespace std;

class Node{
	private:
		int data;
		Node* next;
		
	public:
		Node()
		{
			next = NULL;
		}
		
		void setData(int d)
		{
			data =d;	
		}
		void setNext(Node* ne)
		{
			next = ne;
		}
		
		int getData()
		{
			return data;
		}
		
		Node* getNext()
		{
			return next;
		}
		
};

class list{
	private:
		Node* Head;
		Node* Current;
		int limit;
		int val;
	public:
		list()
		{
			limit = 0;
			Head = NULL;
			Current = NULL;
		}
		
		void InsertTable(int d,int l)
		{
			Node* temp;
			
			while(limit!=l)
			{
			
			if(Head == NULL)
			{
				Head = new Node();
				Head->setData(d);
				limit++;
				val = d;
			}
			else if (Head!=NULL)
			{
				temp = new Node();
				Current = Head;
				while(Current->getNext()!=NULL)
				{
					Current = Current->getNext();
				}
				
				limit++;
				temp->setData(d*limit);
				Current->setNext(temp);
			}
			}
		}
		
		void print()
		{
			Current = Head;
			int a;
			a=0;
			cout<<endl;
			while(Current!=NULL)
			{
				cout<<val<<" X "<<++a<<" = "<<Current->getData()<<endl;
				Current = Current->getNext();
			}
			cout<<endl;
		}
};

int main()
{
	list a;
	bool hold = true;
	int chois;
	while(hold == true)
	{
		cout<<"\nPress 1 To insert Table";
		cout<<"\nPress 2 To Print Table";
		cout<<"\nPress 3 To Exit";
		cout<<"\nChoise: ";
		cin>>chois;
		if(chois==1)
		{
			cout<<"\nEnter the Number: ";
			int nu;
			cin>>nu;
			cout<<"\nEnter The Limit of Table: ";
			int li;
			cin>>li;
			a.InsertTable(nu,li);
		}
		else if(chois == 2)
		{
			a.print();
		}
		else if(chois == 3)
		{
			break;
		}
	}
}
