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

bool linearSearch(node* head, int val)
{
    if(head==NULL)
    {
        return false;
    }
    node* temp=head;
    do
    {
        if(temp->data == val)
        {
            return true;
        }
        temp=temp->next;
    } while (temp!=head);
    return false;
}

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
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
    n->next=head;
    temp->next=n;
    
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
    // bool result=linearSearch(head,5); //Not Found
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    insertAtTail(head,60);
    Display(head);
    insertAtHead(head,69);
    Display(head);
    bool result=linearSearch(head,5);
    if(result)
    {
        cout<<"Found!!";
    }
    else
    {
        cout<<"Not found!!!";
    }
}