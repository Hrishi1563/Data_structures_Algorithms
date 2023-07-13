#include <iostream>
#include <stack>
#include <bits/stdc++.h> 
using namespace std;
signed main()
{
    string s,s1;
    char ch,ch2;
    cin>>s;
    stack<char> S;
    int a=0,flag=0;
    for(int i =0 ;i<s.length();i++)
    {
        if(s.at(i)=='('|| s.at(i)=='{'|| s.at(i)=='[')
        {
        S.push(s.at(i));
        }
        else
        {
            if(i+1==s.length() && S.empty())
            {
            flag=-1;
            break;
            }
            else
            {
               ch=S.top();
                ch2=s.at(i);
            }
          
          if(ch=='(' && ch2==')')
          S.pop();
         else if(ch=='{' && ch2=='}')
          S.pop();
         else  if(ch=='[' && ch2==']')
          S.pop();
         else 
         {
          break;
          flag=-1;
         }
          
        }
    }
        if (S.empty() && flag==0)
        cout<<"Valid brackets" ;
        else
        {
        cout<<"invalid strings ";
        }
    }
