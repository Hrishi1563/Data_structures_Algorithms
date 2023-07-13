#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *prev;
    Node *next;

    Node() {
        data = 0;
        prev = NULL;
        next = NULL;
    }

    Node(int val) {
        this->data = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class doublyLinkedList {
private: Node *head, *tail;
public:
    doublyLinkedList() {
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
        tmp->prev = tail;
        tail = tmp;
    }

    void display() {
        Node *tmp = head;
        while (tmp) {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }

    Node *begin() {
        return head;
    }
};

Node* middleNode(Node *head) {
    Node *slow = head;
    Node *fast = head->next;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* left, Node* right) {
    Node *head = new Node();
    Node *pre = head;
    while(left && right) {
        Node *tmp = new Node();
        if (left->data < right->data) {
            tmp->data = left->data;
            left = left->next;
        } else {
            tmp->data = right->data;
            right = right->next;
        }

        pre->next = tmp;
        tmp->prev = pre;
        pre = tmp;
    }

    while(left) {
        Node* tmp = new Node(left->data);
        left = left->next;

        pre->next = tmp;
        tmp->prev = pre;
        pre = tmp;
    }

    while(right) {
        Node *tmp = new Node(right->data);
        right = right->next;

        pre->next = tmp;
        tmp->prev = pre;
        pre = tmp;
    }

    return head->next;
}

Node* doublyMergeSort(Node *head) {
    if (head == NULL || head->next == NULL) return head;

    Node *mid = middleNode(head);
    Node *left = head;
    Node *right = mid->next;

    mid->next = NULL;
    if (right) right->prev = NULL;

    Node* l1 = doublyMergeSort(left);
    Node* l2 = doublyMergeSort(right);

    Node* result = merge(l1, l2);
    head = result;
    return head;

}

signed main() {
    int size;
    doublyLinkedList dl;

   
    // cout << "Enter the size of linkedlist : ";
    cin >> size;
    for (int i=0; i<size; i++) {
        int tmp;
        cin >> tmp;
        dl.insert(tmp);
    }

    Node *result = doublyMergeSort(dl.begin());

    // dl.display();
    while(result) {
        cout << result->data << " ";
        result = result->next;
    }
    cout<< endl;

    // Node* mid = middleNode(dl.begin());
    // cout << mid->data << endl;

}
