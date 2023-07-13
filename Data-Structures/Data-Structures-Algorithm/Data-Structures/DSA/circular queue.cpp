#include <iostream>
using namespace std;

class queue
{
	public :
		int size;
		int front;
	    int rear;
	    int *arr;
	    queue(int l)
	    {
	    	size=l;
	    	front=-1;
	    	rear=-1;
	    	arr= new int[l];
		}
	bool isempty()
    {
    	
	if(front==-1 && rear==-1)
	return true ;
	else
	return false;
      }
void insertAtRear(int value)
{
	if(isfull())
	  cout<<"Queue is full";
	  else 
	  {
	  	if(front==-1)
	  	{
	  	  front++;
	  	  rear++;
	  			
		  }
	  
	  	
	  else if(rear<size-1)
	  {
	  	rear++;
	  	
	  }
	  else if(rear==size-1)
	  {
	  	rear=0;
	  	
	  }
	  arr[rear]=value;
	   
	
}	

}
void display()
{
	if(!isempty())
	{
	
	for(int i =front;i<=rear;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<""<<endl;
   }
   else
   cout<<"Queue is empty"<<endl; 

}

void dequeue()
{
	if(rear==-1&& front ==-1)
	{
		cout<<"Queue is empty";
		
	}
	else
	{
		if(front==size-1)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}
}

bool isfull()
{
	if((front==0 && rear==size-1) || (rear==(front-1)%(size-1)) )
	return true;
	else
	return false;
}

void showfront()
{
	if(isempty())
	cout<< "Queue is empty";
	else
	cout<<arr[front]<<endl;
}
};


int main()
{
	int length;
	cout<<"Enter size of NewQueue"<<endl;
	cin>>length;
 queue* NewQueue = new queue(length);
  
  for(int i =0;i>=0;i++)
  {
  	int choice;
  	cout<<"Enter 1 to enter job "<<endl;
  	cout<<"Enter 2 to delete present job "<<endl;
  	cout<<"Enter 3 to show status "<<endl;
  	cout<<"Enter 4 to exit "<<endl;
  	cin>>choice;
  	switch(choice)
  	{
  		case 1:
  			{
  				if(NewQueue->isfull()){
				  cout<<"Printer NewQueue is full "<<endl;
			}
  				else
  				{
				  cout<<"Enter P if you want to  print present job  or press any  other  key to enter  another job first"<<endl;
				  char ch ;
				  cin>>ch;
				  if(ch=='p'|| ch=='P')
				  {
				  	NewQueue->dequeue();
				  	int value;
				  	cout<<"Enter job number "<<endl;
				  	cin>>value;
				  	NewQueue->insertAtRear(value);
		
				  }
				  else
				  {
				  	cout<<"Hello"<<endl;
				  	int value;
				  	cout<<"Enter job number "<<endl;
				  	cin>>value;
				  	NewQueue->insertAtRear(value);
				  	
				  }
				  
			     }
			  }
			  break;
			  case 2:
			  	{
			  		if(NewQueue->isempty())cout<<"Printer NewQueue is empty "<<endl;
			  		else NewQueue->dequeue();
			  		
				  }
				  break;
			case 3:
				{
					if(NewQueue->isempty())cout<<"Printer queue is empty "<<endl;
				  NewQueue->display();
					
				}
				break;
				case 4:
					{
						cout<<"Printer queue"<<endl;
						NewQueue->display();
						cout<<"Printer process ended"<<endl;
						cout<<""<<endl;
						i=-2;
					}
					break;
		}
	  }
  }


