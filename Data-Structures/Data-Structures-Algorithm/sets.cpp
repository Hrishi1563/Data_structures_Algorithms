#include <iostream>
#include<bits/stdc++.h>
using namespace std;

signed main(){

    long long int n;
    cin>>n;
    long long int sum = ((n)*(n+1))/2;
    if(sum%2!=0) 
    {
        cout<<"NO";
        return 0;
    }
    set<long long int> s1;
    set<long long int> s2;
   long long int num;
    long long int sum1=0;
    bool flag =false;
    while(n!=0)
    {

        if(flag)
        {
            if(n!=num && n!=0)
            s2.insert(n);
            n--;
            continue;
           
        }
        
        if(sum1+n<((sum/2)) )
        {
            sum1+=n;
            s1.insert(n);
        }
        else if(sum1+n==((sum/2)))
        {
            sum1+=n;
            s1.insert(n);
            flag=true;
        }
        else
        {
              s2.insert(n);
              s1.insert((sum/2)-sum1);
               num =(sum/2)-sum1;
              flag=true;
        }

        n--;

    }
    cout<<"YES";
    cout<<endl;
    cout<<s1.size();
    cout<<endl;
    for (auto it = s1.begin(); it !=
                             s1.end(); ++it)
        cout << *it<<' ';

    cout<<endl;
    cout<<s2.size();
    cout<<endl;
    for (auto it = s2.begin(); it !=
                           s2.end(); ++it)
        cout  << *it<<' ';

   cout<<endl;



}