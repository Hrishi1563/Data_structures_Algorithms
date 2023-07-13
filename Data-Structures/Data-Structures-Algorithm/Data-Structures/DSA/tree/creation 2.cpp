#include <iostream>
#include <queue>
using namespace std ;

class node
{
	public :
		int data;
		node* left;
		node* right;
		
		node(int d)
		{
			this->data=d;
			this->left=NULL;
			this->right=NULL;
		}
};

node* buildTree(node* root)
{
	cout<<"Enter data for the node"<<endl;
	cout<<"Enter -1 for null"<<endl;
	int d;
	cin>>d;
    if(d==-1)
    {
    	return NULL;
	}
	root=new node(d);
	cout<<"Enter element for left node"<<endl;
	buildTree(root->left);
	cout<<"Enter element for right node"<<endl;
	buildTree(root->right);

    return root ;	
}
void showTree(node* root)
{
	queue<node*> q;
	q.push(root);
	
	while(!q.empty())
	{
		node* temp;
		temp=q.front();
		q.pop();
		
		cout<<temp->data<<" ";
		if(temp->left)
		q.push(temp->left);
		if(temp->right)
		q.push(temp->right);
		
	}
	
}
void Inorder(node* root)
{
	cout<<"Hello"<<endl;
	if(root==NULL)
	{
		return ;
	}
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
	
}
	
int main()
{
	node* root=NULL;
    buildTree(root);
    cout<<"Hello"<<endl;
    showTree(root);
    
}


