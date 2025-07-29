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

void remove_duplicate(Node *&head)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *temp = current;
        while (temp->next != NULL)
        {
            if (temp->next->value == current->value)
            {
                Node *duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate;
            }
            else
            {
                temp = temp->next;
            }
        }
        current = current->next;
    }
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

    remove_duplicate(head);
    print_link_list(head);
}