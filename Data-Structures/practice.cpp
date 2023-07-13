#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int func(vector<int>&arr,int k,int index)
{

    for(int i=-k;i<=k;i++)
    {
        int tempa=arr[i];
        arr[i]=arr[i]+k;

    }
}
int main(){
    

    
    vector<int> arr={2,5,1,2};
    int k=1;

    return func(arr,k,0);



}