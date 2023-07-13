#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node () {
        data = 0;
        next = NULL;
    }

    Node (int val) {
        this->data = val;
        this->next = NULL;
    }
};

class LinkedList {
private: Node *head, *tail;
public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insert(int val) {
        Node *tmp = new Node(val);
        if (tail == NULL) {
            head = tmp;
            tail = tmp;
            return;
        }

        tail->next = tmp;
        tail = tmp;
    }

    int size() {
        Node *tmp = head;
        int counter = 0;
        while(tmp) {
            counter++;
            tmp = tmp->next;
        }
        return counter;
    }

    void erase(int index) {
        Node *curr = head;
        Node *prev = NULL;

        if (curr == NULL) {
            cout << "List Empty" << endl;
            return;
        }

        if (index >= size() || index < 0) {
            cout << "Index out of range" << endl;
            return;
        }

        while (index--) {
            prev = curr;
            curr = curr->next;
        }

        if (prev == NULL) {
            head = curr->next;
            delete curr;
            return;
        }

        prev->next = curr->next;
        delete curr;
    }

    void display() {
        Node *tmp = head;
        while(tmp) {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }

    Node* begin() {
        return head;
    }
};



signed main() {
    LinkedList ll;

    int size;
    cout << "Enter the number of elements to insert in a LinkedList: ";
    cin >> size;
    for (int i=0; i<size; i++) {
        int data;
        cin >> data;
        ll.insert(data);
    }

    Node* head = ll.begin();
    LinkedList even;
    LinkedList odd;
    int index = 0;
    while(head) {
        if (index % 2) {
            odd.insert(head->data);
        } else {
            even.insert(head->data);
        }
        index++;
        head = head->next;
    } 
    cout<<"first list "<<endl;
    even.display();
    cout<<"Second list "<<endl;
    odd.display();

}
