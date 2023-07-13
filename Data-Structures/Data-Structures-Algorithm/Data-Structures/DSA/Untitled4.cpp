#include <iostream>
using namespace std;

int*  Insertionsort(int arr[],int size,int n,int Array[])
{
	if(n<=size-1)
	{
	   int temp=arr[n];
	   for(int i=0;i<n;i++)
	   {
	    if(temp>Arr[i])
	    {
	    	int Temp=Array[i];
	    	Array[i]=temp;
	    	for(int j=i+1;j<=n;j++)
	    	{
	    		int TEMP= Arra;
	    		Array[j]
	    		
	    		
			}
		}
	   }
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
	int Array[size];
	Array[0]=arr[0];
	
   int* final=Selectionsort(arr,size,1,Array);
   for(int k=0;k<size;k++)
   {
   	cout<<final[k]<<" ";
   }
   
	
	
}
