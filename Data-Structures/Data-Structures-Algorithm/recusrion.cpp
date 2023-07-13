#include <iostream>

using namespace std;
bool print(string s,int i)
{
    int  n =s.size();
    if(s.at(i)!=s.at(n-i-1)) return false;

    if(i>=n/2) return true;

   return print(s,i+1);



}

int main(){
    
    string s="121";
  bool flag= print(s,0);
  cout<<flag;

}
