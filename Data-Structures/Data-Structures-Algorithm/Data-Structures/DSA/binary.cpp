#include <iostream>
#include <bits/stdc++.h> 
using namespace std;


int binary(int key,int begin,int last,int arr[])
{
	int mid =(begin+last)/2;
	if(arr[mid]==key)
	return key;
	else if(begin<=last)
	{
		if(arr[mid]<key)
		return binary(key,mid+1,last,arr);
		else
		return binary(key,begin,mid-1,arr);
	}
	else if(begin>last)
	return -1;
	
}
int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
    int n = sizeof(arr)/ sizeof(arr[0]);
   sort(arr,arr+n);
	
	int begin=0;
	int last =n-1;
	int key;
	cin>> key;
   int flag=binary(key,begin,last,arr);
	if(flag!=-1)
	cout<<"Key is found ";
	else
	cout<<"Key is not found";
}
