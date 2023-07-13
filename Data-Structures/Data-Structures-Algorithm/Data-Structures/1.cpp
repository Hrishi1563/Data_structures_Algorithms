#include <iostream>
#include <math.h>
using namespace std;
int fib(int n,int a,int b)
{
    //base
    if(n==0)
    {
        return a;
    }
    if(n==1)
    {
        return b;
    }
    if(n==2)
    {
        return pow(a,b);
    }
    
    
     return pow( fib(n-1,a,b), fib(n-2,a,b));
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
{
	    int a,b,n;
	    cin>>a>>b>>n;
	    int term=fib(n,a,b);
	    cout<<term<<endl;
	}
	
}