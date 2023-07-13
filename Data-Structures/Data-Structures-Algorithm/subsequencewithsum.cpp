#include <iostream>
#include<bits/stdc++.h>


using namespace std;

void series(vector<int>&vec,int arr[],int n ,int& sum,int req)
{
     if(sum==req)
    {
        for(auto i:vec)
        cout<<i<<" ";
        cout<<endl;

        return ;

    }
    if(n<=0) return;
   
    
    if(sum+arr[n-1]<=req)
    {
        sum+=arr[n-1];
       vec.push_back(arr[n-1]);
    }

    series(vec,arr,n-1,sum,req);

    sum-=arr[n-1];

    vec.pop_back();
    series(vec,arr,n-1 ,sum,req);


}

int main(){
    int arr[]={1,2,1};
    vector<int> vec;

    int n=sizeof(arr)/sizeof(int);
    int sum=0;
    int req=2;
    set<int> s;
    
    for(int i=0;i<n;i++)
    {
        if(!s.count(arr[i]))
        {
            int sum=0;
            vec.clear();
            series(vec,arr,i,sum,req);
            s.insert(arr[i]);
        }

    }
    


}
