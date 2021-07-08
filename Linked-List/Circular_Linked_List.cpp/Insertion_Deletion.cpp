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

void deleteAtHead(node* &head)
{
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }

    node* toDelete=head;
    temp->next=head->next;
    head=head->next;

    delete toDelete;
}

void deletion(node* &head, int pos)
{
    if(pos==1)
    {
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1)
    {
        temp=temp->next;
        count++;
    }

    node* toDelete=temp->next;
    temp->next=temp->next->next;

    delete toDelete;
}

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    n->next=head;
    temp->next=n;
    head=n;
}

void insertAtTail(node* &head, int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* temp=head;
    node* n=new node(val);
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void Display(node* head)
{
    node* temp=head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    } while (temp!=head);
    cout<<"NULL\n";
}

int main()
{
    node* head=NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    insertAtTail(head,60);
    Display(head);
    insertAtHead(head,69);
    Display(head);
    deletion(head,1);
    Display(head);
}