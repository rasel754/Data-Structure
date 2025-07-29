#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = tail->next;
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;

    if (tail == NULL)
    {
        tail = newnode;
    }
};

void delete_at_any_position(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
    {
        return;
    }

    if (idx == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
            tail = NULL;
        return;
    }

    Node *temp = head;
    for (int i = 0; temp != NULL && i < idx - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
    {
        return;
    }

    Node *deletedNode = temp->next;
    temp->next = deletedNode->next;

    if (deletedNode == tail)
    {
        tail = temp;
    }

    delete deletedNode;
}

void print_link_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;

    Node *head = NULL;
    Node *tail = NULL;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_at_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, tail, V);
        }
        else if (X == 2)
        {
            delete_at_any_position(head, tail, V);
        }

        print_link_list(head);
    }

    return 0;
}