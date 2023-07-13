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


void mergeSortedLinkedList(Node *head1, Node *head2, LinkedList &merge) {
    Node *tmp1 = head1;
    Node *tmp2 = head2;

    while (tmp1 && tmp2) {
        if (tmp1->data < tmp2->data) {
            merge.insert(tmp1->data);
            tmp1 = tmp1->next;
        } else {
            merge.insert(tmp2->data);
            tmp2 = tmp2->next;
        }

    }

    while(tmp1) {
        merge.insert(tmp1->data);
        tmp1 = tmp1->next;
    }

    while(tmp2) {
        merge.insert(tmp2->data);
        tmp2 = tmp2->next;
    }
}



signed main() {
    int size1, size2;
    LinkedList ll1, ll2, merged;


    cout << "Enter the size of first linkedlist : ";
    cin >> size1;
    for (int i=0; i<size1; i++) {
        int tmp;
        cin >> tmp;
        ll1.insert(tmp);
    }

    cout << "Enter the size of second linkedlist : ";
    cin >> size2;
    for (int i=0; i<size2; i++) {
        int tmp;
        cin >> tmp;
        ll2.insert(tmp);
    }

    mergeSortedLinkedList(ll1.begin(), ll2.begin(), merged);
    merged.display();

}
