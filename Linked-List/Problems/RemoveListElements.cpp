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

void removeElements(node* &head, int val)
{
    if(head==NULL)
    {
        return;
    }
    while(head!=NULL && head->data== val)
    {
        head=head->next;
    }
    node* current=head;
    while(current!=NULL && current->next!=NULL)
    {
        if(current->next->data == val)
        {
            current->next=current->next->next;
        }
        else
        {
            current=current->next;
        }
    }
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
    // insertAtHead(head,1);
    // insertAtTail(head,2);
    // insertAtTail(head,6);
    // insertAtTail(head,3);
    // insertAtTail(head,4);
    // insertAtTail(head,5);
    // insertAtTail(head,6);
    // Display(head);
    // removeElements(head, 6);
    // Display(head);

    insertAtHead(head,7);
    insertAtHead(head,7);
    insertAtHead(head,7);
    insertAtHead(head,7);
    Display(head);
    removeElements(head, 7);
    Display(head);
}