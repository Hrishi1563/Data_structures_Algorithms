#include<iostream>
#include<queue>
using namespace std;

 class node
{
	public:
		
			int data;
			node* left;
			node*right;
		
		node(int d)
		{
			this->data=d;
			this->left=NULL;
			this->right=NULL;
		}
};

void showTree(node* root)
{
	queue<node*> q;
	q.push(root);
     
	while(!q.empty())
	{
		node* temp=q.front();
		q.pop();
		cout<<temp->data<<" ";
		
		if(temp->left)
		q.push(temp->left);
		 if(temp->right)
		q.push(temp->right);
		
	}
	
}

node* buildTree(node* root)
{
	int d;
	cout<<"Enter data for the node"<<endl;
	cout<<"Enter -1 for NULL"<<endl;
	cin >>d;
	root = new node(d);
	if(d==-1)
	{
		return NULL;
		
	}
	
	cout<<"Entering data for inserting left node "<<endl;
	root->left=buildTree(root->left);
	cout<<"Entering data for inserting right node "<<endl;
	root->right=buildTree(root->right);
	return root;
}
bool check_BST(node* root)
{
	if(root==NULL)
	return true;
	
	check_BST(root->left);
	if(root->left->data>root->data)
	return false;
	check_BST(root->right);
	if(root->right->data<root->data)
	return false ;
}

int main()
{
	
	node* root=NULL;
	root=buildTree(root);
	showTree(root);
	bool flag=check_BST(root);
	if(flag)
	cout<<"It is a binary search tree"<<endl;
	else
	cout<<"It is not a binary search tree"<<endl;
	
}	
