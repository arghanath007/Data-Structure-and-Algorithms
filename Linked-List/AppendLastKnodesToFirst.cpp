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

int length(node* head)
{
    int l=0;
    node* temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}

node* AppendAtK(node* head, int k)
{
    node* newTail;
    node* newHead;
    node* tail=head;
    int len= length(head);
    k=k%len;
    int count=1;
    while(tail->next!=NULL) //'tail' should stop at the end of the linked list.
    {
        if(count == (len-k))
        {
            newTail=tail;
        }
        if(count ==(len-k+1))
        {
            newHead=tail;
        }
        count++;
        tail=tail->next;
    }
    newTail->next=NULL;
    tail->next=head;
    return newHead; 
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
    insertAtTail(head,50);
    insertAtTail(head,60);
    Display(head);
    int k;
    cout<<"Enter the Append position: ";
    cin>>k;
    node* newHead=AppendAtK(head,k);
    Display(newHead);
}

//Time complexity -> O(n).