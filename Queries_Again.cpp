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

int get_size(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void insert_at_position(Node *&head, Node *&tail, int index, int value)
{
    int size = get_size(head);

    if (index < 0 || index > size)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *newNode = new Node(value);

    if (index == 0)
    {
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    else if (index == size)
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }

    cout << "L -> ";
    Node *l = head;
    while (l != NULL)
    {
        cout << l->value << " ";
        l = l->next;
    }
    cout << endl;

    cout << "R -> ";
    Node *r = tail;
    while (r != NULL)
    {
        cout << r->value << " ";
        r = r->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        insert_at_position(head, tail, X, V);
    }

    return 0;
}
