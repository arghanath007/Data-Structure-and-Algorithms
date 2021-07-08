#include<bits/stdc++.h>

using namespace std;


class node
{
public: 
    int data;
    node* next;
    node* previous;
    node(int val)
    {
        data=val;
        next=NULL;
        previous=NULL;
    }
};

void DeleteAtHead(node* &head)
{
    node* toDelete=head;
    head=head->next;
    head->previous=NULL;

    delete toDelete;
}

void Deletion(node* &head, int pos)
{
    if(pos == 1)
    {
        DeleteAtHead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos) //Traversing to the node which we are going to delete.
    {
        temp=temp->next;
        count++;
    }

    temp->previous->next=temp->next;
    if(temp->next!=NULL)
    {
        temp->next->previous=temp->previous;
    }
    delete temp; //'temp' is the node to be deleted.
}

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->previous=n;
    }
    head=n;
}

void insertAtTail(node* &head, int val)
{
    node* temp=head;
    node* n=new node(val);
    if(head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;
}

void display(node* head)
{   
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    // display(head);
    insertAtHead(head,60);
    insertAtHead(head,70);
    // display(head);
    insertAtTail(head,80);
    insertAtTail(head,90);
    display(head);
    Deletion(head, 5);
    display(head);
    Deletion(head, 3);
    display(head);
    Deletion(head, 1);
    display(head);
    return 0;
}