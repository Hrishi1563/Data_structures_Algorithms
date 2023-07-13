#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void subsequence(int ind,int length ,vector<int> &final , int arr[])
{
    if(ind==length)
    {
        for(auto i : final)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return ;
    }

final.push_back(arr[ind]);
subsequence(ind+1,length,final,arr);
final.pop_back();

subsequence(ind+1,length,final,arr);
}

int main(){
    int arr[]={3,1,2};
    vector<int> final ;
    subsequence(0,3,final,arr);

}
