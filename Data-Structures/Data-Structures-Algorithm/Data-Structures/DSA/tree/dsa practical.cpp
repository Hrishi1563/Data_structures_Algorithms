#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
   Node(int d){
    this->data = d;
    this->next = NULL;
   }
};
void insertInLinkedList(Node* &head,Node* &tail,int d){
    if(head == tail  && head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else {
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }
}
bool search(Node* head,int d){
    Node* curr = head;
    while(curr!=NULL){
       if(curr->data==d){
        return true;
       }
       curr = curr->next;
    }
    return false;
}
void insertionSort(vector<int> v,int n){
    for(int i = 1;i<n;i++){
        int temp = v[i];
        int j = i-1;
        for( ; j>=0;j--){
            if(v[j]>temp){
                v[j+1] = v[j];
            }
            else break;
        }
        v[j+1] = temp;
    }

    for(int i = 0;i<n;i++){
        cout << v[i] << " ";
    }
}
void find_Common_Elements(Node* head1,Node* head2){
    Node* curr = head1;
    vector<int> v;
    while(curr!=NULL){
        if(search(head2,curr->data)){
            bool flag = false;
            for(int i =0;i<v.size();i++){
                if(curr->data == v[i]){
                     flag = true;
                     break;
                }
            }
            if(!flag){
                v.push_back(curr->data);
            }
        }
        curr = curr->next;
    }
    if(v.size()==0) cout << "No common elements in both if the list" << endl;
    else
    {
    	cout<<"Common Elements "<<endl;
	for(int i = 0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    insertionSort(v,v.size());}
}
int main(){
   cout << "Entering data for the list" << endl;
   Node* list1 = NULL;
   Node* tail1 = list1;
   int data;
   do{
     cout << "Enter data for the list " ;
     cin >> data;
     if(data!=-1)
       {insertInLinkedList(list1,tail1,data);}
   }while(data!=-1);

   cout << "Enter data of list2..." << endl;
   Node* list2 = NULL;
   Node* tail2 = list2;
   do{
     cout << "Enter data : " ;
     cin >> data;
     if(data!=-1)
       {insertInLinkedList(list2,tail2,data);}
   }while(data!=-1);
   find_Common_Elements(list1,list2);
}
