#include <iostream>
#include <bits/stdc++.h>
#define int  long long 

using namespace std;

int fibonnaci(int n,vector<int>&dp)
{
    if(n<=1) return n;
    
    if(dp[n]!=-1) return dp[n];
   
    return dp[n]=fibonnaci(n-1,dp)+fibonnaci(n-2,dp);

}


signed main(){

    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
 int x= fibonnaci(n,dp);

 cout<<x;

}