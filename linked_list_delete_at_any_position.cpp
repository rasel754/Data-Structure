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

void delete_at_any_position(Node* &head , int idx){
    Node* temp = head;
    for(int i=1; i<idx ; i++){
        temp = temp->next;
    }
    Node* deletedNode = temp->next;
    temp->next = temp->next->next;

    delete deletedNode;

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
   delete_at_any_position(head , 2);
   
   
   print_link_list(head);
}