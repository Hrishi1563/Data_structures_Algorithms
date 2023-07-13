#include<bits/stdc++.h>
#include<iostream>
#include <unordered_map>
class graph
{
	public:
		unordered_map<int,list<int> > adj;
		void addEdge(int u,int v,bool direction)
		{
			// make an edge from u to v
			adj[u].push_back(v);
			
			// for undorected graphs
			if(direction==0)
			{
				adj[v].push_back(v);
			}
		}
		void print()
		{
			for(auto i:adj)
			{
				cout<<i.first<<"->";
				for(auto j:i.second)
				{
					cout<<j<<",";
				}
			}
				}
			
		
};

int main()
{
	int n;
	cout<<"Enter nodes"<<endl;
	cin>>n;

   int m;
   cout<<"Enter edges"<<endl;
   cin>>m;
   
   graph g;
   for(int i=0;i<m;i++)
   {
   	int u,v;
   	cin>>u>>v;
   	g.addEdge(u,v,0);
 }	

}
