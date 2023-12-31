#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    node *left;
    node *right;
    int data;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
node *insertinbst(node *&root, int d)
{
    if (root == NULL)
    {
        root = new node(d);
        return root;
    }
    if (d > root->data)
    {
        root->right = insertinbst(root->right, d);
    }
    else
    {
        root->left = insertinbst(root->left, d);
    }
    return root;
}
void takeinput(node *&root)
{
    cout << "Enter data ..." << endl;
    int data;
    cin >> data;
    while (data != -1)
    {
        insertinbst(root, data);
        cin >> data;
    }
}
node *buildTree(node *root)
{
    int data;
    cout << "Enter data ... " << endl;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter in left of " << data << "..." << endl;
    root->left = buildTree(root->left);
    cout << "Enter in right of " << data << "..." << endl;
    root->right = buildTree(root->right);
}
node *minvalueInBst(node *root)
{
    node *temp = root;
    while (temp != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
node* minValueNode(node* node)
{
    struct node* current = node;
  
    
    while (current && current->left != NULL)
        current = current->left;
  
    return current;
}
 node* deleteNode( node* root, int key)
{
    
    if (root == NULL)
        return root;
  
    
    if (key < root->data)
        root->left = deleteNode(root->left, key);
  
    
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
  
    
    else {
        
        if (root->left == NULL) {
             node* temp = root->right;
           
            return temp;
        }
        else if (root->right == NULL) {
             node* temp = root->left;
            return temp;
        }
  
    
         node* temp = minValueNode(root->right);
  

        root->data = temp->data;
  
       
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
bool searchInBst(node *root, int key)
{
    if (root == NULL)
        return false;
    if (root->data == key)
        return true;
    else if (key < root->data)
    {
        return searchInBst(root->left, key);
    }
    else
    {
        return searchInBst(root->right, key);
    }
}
int main()
{
    node *root = NULL;
    takeinput(root);
    
    int val;
    do
    {
        cout << "1.Enter 1 for inserting in BST " << endl;
        cout << "2.Enter 2 for deleting in BST " << endl;
        cout << "3.Enter 3 for searching in BST" << endl;
        cout << "4.Enter 4 for inorder traversal " << endl;
        cout << "5.Enter 5 for postorder traversal" << endl;
        cout << "6.Enter 6 for preorder traversal" << endl;
        cout << "7.Enter 7 for exit " << endl;
        cout << "Enter val : ";
        cin >> val;
        switch (val)
        {
        case 1:
        {
            cout << "Enter data for inserting : ";
            int data;
            cin >> data;
            
            insertinbst(root, data);
            cout << "Inserting successfully done " << endl;
        }
        break;
        case 2:
        {
            cout << "Enter data for deleting : ";
            int data;
            cin >> data;
            root=deleteNode(root, data);
            cout << "Deleting successfully done : " << endl;
        }
        break;
        case 3:
        {
            cout << "Enter data for searching : " ;
            int data;
            cin >> data;
            if (searchInBst(root, data))
                cout << "Key found in BST " << endl;
            else
                cout << "Key not foud" << endl;
        }
        break;
        case 4:
        {
            cout << "Inorder traversal of BST..." << endl;
            inorder(root);
            cout << endl;
        }
        break;
        case 5:
        {
            cout << "Preorder traversal of BST..." << endl;
            preorder(root);
            cout << endl;
        }
        break;
        case 6:
        {
            cout << "Postorder traversal of BST..." << endl;
            postorder(root);
            cout << endl;
        }
        }
    } while (val != 7);
}
