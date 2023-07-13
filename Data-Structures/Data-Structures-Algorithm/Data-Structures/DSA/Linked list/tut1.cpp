#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
  

struct Node {
    int data;
    Node* next;
};
  

void insert(Node** root, int item)
{
    Node* temp = new Node;
    Node* ptr;
    temp->data = item;
    temp->next = NULL;
  
    if (*root == NULL)
        *root = temp;
    else {
        ptr = *root;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}
  
void displayCommonElements(Node* root,Node* root1)
{
	Node* start =root1;
    while (root1 !=NULL) {
    	
    	if(root->data ==root1->data )
    	{
        cout << root->data << " ";
        }
        
        root1=root1->next;
    }
    if(root!=NULL)
    {
    root=root->next;
    displayCommonElements(root,start);
 }
}
  
Node *arrayToList(int arr[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
        insert(&root, arr[i]);
   return root;
}

void displayDistinctElements(Node* root,Node* root1)
{
	vector<int> vec;
	while(root!=NULL || root1!=NULL)
	{
		if(root->data!=root1->data )
		{
			vec.push_back(root->data);
			cout<<root->data<<" ";
			cout<<root1->data<<" ";
		}
		
		
	    
	}
	
}
  

int main()
{
    int arr[] = { 3, 7,10,15,16,9,22,17,32};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = arrayToList(arr, n);
    int arr1[] = {6,2,9,13,47,8,10,1,28};
     n = sizeof(arr) / sizeof(arr1[0]);
    Node* root1 = arrayToList(arr1, n);
    displayCommonElements(root,root1);
    
    
    return 0;
}
