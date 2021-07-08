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
    }
};

void makeCycle(node* &head, int pos)
{
    node* temp=head;
    node* startNode;
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

bool detectCycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(fast == slow)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next != fast->next) // If this is equal then it is a cycled list.
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL; //Setting 'slow->next=NULL' so that the cycle of the list is broken and it becomes a singly linked list.
}


void insertAtTail(node* &head, int value)
{
    node* temp=head;
    node* n=new node(value);
    if(head == NULL)
    {
        head=n;
        return;
    }
    while(temp->next!= NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!= NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    makeCycle(head,3);
    // display(head);
    cout<<detectCycle(head);
    removeCycle(head);
    cout<<detectCycle(head);
    return 0;
}
