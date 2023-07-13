#include<iostream>
#include<queue>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
	
	node(int d){
		this->data = d;
		this->left = NULL;
		this->right = NULL;
	}
};

node* buildTree(node* root){
	cout<<"Enter the data:"<<endl;
	int data;
	cin>>data;
	root = new node(data);
	if (data==-1){
		return NULL;
	}
	
	cout<<"Enter the data to be inserted in the left of "<<data<<endl;
	root->left = buildTree(root->left);
	cout<<"Enter the data to be inserted in the right of "<<data<<endl;
	root->right = buildTree(root->right);
	
	return root;
}

void levelOrder(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}
		}
		
	}
}

void inOrder(node* root){
	if (root==NULL){
		return;
	}
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

void preOrder(node* root){
	if (root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}

void postOrder(node* root){
	if(root==NULL){
		return;
	}
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}

void height(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	int count=0;
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		if (temp==NULL){
			count = count+1;
			if (!q.empty()){
				q.push(NULL);
			}
		}
		else{
			if (temp->left){
				q.push(temp->left);
			}
			if (temp->right){
				q.push(temp->right);
			}
		}
	}
	cout<<"The height of the tree is:"<<count<<endl;
}

void printDataAtLeafNode(node* root){
	if (root==NULL){
		return;
	}
	if ((root->left==NULL)&&(root->right==NULL)){
		cout<<root->data<<" ";
		return;
	}
	if(root->left){
		printDataAtLeafNode(root->left);
	}
	if(root->right){
		printDataAtLeafNode(root->right);
	}
}

int main(){
	node* root = NULL;
	root = buildTree(root);
	cout<<"Inorder Traversal:"<<endl;
	inOrder(root);
	cout<<endl;
	cout<<"Postorder Traversal:"<<endl;
	postOrder(root);
	cout<<endl;
	cout<<"Preorder Traversal:"<<endl;
	preOrder(root);
	cout<<endl;
	cout<<"The data at leaf nodes are:"<<endl;
	printDataAtLeafNode(root);
	cout<<endl;
	height(root);
	return 0;
}