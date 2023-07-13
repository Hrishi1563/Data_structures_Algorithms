#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct Qnode{
	int data;
	Qnode* next;
	Qnode(int d)
	{
		data = d;
		next = NULL;
	}
};

struct Queue{
	Qnode *front,*rear;
	Queue() { front = rear = NULL;}
	
	void enQueue(int x){
		Qnode* temp = new Qnode(x);
		if(rear==NULL){
			front = rear = temp;
			return;
		}
		Qnode* temp2 = NULL;
		// Swapping
		temp2 = front;
		front = rear;
		rear = temp2;
		temp->next = rear;
		rear = temp;
		// Again Swapping
		temp2 = front;
		front = rear;
		rear = temp2;
		
		
	}
	void deQueue(){
		if ((front==NULL)&&(rear==NULL)){
			cout<<"Underflow Condition"<<endl;
		}
		Qnode* temp = front;
		front = front->next;
		if (front==NULL){
			rear = NULL;
		}
		delete(temp);
	}
	void print(){
		Qnode* curr = front;
		while(curr!=NULL){
			cout<<curr->data<<" ";
			curr = curr->next;
		}
		cout<<endl;
	}
};

int main(){
	Queue q;
	label:
	cout<<"1. Press 1 to initiate push function."<<endl;
	cout<<"2. Press 2 to initiate pop function."<<endl;
	int n;
	cin>>n;
	while(n!=-1){
		if (n==1){
			cout<<"Enter the element:"<<endl;
			int val;
			cin>>val;
			q.enQueue(val);
			q.print();
			goto label;
		}
		else if(n==2){
			q.deQueue();
			q.print();
			goto label;
		}
	}
	return 0;
}