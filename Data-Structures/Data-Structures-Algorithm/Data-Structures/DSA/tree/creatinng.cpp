#include <iostream>
using namespace std;
#include <queue>

class node
{
	public:
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
node* create(node* root)
{
    cout<<"Enter data "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
    {
    	return NULL;	
	}
	
	cout<<"Enter data for inserting data in left"<<endl;
  root->left=create(root->left);
	cout<<"Enter data for inserting data in right"<<endl;
   root->right=create(root->right);
	
	return root;
}

void Inorder(node* root)
{
	if(root==NULL)
	return ;
	
	Inorder( root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
void Preorder(node* root)
{
	if(root==NULL)
	return ;
	
	cout<<root->data;
	Preorder(root->left);
	Preorder(root->right);
	
	
}
void Postorder(node* root)
{
	if(root==NULL)
	return ;
	

	Postorder(root->left);
	Postorder(root->right);
	cout<<root->data;	
}

void Levelorder(node* root)
{
	queue<node*> q;
	q.push(root);

	
	while(!q.empty())
	{
			node* temp =q.front();
			cout<<temp->data<<" ";
			q.pop();
			
			if(root->left)
			{
				q.push(temp->left);
				
			}
			if(root->right)
			{
				q.push(temp->right);
			}
	
		
	}
	
}


int main()
{
	node* root=create(root);
	Inorder(root);
	cout<<endl;
	Preorder(root);
	cout<<endl;
	Postorder(root);
	cout<<endl;
	Levelorder(root);
}
