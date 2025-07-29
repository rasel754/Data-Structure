#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node* prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev=NULL;
    }
};

void insert_at_head(Node* &head ,Node* &tail, int val){
    Node* newNode = new Node(val);
      if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head =newNode;
}

void print_forward(Node* head){
    Node* tmp = head;

    while (tmp != NULL)
    {
        cout<<tmp->value <<" ";
        tmp=tmp->next;
    }
    cout<<endl;

}
int main() {
    Node* head =new Node(10);
    Node* a =new Node(10);
    Node* tail =new Node(10);

    head->next =a;
    a->prev=head;
    a->next=tail;
    tail->prev =a;

    insert_at_head(head ,tail, 100);

    print_forward(head);
    return 0;
}