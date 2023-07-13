#include <iostream>
using namespace std;

int*  Selectionsort(int arr[],int size,int n)
{
	if(n<=size-1)
	{
	
	int min=arr[n];
	for(int i=n;i<size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
			arr[i]=arr[n];
			arr[n]=min;
		}
		
	}
	return Selectionsort(arr,size,n+1);
   }
   else
   return arr ;
}

int main()
{
	int size;
	cin>> size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
   int* final=Selectionsort(arr,size,0);
   for(int k=0;k<size;k++)
   {
   	cout<<final[k]<<" ";
   }
   
	
	
}
