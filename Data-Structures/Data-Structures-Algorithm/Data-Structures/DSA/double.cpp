#include <iostream>
using namespace std;

class Node
{
	public:
		Node* prev;
		Node* next;
		int data ;
		
}*temp;
void create(int arr[])
{
	temp->prev=NULL;
	for(int i=0;i<5;i++)
	{
		
		temp->next=NULL;
		temp->data=arr[i];
		if(i<4)
		{
			Node* forward=new Node();
			temp->next= forward ;
			forward->prev=temp;
			temp=forward;
		}
	}
  }
  void display(Node* curr)
  {
  	cout<< endl;
  	int g=0;
  	while(curr!=NULL)
  	{
  		cout<<curr->data<<endl;
  		curr=curr->next;
  		
	  }
	  
	
  }
  void insertAtHead(Node** curr)
  {
  	cout<<"Enter data you want to enter "<< endl;
  	int num;
  	cin >> num;
  	Node* newHead=new Node();
  	newHead->prev=NULL;
  	newHead->data=num;
  	newHead->next=*(curr);
  	 *(curr)=newHead;
  	
  }
  void insertAtMiddle(Node* begin)
  {
  	int pos,num;
  	cin >> pos>>num ;
  	for(int j=1;j<pos;j++)
  	{
  		if(j==pos-1)
  		{
  			Node* newMiddle = new Node();
  			newMiddle->data=num;
  			newMiddle->prev=begin;
  			newMiddle->next=begin->next;
  			begin->next=newMiddle;
  			
		  }
		  begin=begin->next;
	  }
  }
  void deletion(Node* curr, Node** start )
  {
  	int pos ;
  	cin >> pos ;
  	for(int a=1;a<=pos;a++)
  	{
  		if(a==pos-1 && pos!=1)
  		{
  			curr->next=(curr->next)->next;
  			(curr->next)->prev=curr;
  			break;
  			
  			
		  }
		  else if(pos==1){
		  	*(start)=curr->next;
		  	curr=curr->next;
		  	curr->prev=NULL;
		  	
		  }
		  else if(curr->next==NULL)
		  {
		  	cout<<"Hello"<<endl;
		  	curr=curr->prev;
		  	curr->next=NULL;
		  	break;
		  }
		  curr=curr->next;
  		
	  }
  }
  int main()
  {
  int	A[]={1,2,3,4,5};
  Node* head =new Node();
  temp=head;
  create(A);
  insertAtHead(&head);
  insertAtMiddle(head);
  deletion(head,&head);
  display(head);
  
  	
  }

