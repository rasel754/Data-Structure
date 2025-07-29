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
void  print_revers(Node* temp){
    if(temp==NULL){
        return;
    }
     print_revers(temp->next);
    cout<<temp->value<<endl;
}
int main()
{
   Node *head= NULL;
   Node *tail = NULL;

   while (true)
   {
    int value;
    cin>>value;

    if(value==-1){
        break;
    }
    insert_at_tail(head,tail,value);
   }
  print_revers(head);
}