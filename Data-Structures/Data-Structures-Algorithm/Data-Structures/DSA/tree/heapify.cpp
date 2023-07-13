#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class heap
{
	public:
		int arr[100];
		int size=0;
		
		heap()
		{
			arr[0]=-1;
			size=0;
			
		}
		
		void insert(int val)
		{
			size=size+1;
			int index=size;
			arr[index]=val;
			
			while(index>1)
			{
				int parent = index/2;
				if( arr[parent]<arr[index])
				{
					swap(arr[parent],arr[index]);
					index=parent;
					
				}
				else
				return ;
				
			}
		}
		
		void print()
		{
			int i;
			for(int i=1;i<=size;i++)
			{
				cout<<arr[i]<<" ";
			}
		}
		
		void deletefromHeap()
		{
			arr[1]=arr[size];
			size--;
			
			int index=1;
			
			while(index<size)
			{
				
				int leftIndex=2*index;
				int rightIndex=2*index+1;
				if(leftIndex<size && arr[leftIndex]>arr[leftIndex]>arr[index])
				{
					swap(arr[leftIndex],arr[index]);
					index=leftIndex;
				}
				else if(rightIndex<size && arr[rightIndex]>arr[index])
				{
					swap(arr[rightIndex],arr[index]);
					index=rightIndex;
				}
				else
				return;
			}
		}
		
		void heapify(int arr[],int index,int n)
		{
			int largest = index;
			int leftIndex=2*index;
			int rightIndex=2*index+1;
			
			if(leftIndex<n && arr[leftIndex]>arrr[index])
			{
				index=leftIndex;
			}
			if(rightIndex<n && arr[rightIndex]>arr[index])
			{
				index=rightIndex;
			}
			if(largest!=index)
			{
				swap(arr[index],arr[largest]);
				heapify(arr,largest,n);
			}
		}
};

int main()
{
	heap h1;
	h1.insert(50);
	h1.insert(55);
	h1.insert(53);
	h1.insert(52);
	h1.insert(54);
	
	h1.print();
}
