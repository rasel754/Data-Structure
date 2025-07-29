#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void delete_at_any_position(Node *&head, int idx)
{
    Node* tmp = head;
    for(int i=1; i<idx; i++){
        tmp =tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;
}

void print_forward(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    delete_at_any_position(head,1);
    print_forward(head);
    return 0;
}