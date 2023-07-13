#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
    int len1=mid-start+1;
    int len2=end-mid;
    int arr1[len1];
    int arr2[len2];
    
    int f=start;
    for(int i=0 ;i<len1;i++)
    {
    arr1[i]=arr[f];
    f++;
    }
  
   int pos=mid+1;
    for(int j=0;j<len2;j++)
    {
        arr2[j]=arr[pos];
        pos++;
    }

    int first=0;
    int second=0;
    int mainI=start;
    while(first<len1 && second<len2)
    {
        if(arr1[first]<arr2[second])
        {
            arr[mainI]=arr1[first];
            mainI++;
            first++;
        }
        else if(arr1[first]==arr2[second])
        {
            arr[mainI++]=arr1[first];
            arr[mainI++]=arr1[first];
            first++;
            second++;
        }
        else
        {
            arr[mainI]=arr2[second];
            mainI++;
            second++;
        }
    }

    while(first<len1) arr[mainI++]=arr1[first++];
    while(second<len2)arr[mainI++]=arr2[second++];

}



void mergesort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }

    int mid=(start+end)/2;

    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main(){

    int arr[]={10,1000,23,42,7,2,43,11,27};
    int n=sizeof(arr)/sizeof(int);
    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}