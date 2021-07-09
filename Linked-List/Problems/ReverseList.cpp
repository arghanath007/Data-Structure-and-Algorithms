#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

node* reverse(node* &head)
{
    node* prevPtr=NULL;
    node* currentPtr=head;
    node* nextPtr;
    while(currentPtr!=NULL)
    {
        nextPtr=currentPtr->next;
        currentPtr->next=prevPtr;
        prevPtr=currentPtr;
        currentPtr=nextPtr;
    }
    return prevPtr;
}

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void Display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

int main()
{
    node* head=NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    Display(head);
    node* newHead=reverse(head);
    Display(newHead);
}