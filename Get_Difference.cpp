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

void print_the_difference(Node *head)
{
    int minValue = INT_MAX;
    int maxValue = INT_MIN;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value < minValue)
        {
            minValue = temp->value;
        }

        if (temp->value > maxValue)
        {
            maxValue = temp->value;
        }

        temp = temp->next;
    }
    cout << maxValue - minValue;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int value;
        cin >> value;

        if (value == -1)
        {
            break;
        }
        insert_at_tail(head, tail, value);
    }

    print_the_difference(head);
}