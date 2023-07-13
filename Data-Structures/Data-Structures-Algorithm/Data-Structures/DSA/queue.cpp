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
	if(front==-1 && rear==-1 || front>rear)
	return true ;
	else
	return false;
}
void insertAtRear(int value)
{
	if(rear==size-1)
	  cout<<"Queue is full";
	  else
	  {
	  	if(front==-1)
	  	front++;
	  	
	   rear++;
	   arr[rear]=value;
	
}	


}
void display()
{
	if(!isempty())
	{
	
	for(int i =front;i<=rear;i++)
	{
		cout<<arr[i];
	}
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
	if(rear==size-1)
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
	cout<<"Enter size of queue";
	cin>>length;
   queue* NewQueue= new queue(length);
   NewQueue->insertAtRear(5);
   NewQueue->insertAtRear(6);
    NewQueue->insertAtRear(7);
     NewQueue->insertAtRear(8);
  // NewQueue->dequeue();
   // NewQueue->dequeue();
     NewQueue->showfront();
   NewQueue->display();
    
	

}
