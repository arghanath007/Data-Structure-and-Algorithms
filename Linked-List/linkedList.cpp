#include<bits/stdc++.h>

using namespace std;

class node
{
    public:
        int data;
        node* next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};

void insertAtHead(node* &head, int value)
{
    node* n=new node(value);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head, int value)
{
    node* n=new node(value);
    if(head == NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next !=NULL)
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

bool search(node* head, int key)
{
    node* temp=head;
    while(temp!= NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main()
{
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    insertAtHead(head,4);
    display(head);
    bool result=search(head, 3);
    if(result)
    {
        cout<<"Key found:\n";
    }
    else
    {
        cout<<"Key not found:\n";
    }
    result=search(head, 6);
    if(result)
    {
        cout<<"Key found:\n";
    }
    else
    {
        cout<<"Key not found:\n";
    }
    return 0;
}