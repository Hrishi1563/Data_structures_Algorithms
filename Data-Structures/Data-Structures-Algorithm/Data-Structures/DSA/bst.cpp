#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
};
 
Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 
void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    
    printInorder(node->left);
 
    
    cout << node->data << " ";
 
    
    printInorder(node->right);
}
void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    
    printPostorder(node->left);
 
    
    printPostorder(node->right);
 
    
    cout << node->data << " ";
}
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;
 
   
    cout << node->data << " ";
 
   
    printPreorder(node->left);
 
    
    printPreorder(node->right);
}
 

int main()
{
    struct Node* root = newNode(25);
    root->left = newNode(20);
    root->right = newNode(36);
    root->left->left = newNode(10);
    root->left->right = newNode(22);
    root->left->left->left = newNode(5);
    root->left->left->right = newNode(12);
    root->right->left= newNode(30);
    root->right->left->left= newNode(30);
    root->right->right = newNode(40);
     root->right->right->left = newNode(38);
      root->right->right->right = newNode(48);
 
    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);
    cout<<"\nPreorder traversal of binary tree is"<<endl;
    printPreorder(root);
    cout<<"\nPostOrder traversal of binary tree is"<<endl;
    printPostorder(root); 
 
}
