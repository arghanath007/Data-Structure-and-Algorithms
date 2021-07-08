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

node* removeDupes(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* temp=head;
    while(temp)
    {
        while(temp->next && temp->data == temp->next->data)
        {
            temp->next=temp->next->next;
        }
        temp=temp->next;
    }
    return head;
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
    while (temp->next!=NULL)
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
    //They should be in Ascending/increasing order.
    insertAtTail(head,10);
    insertAtTail(head,10);
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,30);
    Display(head);
    node* newHead=removeDupes(head);
    Display(newHead);
    return 0;

}