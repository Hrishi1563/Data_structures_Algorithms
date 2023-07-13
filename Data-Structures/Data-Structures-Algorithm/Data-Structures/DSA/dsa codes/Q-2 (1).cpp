#include<iostream>
#include<queue>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
	
	node (int d){
		this->data = d;
		this->left = NULL;
		this->right = NULL;
	}
};


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

node* insert(node* root,int data){
	if (root==NULL){
		root = new node(data);
		return root;
	}
	
	if (data > root->data){
		root->right = insert(root->right,data);
	}
	else{
		root->left = insert(root->left,data);
	}
	return root;
}

void takeInput(node* &root){
	int data;
	cin>>data;
	while(data!=-1){
		root = insert(root,data);
		cin>>data;
	}
}

void search(node* root,int data){
	if (root==NULL){
		return;
	}
	if (root->data==data){
		cout<<"The number "<<data<<" is present"<<endl;
		return;
	}
	
	if (data>root->data){
		search(root->right,data);
	}
	else{
		search(root->left,data);
	}
}

int maxVal(node* root){
	node* temp = root;
	while (temp->right!=NULL){
		temp = temp->right;
	}
	return temp->data;
}

int minVal(node* root){
	node* temp = root;
	while(temp->left!=NULL){
		temp = temp->left;
	}
	return temp->data;
}

node* del(node* root, int data){
	if (root==NULL){
		return NULL;
	}
	if (root->data==data){
		//0 child
		if ((root->left==NULL)&&(root->right==NULL)){
			delete root;
			return NULL;
		}
		// 1 child
		if ((root->left==NULL)&&(root->right!=NULL)){
			node* temp = root->right;
			delete root;
			return temp;
		}
		if ((root->left!=NULL)&&(root->right==NULL)){
			node* temp = root->left;
			delete root;
			return temp;
		}
		// 2 child
		if ((root->left!=NULL)&&(root->right!=NULL)){
			int mini = minVal(root->right);
			root->data = mini;
			root->right = del(root->right,mini);
			return root;
		}
		
	}
	
	else if (data>root->data){
		root->right = del(root->right,data);
		return root;
	}
	else{
		root->left = del(root->left,data);
		return root;
	}
	
}

int main(){
	node* root = NULL;
	cout<<"Enter the data to create BST:"<<endl;
	takeInput(root);
	// 25 20 10 22 5 12 36 30 40 28 38 48 -1
	cout<<"The BST is:"<<endl;
	levelOrder(root);
	cout<<"Enter the data to be checked:"<<endl;
	int data1,data2;
	cin>>data1;
	search(root,data1);
	cout<<"Enter the data to be deleted:"<<endl;
	cin>>data2;
	root = del(root,data2);
	cout<<"The BST is:"<<endl;
	levelOrder(root);
	return 0;
	
}