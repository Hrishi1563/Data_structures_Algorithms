#include <iostream>
using namespace std ;

class Node
{
	public :
		int data ;
		Node* next;
	
} *temp;
void create(int arr[])
{
	for(int i=0;i<5;i++)
	{
		temp->data=arr[i];
		temp->next=NULL;
		if(i<4)
		{
			Node* start = new Node();
			temp-> next=start;
			temp=start;
		}
		
		
	}
	
}
 
 void insertAtMiddle(Node* begin)
 {
 	cout<< "Enter the position and number want to enter "<< endl ;
 	int pos,num;
 	cin>>pos>>num;
 	for(int i=1;i<pos;i++)
 	{
 		if(i!=pos-1)
 		begin=begin->next;
 		else
 		{
 			Node* middle =new Node();
 			middle->data=num;
 			middle->next=begin->next;
 			begin->next=middle;
		 }
	 }
 }
void  display (Node* first)
{
	cout<<endl;
	while(first!=NULL)
	{
		cout<< first->data << endl;
		first = first->next;
		
	}
}
void insertAtHead(Node** begin)
{
	cout<< "Enter new element you want to enter at front"<< endl ;
	int num;
	cin>> num ;
	Node* ins = new Node();
	ins->data=num;
	ins->next=*begin;
	 *begin=ins;
      
	
	}
	void insertAtEnd(Node* begin)
	{
		cout<<"Enter number you want to end "<< endl ;
		int  num;
		cin >> num;
		for(int i=0;i>=0;i++)
		{
			if(begin->next!=NULL)
			{
				begin=begin->next;
			}
			else
			{
				Node* end = new Node();
				end->data= num;
				end->next=NULL;
				begin->next=end;
				break;
			}
		}
	}
	
	void deletion(Node* head )
	{
		int pos ;
		cout<<"Enter the position of node you want to delete "<< endl ;
		cin>>pos;
		for(int i=1;i<pos;i++)
		{
			if(i==pos-1)
			{
				head->next=(head->next)->next;
			}
			
		}
		
	}
 
int main()
{
	int A[]={1,2,3,4,5};
   Node* head = new Node();
    temp = head;
    create(A);
    insertAtHead(&head);
    insertAtEnd(head);
    insertAtMiddle(head);
    deletion(head);
    display(head);
}
