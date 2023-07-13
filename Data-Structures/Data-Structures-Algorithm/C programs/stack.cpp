#include <iostream>
using namespace std;
#define MAX 1
#include <string.h>
class stack 
{
 public:
	int top=-1;
	int a[MAX];
	void push(int n);
	int pop();
	bool isEmpty();
	bool isOverFlow();
	bool isUnderFlow();
	
};
void stack::push(int n)
{

		a[++top]=n;
	
}

int stack::pop()
{
	return a[top--];
}

bool stack::isEmpty()
{
	if(top==-1)
	return true;
	else
	false;
}
bool stack::isOverFlow()
{
	if(top>=MAX-1)
	return true;
	else
	return false;
}
bool stack::isUnderFlow()
{
	if(top<0)
	return true ;
	else
	return false;
}





signed main()
{
	int x=2;
	class stack s;
	int i ,num;
	for(i=0;i>=0;i++)
	{
		string str;
		cout<< "Enter what you want to do " << endl ;
		cin>>str;
		if(str.at(0)=='R')
		{
			if(s.isOverFlow())
			{
				cout<< "Overflow condition occured" << endl ;
				break;
			}
			else
			{
				cout<< "Enternumber you want to enter "<< endl;
				cin>>num;
				s.push(num);
			}
		}
		else 
		{
			if(i==0)
			{
				cout<<"Under flow occured " << endl;
				break;
			}
			else if (!s.isUnderFlow())
			{
			   cout<< "The popped element is"<< s.pop() << endl ;
			}
			else
			{
				cout<<"Under flow occured " << endl ;
					break;
			}
		}
		}
		
    }
		
	  
	
	

