#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    node* next;
    int data;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

node* findMid(node* &head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
        if(fast)
        {
            fast=fast->next;
        }
    }
    return slow;
}

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

bool compareList(node* headOne, node* headTwo)
{
    while(headOne!=NULL && headTwo!=NULL)
    {
        if(headOne->data != headTwo->data) 
        {
            return false;
        }
        headOne=headOne->next;
        headTwo=headTwo->next;
    }
    return true;
}


bool palindrome(node* &head)
{
    if(head ==NULL || head->next==NULL)
    {
        return true;
    }
    node* temp=head;
    node* mid=findMid(temp);
    node* revHead=reverse(mid);
    return compareList(head, revHead);

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
    // insertAtTail(head,10);
    // insertAtTail(head,20);
    // insertAtTail(head,30);
    // insertAtTail(head,40);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,2);
    insertAtHead(head,1);
    Display(head);
    bool result=palindrome(head);
    if(result)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
}