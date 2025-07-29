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
void insert_at_tail(Node *&head,Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail=newnode;
        return;
    }
  
    tail->next = newnode;
    tail=tail->next;
};

void print_link_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->next = tail;

    // Node *head = NULL;

    insert_at_tail(head,tail, 40);
    insert_at_tail(head,tail, 50);
    insert_at_tail(head,tail, 60);
   
    print_link_list(head);

    cout<<"tail : "<<tail->value<<endl;
    return 0;
}