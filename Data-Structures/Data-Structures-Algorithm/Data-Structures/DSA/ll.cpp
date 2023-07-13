#include <iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
		
}*temp;
Node* top;


void create(int value)
{
	Node* newNode=new Node();
	newNode->data=value;
	newNode->next=NULL;
	temp->next=newNode;
	top->next=temp->next;
	temp=newNode;
	
	
}

int pop()
{
	return (top->next)->data ;
	
}

int main()
{
	Node* head=new Node;
	temp=head;
	create(6);
	int a =pop();
	cout<<a;
}
