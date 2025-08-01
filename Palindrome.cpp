#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* prev;

    Node(int value) {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool isPalindrome(Node* head, Node* tail) {
    while (head != NULL && tail != NULL && head != tail && head->prev != tail) {
        if (head->value != tail->value) {
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val && val != -1) {
        insert_at_tail(head, tail, val);
    }

    if (isPalindrome(head, tail)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
