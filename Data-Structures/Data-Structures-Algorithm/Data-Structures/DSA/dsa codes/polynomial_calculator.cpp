#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int coefficient;
    int power;
    Node* next;

    Node() {
        coefficient = 0;
        power = 0;
        next = NULL;
    }

    Node(int coeff, int pow) {
        this->coefficient = coeff;
        this->power = pow;
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

    void insert(int coeff, int pow) {
        Node *tmp = new Node(coeff, pow);
        if (tail == NULL) {
            head = tmp;
            tail = tmp;
            return;
        }

        tail->next = tmp;
        tail = tmp;
    }  

    void display() {
        Node* tmp = head;
        while(tmp) {
            cout << tmp->coefficient << "-" << tmp->power << endl;
            tmp = tmp->next;
        }
    }

    Node* begin() {
        return head;
    }
};

int sumPolynomial(Node *head, int val) {
    Node* tmp = head;
    int ans = 0;
    while(tmp) {
        ans += tmp->coefficient * pow(val, tmp->power);
        tmp = tmp->next;
    }

    return ans;
}

signed main() {
    

    LinkedList ll;
    int size;

    cin >> size;
    for (int i=0; i<size; i++) {
        int tmp_coeff, tmp_pow;
        cout<<"Enter coefficient"<<endl;
        cin >> tmp_coeff;
        cout<<"Enter power"<<endl;
	     cin>> tmp_pow;
        ll.insert(tmp_coeff, tmp_pow);
    }

    int val;
    cin >> val;
    cout << sumPolynomial(ll.begin(), val) << endl;
}
