#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void series(vector<int>&vec,int arr[],int n )
{
    if(n<=0) 
    {
        for(auto i:vec)
        cout<<i<<" ";

        return ;

    }
    vec.push_back(arr[n-1]);

    series(vec,arr,n-1);

    vec.pop_back();
    series(vec,arr,n-1);


}

int main(){

    int arr[]={1,2,3,4};
    vector<int> vec;

    int n=sizeof(arr)/sizeof(int);

    series(vec,arr,n);


}