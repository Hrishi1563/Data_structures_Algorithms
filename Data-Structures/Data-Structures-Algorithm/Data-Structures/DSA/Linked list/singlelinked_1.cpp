#include <iostream>
using namespace std;

 class node
{
	public :
		int data;
		node* next;
	node(int d)
	{
		this->data=d;
		this->next=NULL;
	}
};
void  insertAtHead(node* &head,int d)
{
	node* temp = new node(d);
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
	tail->next=temp;
	tail=temp;
	
	
}
int main()
{
	node* head= new node(10);
	node* tail= head;
	insertAtTail(tail,20);
	insertAtHead(head,30);
	insertAtHead(head,40);
	traverseDisplay(head);
	traverseDisplay(tail);
	
}

