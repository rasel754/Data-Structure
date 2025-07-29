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

bool check_same_to_same(Node *head1, Node *head2)
{

    Node *temp1 = head1;
    Node *temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->value != temp2->value)
            return false;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 != NULL || temp2 != NULL)
        return false;

    return true;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head1, tail1, value);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head2, tail2, value);
    }

    if (check_same_to_same(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}