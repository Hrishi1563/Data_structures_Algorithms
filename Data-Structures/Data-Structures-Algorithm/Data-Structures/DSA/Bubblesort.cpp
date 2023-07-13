#include <iostream>
using namespace std;

int*  Bubblesort(int arr[],int size,int n)
{
	if(n<=size-1)
  {

	int temp;
	for(int i=0;i<size-n-1;i++)
	{
		if(arr[i]>arr[i+1] )
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
		
		return Bubblesort(arr,size,n+1);
	
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
	
   int* final=Bubblesort(arr,size,0);
   for(int k=0;k<size;k++)
   {
   	cout<<final[k]<<" ";
   }
   
	
	
}
