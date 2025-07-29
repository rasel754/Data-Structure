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

int search_the_index(Node *head, int x)
{

    Node *temp = head;

    int index = 0;

    while (temp != NULL)
    {
        if (temp->value == x)
        {
            return index;
        }

        temp = temp->next;
        index++;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
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

        int x;
        cin >> x;

        cout << search_the_index(head, x) << endl;
    }
}