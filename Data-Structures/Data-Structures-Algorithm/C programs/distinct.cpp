#include<iostream>
#include<map>
#define int long long 
using namespace std;
signed main()
{
	int t ;
	cin >> t;
	while(t--)
	{
		int flag=0;
		int count=0;
		map<int,int> m;
		int n;
		cin>>n;
		int arr[n];
		int i;
		for(i=0;i<n;i++)
		{
			cin >> arr[i];
			m[arr[i]]++;
		}
		for(auto k : m)
		{
			if(k.second==1)
			count++;
			else
			flag=-1;
		}
		
		if(count%2==0)
		cout<<"YES" << endl; 
		else if(flag==-1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;	
	}
	
}
