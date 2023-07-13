#include <iostream>
using namespace std;

 class node
{
	public :
		int data;
		node* next;
		node* prev;
	node(int d)
	{
		this->data=d;
		this->next=NULL;
		this->prev=NULL;
	}
};
void insertAtHead(node* &head,int d)
{
	node* temp=new node(d);
	head->prev=temp;
	temp->next=head;
	head=temp;
	
	
}
void traverseDisplay(node* head)
{
	if(head==NULL)
	  return ;
	
	cout<<head->data<<" ";
	traverseDisplay(head->next);
}
void insertAtTail(node* &tail,int d)
{
	node* temp= new node(d);
	temp->prev=tail;
	tail->next=temp;
	tail=temp;
}

int main()
{
	
	node* head = new node(10);
	node*tail = head;
	insertAtHead(head,20);
	insertAtHead(head,30);
	insertAtTail(tail,50);
	traverseDisplay(head);
}


