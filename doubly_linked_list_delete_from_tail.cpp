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

void delete_at_tail(Node *&head, Node *tail)
{
    Node *deletedNode = tail;
    tail = tail->prev;

    delete deletedNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
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
    Node *a = new Node(100);
    Node *tail = new Node(1000);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    delete_at_tail(head, tail);
    print_forward(head);
    return 0;
}