#include <vector>
#include <iostream>
using namespace std;

class queue
{
	public:
		vector<int> vec;
		
		void push(int num)
		{
			vec.push_back(num);
			
		}
		void pop()
		{
			if(vec.size()==0)
			return;
			
			vec.erase(vec.begin());
		}
		int peak()
		{
			return vec[0];
		}
		bool isempty()
		{
			return vec.size()==0;
		}
			
};
void stackPush(queue &q1,queue &q2,int num)
{
	q2.push(num);
	
	while(!q1.isempty())
	{
		int a=q1.peak();
		q1.pop();
		q2.push(a);
	}
	swap(q1,q2);
}


int main()
{
	queue q1;
	queue q2;
	stackPush(q1,q2,5);
	stackPush(q1,q2,9);
	cout<<q1.peak();
}
	
	


